#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSkillUsageLimit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8BCF4026703D09F7_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC200930)
#define CLASS_3_8BCF4026703D09F7__CTOR_OFFSET UNITYSDK_OFFSET(0xC200900)

inline static constexpr unsigned int Class_3_8BCF4026703D09F7_TypeDefinitionIndex = 51008;

class Class_3_8BCF4026703D09F7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSkillUsageLimit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSkillUsageLimit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSkillUsageLimit*))((::PBYTE)hIl2Cpp + CLASS_3_8BCF4026703D09F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BCF4026703D09F7_EVALUATE_OFFSET))(this);
	}
};
