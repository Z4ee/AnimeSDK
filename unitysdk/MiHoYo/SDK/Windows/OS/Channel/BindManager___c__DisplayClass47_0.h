#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::UI::OS { class IAlertDialog; }
namespace MiHoYo::SDK::Windows::OS::Channel { class BindManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B90F940)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS47_0__REACTIVATEACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1B914060)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS47_0__REACTIVATEACCOUNT_B__1_OFFSET UNITYSDK_OFFSET(0x1B9145C0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS47_0__REACTIVATEACCOUNT_B__2_OFFSET UNITYSDK_OFFSET(0x1B914200)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int BindManager___c__DisplayClass47_0_TypeDefinitionIndex = 8321;

	class BindManager___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Windows::OS::Channel::BindManager* __4__this; // 0x10
		::System::Action* completeCallback; // 0x18
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* __9__2; // 0x20
		::MiHoYo::SDK::UI::OS::IAlertDialog* alertDialog; // 0x28
		::System::String* reactivateTicket; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReactivateAccount_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS47_0__REACTIVATEACCOUNT_B__0_OFFSET))(this);
		}

		::System::Void _ReactivateAccount_b__2(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS47_0__REACTIVATEACCOUNT_B__2_OFFSET))(this, a1);
		}

		::System::Void _ReactivateAccount_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS47_0__REACTIVATEACCOUNT_B__1_OFFSET))(this);
		}
	};
}
