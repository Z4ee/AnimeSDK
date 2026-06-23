#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5126B0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5126F0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__REQUESTDETECTPAY_B__18_1_OFFSET UNITYSDK_OFFSET(0x1B512800)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__REQUESTDETECTPAY_B__18_2_OFFSET UNITYSDK_OFFSET(0x1B512700)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__REQUESTDETECTPAY_B__18_4_OFFSET UNITYSDK_OFFSET(0x1B512780)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerCX___c_TypeDefinitionIndex = 20845;

	class PayManagerCX___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::OS::PayManagerCX___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::OS::PayManagerCX___c**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCX___c_TypeDefinitionIndex)->GetStaticField(0xB4E0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__18_4()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCX___c_TypeDefinitionIndex)->GetStaticField(0xB4E8);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__18_2()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCX___c_TypeDefinitionIndex)->GetStaticField(0xB4F0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__18_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCX___c_TypeDefinitionIndex)->GetStaticField(0xB4F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestDetectPay_b__18_2(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__REQUESTDETECTPAY_B__18_2_OFFSET))(this, response);
		}

		::System::Void _RequestDetectPay_b__18_4(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__REQUESTDETECTPAY_B__18_4_OFFSET))(this, response);
		}

		::System::Void _RequestDetectPay_b__18_1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__REQUESTDETECTPAY_B__18_1_OFFSET))(this, response);
		}
	};
}
