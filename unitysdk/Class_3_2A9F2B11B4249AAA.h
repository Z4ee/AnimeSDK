#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareControlSkillEffectIsDamaging; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2A9F2B11B4249AAA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10BD7DD0)
#define CLASS_3_2A9F2B11B4249AAA__CTOR_OFFSET UNITYSDK_OFFSET(0x10BD7DA0)

inline static constexpr unsigned int Class_3_2A9F2B11B4249AAA_TypeDefinitionIndex = 43605;

class Class_3_2A9F2B11B4249AAA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + CLASS_3_2A9F2B11B4249AAA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A9F2B11B4249AAA_EVALUATE_OFFSET))(this);
	}
};
