#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB699180)
#define RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA_SETCONFIGTICKTIME_OFFSET UNITYSDK_OFFSET(0xB6990A0)
#define RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA_TICK_OFFSET UNITYSDK_OFFSET(0xB699100)
#define RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB699090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntity_ComponentDelayedTickData_TypeDefinitionIndex = 49335;

	class GameEntity_ComponentDelayedTickData : public ::System::Object
	{
	public:
		::System::Single _ConfigTickTime; // 0x10
		::System::Single _CurrentTickTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetConfigTickTime(::System::Single configTickTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA_SETCONFIGTICKTIME_OFFSET))(this, configTickTime);
		}

		::System::Single Tick(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA_TICK_OFFSET))(this, time);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA_CLEAR_OFFSET))(this);
		}
	};
}
