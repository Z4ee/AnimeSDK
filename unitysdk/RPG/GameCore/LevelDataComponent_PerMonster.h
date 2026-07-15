#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelDataComponent_PerMonster_State.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELDATACOMPONENT_PERMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF3F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDataComponent_PerMonster_TypeDefinitionIndex = 55026;

	class LevelDataComponent_PerMonster : public ::System::Object
	{
	public:
		::System::UInt32 MonsterID; // 0x10
		::System::UInt32 MonsterRuntimeID; // 0x14
		::RPG::GameCore::LevelDataComponent_PerMonster_State SummonState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_PERMONSTER__CTOR_OFFSET))(this);
		}
	};
}
