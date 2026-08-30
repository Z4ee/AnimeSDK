#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelLeaderboardResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_2__CLEANUPTIMEDOUTCALLBACKS_B__2_OFFSET UNITYSDK_OFFSET(0x1C6CF710)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6CF700)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices___c__DisplayClass41_2_TypeDefinitionIndex = 46976;

	class HoYoChannelGameplayServices___c__DisplayClass41_2 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_2__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_2__CLEANUPTIMEDOUTCALLBACKS_B__2_OFFSET))(this);
		}
	};
}
