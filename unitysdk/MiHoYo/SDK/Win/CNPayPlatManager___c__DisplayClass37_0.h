#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class CNPayPlatManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1DD40)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0x1DA1DD50)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_0__PAY_B__1_OFFSET UNITYSDK_OFFSET(0x1DA1DD70)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatManager___c__DisplayClass37_0_TypeDefinitionIndex = 21367;

	class CNPayPlatManager___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::CNPayPlatManager* __4__this; // 0x10
		::MiHoYo::SDK::AccountModel* accountModel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_0__PAY_B__0_OFFSET))(this);
		}

		::System::Void _Pay_b__1(::System::String* name, ::System::String* identity, ::System::String* operation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_0__PAY_B__1_OFFSET))(this, name, identity, operation);
		}
	};
}
