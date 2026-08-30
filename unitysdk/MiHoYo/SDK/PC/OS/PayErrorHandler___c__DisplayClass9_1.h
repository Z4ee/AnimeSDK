#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class PayErrorHandler___c__DisplayClass9_0; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA38B20)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS9_1__SHOWPAYAGELIMITNEWFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x1BA38B30)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int PayErrorHandler___c__DisplayClass9_1_TypeDefinitionIndex = 8658;

	class PayErrorHandler___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::PayErrorHandler___c__DisplayClass9_0* CS___8__locals1; // 0x10
		::System::String* cookieToken; // 0x18
		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ret; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPayAgeLimitNewFlow_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS9_1__SHOWPAYAGELIMITNEWFLOW_B__1_OFFSET))(this);
		}
	};
}
