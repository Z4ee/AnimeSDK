#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_4__CLEANUPTIMEDOUTCALLBACKS_B__4_OFFSET UNITYSDK_OFFSET(0x1D27D340)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27D330)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices___c__DisplayClass41_4_TypeDefinitionIndex = 37566;

	class HoYoChannelGameplayServices___c__DisplayClass41_4 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_4__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_4__CLEANUPTIMEDOUTCALLBACKS_B__4_OFFSET))(this);
		}
	};
}
