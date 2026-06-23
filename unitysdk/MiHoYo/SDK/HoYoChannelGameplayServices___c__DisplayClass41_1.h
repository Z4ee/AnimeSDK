#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_1__CLEANUPTIMEDOUTCALLBACKS_B__1_OFFSET UNITYSDK_OFFSET(0x1BF0B870)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0B860)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices___c__DisplayClass41_1_TypeDefinitionIndex = 36902;

	class HoYoChannelGameplayServices___c__DisplayClass41_1 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_1__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_1__CLEANUPTIMEDOUTCALLBACKS_B__1_OFFSET))(this);
		}
	};
}
