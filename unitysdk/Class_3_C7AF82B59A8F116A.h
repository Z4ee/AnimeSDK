#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureByIsPropertyValueMinOrMax; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C7AF82B59A8F116A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11E279D0)
#define CLASS_3_C7AF82B59A8F116A_METHOD_3_0C65FEC03EB5BE56_OFFSET UNITYSDK_OFFSET(0x11E27D70)
#define CLASS_3_C7AF82B59A8F116A_METHOD_3_58369F69D910B422_OFFSET UNITYSDK_OFFSET(0x11E27CD0)
#define CLASS_3_C7AF82B59A8F116A__CTOR_OFFSET UNITYSDK_OFFSET(0x11E279A0)

inline static constexpr unsigned int Class_3_C7AF82B59A8F116A_TypeDefinitionIndex = 50246;

class Class_3_C7AF82B59A8F116A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + CLASS_3_C7AF82B59A8F116A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7AF82B59A8F116A_EVALUATE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_58369F69D910B422(::RPG::GameCore::AdventureAbilityComponent* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_3_C7AF82B59A8F116A_METHOD_3_58369F69D910B422_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0C65FEC03EB5BE56(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_C7AF82B59A8F116A_METHOD_3_0C65FEC03EB5BE56_OFFSET))(this, a1, a2);
	}
};
