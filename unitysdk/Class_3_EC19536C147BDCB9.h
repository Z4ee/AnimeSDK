#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureByIsPropertyValueMinOrMax; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EC19536C147BDCB9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18590DB0)
#define CLASS_3_EC19536C147BDCB9_METHOD_3_339F5EEE707A05C8_OFFSET UNITYSDK_OFFSET(0x18591080)
#define CLASS_3_EC19536C147BDCB9_METHOD_3_523FB1F76A35E8E3_OFFSET UNITYSDK_OFFSET(0x18591180)
#define CLASS_3_EC19536C147BDCB9__CTOR_OFFSET UNITYSDK_OFFSET(0x18590D80)

inline static constexpr unsigned int Class_3_EC19536C147BDCB9_TypeDefinitionIndex = 51997;

class Class_3_EC19536C147BDCB9 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + CLASS_3_EC19536C147BDCB9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC19536C147BDCB9_EVALUATE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_339F5EEE707A05C8(::RPG::GameCore::AdventureAbilityComponent* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_3_EC19536C147BDCB9_METHOD_3_339F5EEE707A05C8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_523FB1F76A35E8E3(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_EC19536C147BDCB9_METHOD_3_523FB1F76A35E8E3_OFFSET))(this, a1, a2);
	}
};
