#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace MiHoYo::SDK::PC::OS::CXHandheld { class PayManagerCXHandheld; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C967A40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS20_0__TRYGETPRODUCTS_B__0_OFFSET UNITYSDK_OFFSET(0x1C967A50)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerCXHandheld___c__DisplayClass20_0_TypeDefinitionIndex = 20518;

	class PayManagerCXHandheld___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerCXHandheld* __4__this; // 0x10
		::Il2CppArray<::System::String*>* productLabels; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGetProducts_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS20_0__TRYGETPRODUCTS_B__0_OFFSET))(this, response);
		}
	};
}
