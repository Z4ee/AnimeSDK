#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1841D2A0)
#define RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA_SETCONFIGTICKTIME_OFFSET UNITYSDK_OFFSET(0x1841D1C0)
#define RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA_TICK_OFFSET UNITYSDK_OFFSET(0x1841D220)
#define RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1841D1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntity_ComponentDelayedTickData_TypeDefinitionIndex = 53768;

	class GameEntity_ComponentDelayedTickData : public ::System::Object
	{
	public:
		::System::Single _ConfigTickTime; // 0x10
		::System::Single _CurrentTickTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetConfigTickTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA_SETCONFIGTICKTIME_OFFSET))(this, a1);
		}

		::System::Single Tick(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA_TICK_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_COMPONENTDELAYEDTICKDATA_CLEAR_OFFSET))(this);
		}
	};
}
