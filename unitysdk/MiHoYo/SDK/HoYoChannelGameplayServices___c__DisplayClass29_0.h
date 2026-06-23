#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC0F10)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS29_0__ONINVITECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1BFC0F20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices___c__DisplayClass29_0_TypeDefinitionIndex = 36899;

	class HoYoChannelGameplayServices___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>* callback; // 0x10
		::System::String* jsonResponse; // 0x18
		::System::Int32 resultCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnInviteCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS29_0__ONINVITECALLBACK_B__0_OFFSET))(this);
		}
	};
}
