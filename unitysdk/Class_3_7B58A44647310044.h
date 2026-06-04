#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsPropertyValueMinOrMax; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_7B58A44647310044_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1367E130)
#define CLASS_3_7B58A44647310044_METHOD_3_523FB1F76A35E8E3_OFFSET UNITYSDK_OFFSET(0x1367E410)
#define CLASS_3_7B58A44647310044_METHOD_3_D91DBCBDFD62993C_OFFSET UNITYSDK_OFFSET(0x1367E370)
#define CLASS_3_7B58A44647310044__CTOR_OFFSET UNITYSDK_OFFSET(0x1367E100)

inline static constexpr unsigned int Class_3_7B58A44647310044_TypeDefinitionIndex = 51114;

class Class_3_7B58A44647310044 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsPropertyValueMinOrMax*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + CLASS_3_7B58A44647310044__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B58A44647310044_EVALUATE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_D91DBCBDFD62993C(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_3_7B58A44647310044_METHOD_3_D91DBCBDFD62993C_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_523FB1F76A35E8E3(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_7B58A44647310044_METHOD_3_523FB1F76A35E8E3_OFFSET))(this, a1, a2);
	}
};
