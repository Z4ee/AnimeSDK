#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHaveAbilityTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_72EED5E8B2FB6C67_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17E61350)
#define CLASS_3_72EED5E8B2FB6C67__CTOR_OFFSET UNITYSDK_OFFSET(0x17E61320)

inline static constexpr unsigned int Class_3_72EED5E8B2FB6C67_TypeDefinitionIndex = 54837;

class Class_3_72EED5E8B2FB6C67 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHaveAbilityTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveAbilityTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveAbilityTarget*))((::PBYTE)hIl2Cpp + CLASS_3_72EED5E8B2FB6C67__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72EED5E8B2FB6C67_EVALUATE_OFFSET))(this);
	}
};
