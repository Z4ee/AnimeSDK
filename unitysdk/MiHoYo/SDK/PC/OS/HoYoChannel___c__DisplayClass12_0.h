#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelFriendListResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C907000)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS12_0__GETFRIENDLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1C907010)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass12_0_TypeDefinitionIndex = 20612;

	class HoYoChannel___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetFriendList_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS12_0__GETFRIENDLIST_B__0_OFFSET))(this, result);
		}
	};
}
