#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountListManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_ACCOUNTLISTMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5C240)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER___C__DISPLAYCLASS9_0__ONOPERATEACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1BF5C250)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountListManager___c__DisplayClass9_0_TypeDefinitionIndex = 19746;

	class AccountListManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::AccountListManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOperateAccount_b__0(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER___C__DISPLAYCLASS9_0__ONOPERATEACCOUNT_B__0_OFFSET))(this, result);
		}
	};
}
