#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::PC::OS { class PayErrorHandler; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AF650)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS9_0__SHOWPAYAGELIMITNEWFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1D4AF660)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int PayErrorHandler___c__DisplayClass9_0_TypeDefinitionIndex = 20810;

	class PayErrorHandler___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::PayErrorHandler* __4__this; // 0x10
		::MiHoYo::SDK::AccountModel* account; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPayAgeLimitNewFlow_b__0(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ret, ::System::String* cookieToken)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS9_0__SHOWPAYAGELIMITNEWFLOW_B__0_OFFSET))(this, ret, cookieToken);
		}
	};
}
