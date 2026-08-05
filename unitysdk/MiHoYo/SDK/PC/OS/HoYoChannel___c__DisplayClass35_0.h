#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelActivityResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF420C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS35_0__DELETEACTIVITY_B__0_OFFSET UNITYSDK_OFFSET(0x1CF420D0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass35_0_TypeDefinitionIndex = 20622;

	class HoYoChannel___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _DeleteActivity_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS35_0__DELETEACTIVITY_B__0_OFFSET))(this, result);
		}
	};
}
