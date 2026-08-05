#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0CC10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS41_0__SENDSESSIONINVITEINTERNAL_B__0_OFFSET UNITYSDK_OFFSET(0x1CE0CC20)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass41_0_TypeDefinitionIndex = 20627;

	class HoYoChannel___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendSessionInviteInternal_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS41_0__SENDSESSIONINVITEINTERNAL_B__0_OFFSET))(this, result);
		}
	};
}
