#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowTextEntryResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_0__CLEANUPTIMEDOUTCALLBACKS_B__0_OFFSET UNITYSDK_OFFSET(0x1D954270)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D954260)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSystemFunctions___c__DisplayClass24_0_TypeDefinitionIndex = 37607;

	class HoYoChannelSystemFunctions___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_0__CLEANUPTIMEDOUTCALLBACKS_B__0_OFFSET))(this);
		}
	};
}
