#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtBySkillCanUse; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6DDE56EDF8034E95_EVALUATE_OFFSET UNITYSDK_OFFSET(0x144BDB80)
#define CLASS_3_6DDE56EDF8034E95__CTOR_OFFSET UNITYSDK_OFFSET(0x144BDB50)

inline static constexpr unsigned int Class_3_6DDE56EDF8034E95_TypeDefinitionIndex = 50374;

class Class_3_6DDE56EDF8034E95 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtBySkillCanUse*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBySkillCanUse* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBySkillCanUse*))((::PBYTE)hIl2Cpp + CLASS_3_6DDE56EDF8034E95__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DDE56EDF8034E95_EVALUATE_OFFSET))(this);
	}
};
