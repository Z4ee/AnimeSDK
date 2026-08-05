#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::OS { class BindManager; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS23_0__BINDEMAIL_B__0_OFFSET UNITYSDK_OFFSET(0x1D49F8B0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS23_0__BINDEMAIL_B__1_OFFSET UNITYSDK_OFFSET(0x1D49F980)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49F8A0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManager___c__DisplayClass23_0_TypeDefinitionIndex = 21157;

	class BindManager___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::BindManager* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnBindResult; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindEmail_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS23_0__BINDEMAIL_B__0_OFFSET))(this, response);
		}

		::System::Void _BindEmail_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS23_0__BINDEMAIL_B__1_OFFSET))(this, response);
		}
	};
}
