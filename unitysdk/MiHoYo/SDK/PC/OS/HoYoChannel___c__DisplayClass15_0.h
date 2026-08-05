#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelSocialUpdateResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C907C90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS15_0__REGISTERSOCIALUPDATECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1C907CA0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass15_0_TypeDefinitionIndex = 20615;

	class HoYoChannel___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterSocialUpdateCallback_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS15_0__REGISTERSOCIALUPDATECALLBACK_B__0_OFFSET))(this, result);
		}
	};
}
