#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_ByHasAdvBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9FBA7599334F69B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116AF350)
#define CLASS_3_9FBA7599334F69B1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x116AF2A0)
#define CLASS_3_9FBA7599334F69B1__CTOR_OFFSET UNITYSDK_OFFSET(0x116AF240)
#define CLASS_3_9FBA7599334F69B1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116AF3A0)

inline static constexpr unsigned int Class_3_9FBA7599334F69B1_TypeDefinitionIndex = 42210;

class Class_3_9FBA7599334F69B1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByHasAdvBehaviorFlag*>
{
public:
	::RPG::GameCore::AdventureAbilityComponent* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_3_9FBA7599334F69B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FBA7599334F69B1_EVALUATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FBA7599334F69B1_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FBA7599334F69B1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
