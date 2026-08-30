#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class PayManagerCXHandheld; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A25DF90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS21_0__LAUNCHHANDHELDPAY_B__0_OFFSET UNITYSDK_OFFSET(0x1A2614C0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerCXHandheld___c__DisplayClass21_0_TypeDefinitionIndex = 8713;

	class PayManagerCXHandheld___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerCXHandheld* __4__this; // 0x10
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct product; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _LaunchHandheldPay_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS21_0__LAUNCHHANDHELDPAY_B__0_OFFSET))(this, a1);
		}
	};
}
