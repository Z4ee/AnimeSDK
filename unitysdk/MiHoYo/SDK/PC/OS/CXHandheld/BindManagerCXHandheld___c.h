#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC92020)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC92060)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__REACTIVATEACCOUNT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1BC92070)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerCXHandheld___c_TypeDefinitionIndex = 20490;

	class BindManagerCXHandheld___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerCXHandheld___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerCXHandheld___c**)Il2CppClass::FromTypeDefinitionIndex(BindManagerCXHandheld___c_TypeDefinitionIndex)->GetStaticField(0xB190);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(BindManagerCXHandheld___c_TypeDefinitionIndex)->GetStaticField(0xB198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__CTOR_OFFSET))(this);
		}

		::System::Void _ReactivateAccount_b__5_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__REACTIVATEACCOUNT_B__5_0_OFFSET))(this, response);
		}
	};
}
