#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowTextEntryResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA0F920)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS5_0__SHOWVIRTUALKEYBOARD_B__0_OFFSET UNITYSDK_OFFSET(0x1BA1D540)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass5_0_TypeDefinitionIndex = 8453;

	class HoYoChannel___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowVirtualKeyboard_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS5_0__SHOWVIRTUALKEYBOARD_B__0_OFFSET))(this, a1);
		}
	};
}
