#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class AccountList; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_WIN_ACCOUNTLIST___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18469E60)
#define MIHOYO_SDK_WIN_ACCOUNTLIST___C__DISPLAYCLASS57_0__DELETEACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1846A180)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AccountList___c__DisplayClass57_0_TypeDefinitionIndex = 8952;

	class AccountList___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* gameObject; // 0x10
		::MiHoYo::SDK::Win::AccountList* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Void _DeleteAccount_b__0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST___C__DISPLAYCLASS57_0__DELETEACCOUNT_B__0_OFFSET))(this, a1);
		}
	};
}
