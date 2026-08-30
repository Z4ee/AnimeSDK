#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureIsTriggerBattleByNpcMonster; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_02BB0BBC35ED4926_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC3EBB10)
#define CLASS_3_02BB0BBC35ED4926__CTOR_OFFSET UNITYSDK_OFFSET(0xC3EBAE0)

inline static constexpr unsigned int Class_3_02BB0BBC35ED4926_TypeDefinitionIndex = 58049;

class Class_3_02BB0BBC35ED4926 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*))((::PBYTE)hIl2Cpp + CLASS_3_02BB0BBC35ED4926__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02BB0BBC35ED4926_EVALUATE_OFFSET))(this);
	}
};
