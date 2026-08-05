#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE9A750)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9A790)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__REQUESTDETECTPAY_B__10_0_OFFSET UNITYSDK_OFFSET(0x1CE9A7A0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int PayManagerCX___c_TypeDefinitionIndex = 21218;

	class PayManagerCX___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::CN::PayManagerCX___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::CN::PayManagerCX___c**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCX___c_TypeDefinitionIndex)->GetStaticField(0xB350);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCX___c_TypeDefinitionIndex)->GetStaticField(0xB358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestDetectPay_b__10_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__REQUESTDETECTPAY_B__10_0_OFFSET))(this, response);
		}
	};
}
