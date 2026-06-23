#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class PayManagerBase; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52B620)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE___C__DISPLAYCLASS26_0__GETPRODUCTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B52B630)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerBase___c__DisplayClass26_0_TypeDefinitionIndex = 20510;

	class PayManagerBase___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase* __4__this; // 0x10
		::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*, ::System::Int32>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetProducts_b__0(::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>* products, ::System::Int32 retCode)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE___C__DISPLAYCLASS26_0__GETPRODUCTS_B__0_OFFSET))(this, products, retCode);
		}
	};
}
