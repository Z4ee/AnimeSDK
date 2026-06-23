#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9A01C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9A0200)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__REQUESTDETECTPAY_B__18_1_OFFSET UNITYSDK_OFFSET(0x1A9A0210)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__REQUESTDETECTPAY_B__18_3_OFFSET UNITYSDK_OFFSET(0x1A9A0350)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerCXHandheld___c_TypeDefinitionIndex = 20516;

	class PayManagerCXHandheld___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerCXHandheld___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerCXHandheld___c**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCXHandheld___c_TypeDefinitionIndex)->GetStaticField(0x9C00);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__18_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCXHandheld___c_TypeDefinitionIndex)->GetStaticField(0x9C08);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__18_3()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCXHandheld___c_TypeDefinitionIndex)->GetStaticField(0x9C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestDetectPay_b__18_1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__REQUESTDETECTPAY_B__18_1_OFFSET))(this, response);
		}

		::System::Void _RequestDetectPay_b__18_3(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__REQUESTDETECTPAY_B__18_3_OFFSET))(this, response);
		}
	};
}
