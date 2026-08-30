#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget_Boss.h"

namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xE4312A0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS_SLEEP_OFFSET UNITYSDK_OFFSET(0xE431600)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS_TICK_OFFSET UNITYSDK_OFFSET(0xE431300)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS_WAKEUP_OFFSET UNITYSDK_OFFSET(0xE4314E0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS__CTOR_OFFSET UNITYSDK_OFFSET(0xE4318C0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_RogueBoss_TypeDefinitionIndex = 68698;

	class WolfBroGunPlayTarget_RogueBoss : public ::RPG::Client::WolfBroGunPlayTarget_Boss
	{
	public:
		::System::String* enableTimelineNameWhenSleep; // 0x100
		::System::String* enableCustomStringWhenSleep; // 0x108
		::System::Boolean OFJCAODMIIH; // 0x110
		::System::Boolean BCJCDAFHJKO; // 0x111

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS__CTOR_OFFSET))(this);
		}

		::System::Boolean IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS_ISHITTABLE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS_TICK_OFFSET))(this, a1);
		}

		::System::Void Wakeup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS_WAKEUP_OFFSET))(this);
		}

		::System::Void Sleep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS_SLEEP_OFFSET))(this);
		}
	};
}
