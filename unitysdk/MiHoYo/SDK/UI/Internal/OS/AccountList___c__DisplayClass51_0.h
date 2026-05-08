#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::UI::Internal::OS { class AccountList; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x194CC160)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C__DISPLAYCLASS51_0__DELETEACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x194CC170)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountList___c__DisplayClass51_0_TypeDefinitionIndex = 19283;

	class AccountList___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::Internal::OS::AccountList* __4__this; // 0x10
		::UnityEngine::GameObject* gameObject; // 0x18
		::MiHoYo::SDK::AccountModel* account; // 0x20
		::System::Int32 index; // 0x28
		::System::Int32 currentShowAccountIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _DeleteAccount_b__0(::MiHoYo::SDK::UI::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C__DISPLAYCLASS51_0__DELETEACCOUNT_B__0_OFFSET))(this, result);
		}
	};
}
