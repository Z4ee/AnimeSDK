#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A25F710)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A25F750)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__REQUESTDETECTPAY_B__18_1_OFFSET UNITYSDK_OFFSET(0x1A25F760)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__REQUESTDETECTPAY_B__18_3_OFFSET UNITYSDK_OFFSET(0x1A25F900)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerCXHandheld___c_TypeDefinitionIndex = 8710;

	class PayManagerCXHandheld___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__18_3()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCXHandheld___c_TypeDefinitionIndex)->GetStaticField(0x1B0D0);
		}
		static ::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerCXHandheld___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerCXHandheld___c**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCXHandheld___c_TypeDefinitionIndex)->GetStaticField(0x1B0D8);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__18_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCXHandheld___c_TypeDefinitionIndex)->GetStaticField(0x1B0E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestDetectPay_b__18_1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__REQUESTDETECTPAY_B__18_1_OFFSET))(this, a1);
		}

		::System::Void _RequestDetectPay_b__18_3(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__REQUESTDETECTPAY_B__18_3_OFFSET))(this, a1);
		}
	};
}
