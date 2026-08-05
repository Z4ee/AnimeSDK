#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PayManager_PSProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PSDelegate_ProductsCallback; }
namespace MiHoYo::SDK::PS { class PayManager; }
namespace System { class String; }

#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9094A0)
#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS21_0__TRYGETPRODUCTS_B__0_OFFSET UNITYSDK_OFFSET(0x1C9094B0)
#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS21_0__TRYGETPRODUCTS_B__1_OFFSET UNITYSDK_OFFSET(0x1C909CA0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PayManager___c__DisplayClass21_0_TypeDefinitionIndex = 21009;

	class PayManager___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PS::PayManager* __4__this; // 0x10
		::Il2CppArray<::System::String*>* productLabels; // 0x18
		::MiHoYo::SDK::PSDelegate_ProductsCallback* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGetProducts_b__0(::System::Int32 code, ::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS21_0__TRYGETPRODUCTS_B__0_OFFSET))(this, code, isEmpty);
		}

		::System::Void _TryGetProducts_b__1(::System::Int32 retcode, ::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>* products)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS21_0__TRYGETPRODUCTS_B__1_OFFSET))(this, retcode, products);
		}
	};
}
