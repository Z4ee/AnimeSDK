#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::OS { class PS4BindManager; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER___C__DISPLAYCLASS24_0__BINDBYINPUT_B__1_OFFSET UNITYSDK_OFFSET(0x164040C0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER___C__DISPLAYCLASS24_0__BINDBYINPUT_G__ONVERFIYCALLBACK_0_OFFSET UNITYSDK_OFFSET(0x16403F30)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16401530)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PS4BindManager___c__DisplayClass24_0_TypeDefinitionIndex = 8775;

	class PS4BindManager___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::String* email; // 0x10
		::MiHoYo::SDK::Console::OS::PS4BindManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindByInput_g__OnVerfiyCallback_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER___C__DISPLAYCLASS24_0__BINDBYINPUT_G__ONVERFIYCALLBACK_0_OFFSET))(this, a1);
		}

		::System::Void _BindByInput_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER___C__DISPLAYCLASS24_0__BINDBYINPUT_B__1_OFFSET))(this, a1);
		}
	};
}
