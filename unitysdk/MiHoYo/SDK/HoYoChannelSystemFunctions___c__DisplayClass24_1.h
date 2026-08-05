#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowProfileCardResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_1__CLEANUPTIMEDOUTCALLBACKS_B__1_OFFSET UNITYSDK_OFFSET(0x1DF823A0)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF82390)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSystemFunctions___c__DisplayClass24_1_TypeDefinitionIndex = 37608;

	class HoYoChannelSystemFunctions___c__DisplayClass24_1 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_1__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_1__CLEANUPTIMEDOUTCALLBACKS_B__1_OFFSET))(this);
		}
	};
}
