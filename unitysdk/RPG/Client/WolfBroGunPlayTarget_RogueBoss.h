#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget_Boss.h"

namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xA798910)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS_SLEEP_OFFSET UNITYSDK_OFFSET(0xA798C70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS_TICK_OFFSET UNITYSDK_OFFSET(0xA798970)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS_WAKEUP_OFFSET UNITYSDK_OFFSET(0xA798B50)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS__CTOR_OFFSET UNITYSDK_OFFSET(0xA798F40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS___IFIXBASEPROXY_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xA798F50)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA798F60)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_RogueBoss_TypeDefinitionIndex = 56130;

	class WolfBroGunPlayTarget_RogueBoss : public ::RPG::Client::WolfBroGunPlayTarget_Boss
	{
	public:
		::System::String* enableTimelineNameWhenSleep; // 0x100
		::System::String* enableCustomStringWhenSleep; // 0x108
		::System::Boolean Field_7_2; // 0x110
		::System::Boolean Field_7_3; // 0x111

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

		::System::Boolean __iFixBaseProxy_IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS___IFIXBASEPROXY_ISHITTABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEBOSS___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
