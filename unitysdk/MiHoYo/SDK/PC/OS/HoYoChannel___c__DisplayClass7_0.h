#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowMessageDialogResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB41AA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS7_0__SHOWMESSAGEDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x1BB41AB0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass7_0_TypeDefinitionIndex = 20260;

	class HoYoChannel___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowMessageDialog_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS7_0__SHOWMESSAGEDIALOG_B__0_OFFSET))(this, result);
		}
	};
}
