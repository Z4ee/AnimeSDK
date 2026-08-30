#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirGameSession; }

#define RPG_CLIENT_PIXAIR_PIXAIRSELLANDREFRESHLOCKER_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1BD15FB0)
#define RPG_CLIENT_PIXAIR_PIXAIRSELLANDREFRESHLOCKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCFB0D0)
#define RPG_CLIENT_PIXAIR_PIXAIRSELLANDREFRESHLOCKER__LOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1BD15E00)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirSellAndRefreshLocker_TypeDefinitionIndex = 78864;

	class PixAirSellAndRefreshLocker : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirGameSession* _Session; // 0x10
		::System::Boolean _HasConfig; // 0x18
		::System::UInt32 _UnlockNodeID; // 0x1C
		::System::UInt32 _UnlockAreaID; // 0x20

		::System::Void _ctor(::RPG::Client::PixAir::PixAirGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSELLANDREFRESHLOCKER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSELLANDREFRESHLOCKER_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void _LoadConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSELLANDREFRESHLOCKER__LOADCONFIG_OFFSET))(this);
		}
	};
}
