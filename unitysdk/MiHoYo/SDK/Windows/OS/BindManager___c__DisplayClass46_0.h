#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Windows::OS { class BindManager; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS46_0__BINDEMAIL_B__0_OFFSET UNITYSDK_OFFSET(0x182E6A10)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS46_0__BINDEMAIL_B__1_OFFSET UNITYSDK_OFFSET(0x182E6CC0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182E2400)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int BindManager___c__DisplayClass46_0_TypeDefinitionIndex = 8296;

	class BindManager___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* onBindThirdparty; // 0x10
		::MiHoYo::SDK::Windows::OS::BindManager* __4__this; // 0x18
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* onCreateActionTicket; // 0x20
		::System::Boolean forceTokenRefresh; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindEmail_b__0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS46_0__BINDEMAIL_B__0_OFFSET))(this, a1);
		}

		::System::Void _BindEmail_b__1(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS46_0__BINDEMAIL_B__1_OFFSET))(this, a1);
		}
	};
}
