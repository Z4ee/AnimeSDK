#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_5__CLEANUPTIMEDOUTCALLBACKS_B__5_OFFSET UNITYSDK_OFFSET(0xB1DFB60)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_5__CTOR_OFFSET UNITYSDK_OFFSET(0xB1DFB50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices___c__DisplayClass41_5_TypeDefinitionIndex = 46979;

	class HoYoChannelGameplayServices___c__DisplayClass41_5 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_5__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_5__CLEANUPTIMEDOUTCALLBACKS_B__5_OFFSET))(this);
		}
	};
}
