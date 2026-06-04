#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::UI::OS { class IAlertDialog; }
namespace MiHoYo::SDK::Windows::OS { class BindManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182E2880)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS47_0__REACTIVATEACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x182E7110)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS47_0__REACTIVATEACCOUNT_B__1_OFFSET UNITYSDK_OFFSET(0x182E7570)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS47_0__REACTIVATEACCOUNT_B__2_OFFSET UNITYSDK_OFFSET(0x182E7240)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int BindManager___c__DisplayClass47_0_TypeDefinitionIndex = 8297;

	class BindManager___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::String* reactivateTicket; // 0x10
		::MiHoYo::SDK::UI::OS::IAlertDialog* alertDialog; // 0x18
		::MiHoYo::SDK::Windows::OS::BindManager* __4__this; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* __9__2; // 0x28
		::System::Action* completeCallback; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReactivateAccount_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS47_0__REACTIVATEACCOUNT_B__0_OFFSET))(this);
		}

		::System::Void _ReactivateAccount_b__2(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS47_0__REACTIVATEACCOUNT_B__2_OFFSET))(this, a1);
		}

		::System::Void _ReactivateAccount_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS47_0__REACTIVATEACCOUNT_B__1_OFFSET))(this);
		}
	};
}
