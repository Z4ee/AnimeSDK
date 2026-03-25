#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class GameRoleModel; }
namespace MiHoYo::SDK::PS { class PayManager; }
namespace System { class String; }

#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS17_0__CHECKPSPAY_B__0_OFFSET UNITYSDK_OFFSET(0x15F85D80)
#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F822D0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PayManager___c__DisplayClass17_0_TypeDefinitionIndex = 7532;

	class PayManager___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::GameRoleModel* gameRoleModel; // 0x10
		::MiHoYo::SDK::PS::PayManager* __4__this; // 0x18
		::MiHoYo::SDK::AccountModel* accountModel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckPSPay_b__0(::System::Int32 code, ::System::String* authCode, ::System::Int32 issuerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS17_0__CHECKPSPAY_B__0_OFFSET))(this, code, authCode, issuerId);
		}
	};
}
