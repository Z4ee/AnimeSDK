#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTeamEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B73C5984681BC597_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B35DC0)
#define CLASS_3_B73C5984681BC597__CTOR_OFFSET UNITYSDK_OFFSET(0x15B35D70)

inline static constexpr unsigned int Class_3_B73C5984681BC597_TypeDefinitionIndex = 59363;

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
