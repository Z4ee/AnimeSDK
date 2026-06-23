#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowErrorDialogResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_3__CLEANUPTIMEDOUTCALLBACKS_B__3_OFFSET UNITYSDK_OFFSET(0x1ADF2660)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF2650)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSystemFunctions___c__DisplayClass24_3_TypeDefinitionIndex = 36949;

	class HoYoChannelSystemFunctions___c__DisplayClass24_3 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_3__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_3__CLEANUPTIMEDOUTCALLBACKS_B__3_OFFSET))(this);
		}
	};
}
