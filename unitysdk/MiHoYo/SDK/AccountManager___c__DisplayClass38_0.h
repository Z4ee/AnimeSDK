#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountManager; }
namespace MiHoYo::SDK { class LoginDataModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_ACCOUNTMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A190D80)
#define MIHOYO_SDK_ACCOUNTMANAGER___C__DISPLAYCLASS38_0__REACTIVATEACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1A192840)
#define MIHOYO_SDK_ACCOUNTMANAGER___C__DISPLAYCLASS38_0__REACTIVATEACCOUNT_B__1_OFFSET UNITYSDK_OFFSET(0x1A192A60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountManager___c__DisplayClass38_0_TypeDefinitionIndex = 7908;

	class AccountManager___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*>* callback; // 0x10
		::MiHoYo::SDK::AccountManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReactivateAccount_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER___C__DISPLAYCLASS38_0__REACTIVATEACCOUNT_B__0_OFFSET))(this, a1);
		}

		::System::Void _ReactivateAccount_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER___C__DISPLAYCLASS38_0__REACTIVATEACCOUNT_B__1_OFFSET))(this, a1);
		}
	};
}
