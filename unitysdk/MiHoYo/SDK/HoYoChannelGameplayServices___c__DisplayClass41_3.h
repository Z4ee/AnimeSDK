#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelActivityResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_3__CLEANUPTIMEDOUTCALLBACKS_B__3_OFFSET UNITYSDK_OFFSET(0x1BF0BA70)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0BA60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices___c__DisplayClass41_3_TypeDefinitionIndex = 36904;

	class HoYoChannelGameplayServices___c__DisplayClass41_3 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_3__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_3__CLEANUPTIMEDOUTCALLBACKS_B__3_OFFSET))(this);
		}
	};
}
