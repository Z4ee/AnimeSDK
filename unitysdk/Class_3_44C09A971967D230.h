#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckLastBattleSkillDrop; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_44C09A971967D230_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFC67A0)
#define CLASS_3_44C09A971967D230__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC6770)

inline static constexpr unsigned int Class_3_44C09A971967D230_TypeDefinitionIndex = 53387;

class Class_3_44C09A971967D230 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckLastBattleSkillDrop*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*))((::PBYTE)hIl2Cpp + CLASS_3_44C09A971967D230__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_44C09A971967D230_EVALUATE_OFFSET))(this);
	}
};
