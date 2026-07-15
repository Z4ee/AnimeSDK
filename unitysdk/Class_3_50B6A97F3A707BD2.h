#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvTeamMembers; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_50B6A97F3A707BD2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14BA6310)
#define CLASS_3_50B6A97F3A707BD2__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA62C0)

inline static constexpr unsigned int Class_3_50B6A97F3A707BD2_TypeDefinitionIndex = 56446;

class Class_3_50B6A97F3A707BD2 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvTeamMembers*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvTeamMembers* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvTeamMembers*))((::PBYTE)hIl2Cpp + CLASS_3_50B6A97F3A707BD2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_50B6A97F3A707BD2_EVALUATE_OFFSET))(this, a1, a2);
	}
};
