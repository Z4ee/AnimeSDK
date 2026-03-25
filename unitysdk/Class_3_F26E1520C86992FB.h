#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareAbilityProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F26E1520C86992FB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA461210)
#define CLASS_3_F26E1520C86992FB__CTOR_OFFSET UNITYSDK_OFFSET(0xA4611E0)

inline static constexpr unsigned int Class_3_F26E1520C86992FB_TypeDefinitionIndex = 43591;

class Class_3_F26E1520C86992FB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareAbilityProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareAbilityProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareAbilityProperty*))((::PBYTE)hIl2Cpp + CLASS_3_F26E1520C86992FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F26E1520C86992FB_EVALUATE_OFFSET))(this);
	}
};
