#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6CF4B0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS35_0__ONRECENTPLAYERSCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1C6CF4C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices___c__DisplayClass35_0_TypeDefinitionIndex = 46973;

	class HoYoChannelGameplayServices___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>* callback; // 0x10
		::System::String* jsonResponse; // 0x18
		::System::Int32 resultCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRecentPlayersCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS35_0__ONRECENTPLAYERSCALLBACK_B__0_OFFSET))(this);
		}
	};
}
