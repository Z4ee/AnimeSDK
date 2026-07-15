#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByInTurnBasedGameModeState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A64D6E5B36D6E184_EVALUATE_OFFSET UNITYSDK_OFFSET(0x179E8B30)
#define CLASS_3_A64D6E5B36D6E184__CTOR_OFFSET UNITYSDK_OFFSET(0x179E8B00)

inline static constexpr unsigned int Class_3_A64D6E5B36D6E184_TypeDefinitionIndex = 52158;

class Class_3_A64D6E5B36D6E184 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByInTurnBasedGameModeState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInTurnBasedGameModeState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInTurnBasedGameModeState*))((::PBYTE)hIl2Cpp + CLASS_3_A64D6E5B36D6E184__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A64D6E5B36D6E184_EVALUATE_OFFSET))(this);
	}
};
