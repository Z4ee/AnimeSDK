#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTeamEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B73C5984681BC597_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14528880)
#define CLASS_3_B73C5984681BC597__CTOR_OFFSET UNITYSDK_OFFSET(0x14528830)

inline static constexpr unsigned int Class_3_B73C5984681BC597_TypeDefinitionIndex = 56579;

class Class_3_B73C5984681BC597 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchTeamEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchTeamEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B73C5984681BC597__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_B73C5984681BC597_EVALUATE_OFFSET))(this, a1, a2);
	}
};
