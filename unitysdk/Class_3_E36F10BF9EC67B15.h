#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByNpcMazeSkillCooldown; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E36F10BF9EC67B15_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11C0BFA0)
#define CLASS_3_E36F10BF9EC67B15__CTOR_OFFSET UNITYSDK_OFFSET(0x11C0BF70)

inline static constexpr unsigned int Class_3_E36F10BF9EC67B15_TypeDefinitionIndex = 48981;

class Class_3_E36F10BF9EC67B15 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByNpcMazeSkillCooldown*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*))((::PBYTE)hIl2Cpp + CLASS_3_E36F10BF9EC67B15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E36F10BF9EC67B15_EVALUATE_OFFSET))(this);
	}
};
