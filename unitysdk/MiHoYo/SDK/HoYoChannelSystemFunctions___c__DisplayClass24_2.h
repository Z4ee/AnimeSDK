#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowMessageDialogResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_2__CLEANUPTIMEDOUTCALLBACKS_B__2_OFFSET UNITYSDK_OFFSET(0xB1FA4D0)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB1F9D20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSystemFunctions___c__DisplayClass24_2_TypeDefinitionIndex = 47025;

	class HoYoChannelSystemFunctions___c__DisplayClass24_2 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_2__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_2__CLEANUPTIMEDOUTCALLBACKS_B__2_OFFSET))(this);
		}
	};
}
