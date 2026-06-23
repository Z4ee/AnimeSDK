#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class OverseaAccountList; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA8B40)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__DISPLAYCLASS49_0__DELETEACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1BCA8B50)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountList___c__DisplayClass49_0_TypeDefinitionIndex = 21050;

	class OverseaAccountList___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* account; // 0x10
		::UnityEngine::GameObject* gameObject; // 0x18
		::MiHoYo::SDK::Win::OverseaAccountList* __4__this; // 0x20
		::System::Int32 currentShowAccountIndex; // 0x28
		::System::Int32 index; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _DeleteAccount_b__0(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__DISPLAYCLASS49_0__DELETEACCOUNT_B__0_OFFSET))(this, result);
		}
	};
}
