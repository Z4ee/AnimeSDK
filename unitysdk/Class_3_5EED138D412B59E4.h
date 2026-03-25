#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByMoveInputTowardsTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5EED138D412B59E4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x99D9D20)
#define CLASS_3_5EED138D412B59E4__CTOR_OFFSET UNITYSDK_OFFSET(0x99D9CF0)

inline static constexpr unsigned int Class_3_5EED138D412B59E4_TypeDefinitionIndex = 42994;

class Class_3_5EED138D412B59E4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByMoveInputTowardsTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + CLASS_3_5EED138D412B59E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EED138D412B59E4_EVALUATE_OFFSET))(this);
	}
};
