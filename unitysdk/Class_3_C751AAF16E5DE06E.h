#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_ByHasAdvBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C751AAF16E5DE06E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4F6DF0)
#define CLASS_3_C751AAF16E5DE06E_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE4F6D40)
#define CLASS_3_C751AAF16E5DE06E__CTOR_OFFSET UNITYSDK_OFFSET(0xE4F6C80)

inline static constexpr unsigned int Class_3_C751AAF16E5DE06E_TypeDefinitionIndex = 49820;

class Class_3_C751AAF16E5DE06E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByHasAdvBehaviorFlag*>
{
public:
	::RPG::GameCore::AdventureAbilityComponent* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_3_C751AAF16E5DE06E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C751AAF16E5DE06E_EVALUATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C751AAF16E5DE06E_DISPOSE_OFFSET))(this);
	}
};
