#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::OS { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17457900)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS28_0__REQUESTACTIONTICKET_B__0_OFFSET UNITYSDK_OFFSET(0x1745A980)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManager___c__DisplayClass28_0_TypeDefinitionIndex = 7825;

	class BindManager___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::String* account; // 0x10
		::MiHoYo::SDK::Console::OS::BindManager* __4__this; // 0x18
		::System::String* actionType; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestActionTicket_b__0(::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS28_0__REQUESTACTIONTICKET_B__0_OFFSET))(this, accessToken);
		}
	};
}
