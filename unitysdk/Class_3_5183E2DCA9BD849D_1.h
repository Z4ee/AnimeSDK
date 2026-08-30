#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchFateRinCardSkillTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5183E2DCA9BD849D_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x162B4AC0)
#define CLASS_3_5183E2DCA9BD849D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x162B4A70)

inline static constexpr unsigned int Class_3_5183E2DCA9BD849D_1_TypeDefinitionIndex = 59281;

class Class_3_5183E2DCA9BD849D_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchFateRinCardSkillTargetList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*))((::PBYTE)hIl2Cpp + CLASS_3_5183E2DCA9BD849D_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5183E2DCA9BD849D_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};
