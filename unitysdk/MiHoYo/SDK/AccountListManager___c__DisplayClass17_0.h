#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountListManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_ACCOUNTLISTMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05BF60)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER___C__DISPLAYCLASS17_0__ONDELETEACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1A05BF70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountListManager___c__DisplayClass17_0_TypeDefinitionIndex = 18851;

	class AccountListManager___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::String* strArgs; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::MiHoYo::SDK::AccountListManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnDeleteAccount_b__0(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER___C__DISPLAYCLASS17_0__ONDELETEACCOUNT_B__0_OFFSET))(this, result);
		}
	};
}
