#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelActivityResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC6C10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS34_0__GETACTIVITIES_B__0_OFFSET UNITYSDK_OFFSET(0x1BBC6C20)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass34_0_TypeDefinitionIndex = 20275;

	class HoYoChannel___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetActivities_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS34_0__GETACTIVITIES_B__0_OFFSET))(this, result);
		}
	};
}
