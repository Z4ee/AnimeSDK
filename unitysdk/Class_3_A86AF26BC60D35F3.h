#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsSwordTrainingSkillCanLearn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A86AF26BC60D35F3_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBAA3660)
#define CLASS_3_A86AF26BC60D35F3__CTOR_OFFSET UNITYSDK_OFFSET(0xBAA3620)

inline static constexpr unsigned int Class_3_A86AF26BC60D35F3_TypeDefinitionIndex = 54899;

class Class_3_A86AF26BC60D35F3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*>
{
public:
	::System::UInt32 CHPOANEOFCO; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*))((::PBYTE)hIl2Cpp + CLASS_3_A86AF26BC60D35F3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A86AF26BC60D35F3_EVALUATE_OFFSET))(this);
	}
};
