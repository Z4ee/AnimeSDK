#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_79C349AB4610B8F9_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x17057CA0)
#define CLASS_2_79C349AB4610B8F9__CTOR_OFFSET UNITYSDK_OFFSET(0x17057C90)

inline static constexpr unsigned int Class_2_79C349AB4610B8F9_TypeDefinitionIndex = 57208;

class Class_2_79C349AB4610B8F9 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x68

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_79C349AB4610B8F9__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79C349AB4610B8F9_GET_FLAG_OFFSET))(this);
	}
};
