#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareCurrentSkillEffectIsDamaging; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_359E3DB5121C3795_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B1D9E0)
#define CLASS_3_359E3DB5121C3795__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1D9B0)

inline static constexpr unsigned int Class_3_359E3DB5121C3795_TypeDefinitionIndex = 52053;

class Class_3_359E3DB5121C3795 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + CLASS_3_359E3DB5121C3795__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_359E3DB5121C3795_EVALUATE_OFFSET))(this);
	}
};
