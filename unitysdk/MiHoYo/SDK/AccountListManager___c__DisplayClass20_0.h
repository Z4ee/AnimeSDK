#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }

#define MIHOYO_SDK_ACCOUNTLISTMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE42160)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER___C__DISPLAYCLASS20_0__GETACCOUNTINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x1BE42170)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountListManager___c__DisplayClass20_0_TypeDefinitionIndex = 19748;

	class AccountListManager___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* account; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAccountIndex_b__0(::MiHoYo::SDK::AccountModel* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER___C__DISPLAYCLASS20_0__GETACCOUNTINDEX_B__0_OFFSET))(this, x);
		}
	};
}
