#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByContainBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_5D816765DBB57CAC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8F55AF0)
#define CLASS_3_5D816765DBB57CAC_METHOD_3_1A1D79A1EFC7E86A_OFFSET UNITYSDK_OFFSET(0x8F55C60)
#define CLASS_3_5D816765DBB57CAC__CTOR_OFFSET UNITYSDK_OFFSET(0x8F55AC0)

inline static constexpr unsigned int Class_3_5D816765DBB57CAC_TypeDefinitionIndex = 50366;

class Class_3_5D816765DBB57CAC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByContainBehaviorFlag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_3_5D816765DBB57CAC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D816765DBB57CAC_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_1A1D79A1EFC7E86A(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_3_5D816765DBB57CAC_METHOD_3_1A1D79A1EFC7E86A_OFFSET))(this, a1);
	}
};
