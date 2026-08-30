#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PayManager_PSProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PSDelegate_ProductsCallback; }
namespace MiHoYo::SDK::PS { class PayManager; }
namespace System { class String; }

#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC0D130)
#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS21_0__TRYGETPRODUCTS_B__0_OFFSET UNITYSDK_OFFSET(0x1AC11880)
#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS21_0__TRYGETPRODUCTS_B__1_OFFSET UNITYSDK_OFFSET(0x1AC11B20)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PayManager___c__DisplayClass21_0_TypeDefinitionIndex = 8856;

	class PayManager___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PSDelegate_ProductsCallback* __9__1; // 0x10
		::Il2CppArray<::System::String*>* productLabels; // 0x18
		::MiHoYo::SDK::PS::PayManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGetProducts_b__0(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS21_0__TRYGETPRODUCTS_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _TryGetProducts_b__1(::System::Int32 a1, ::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS21_0__TRYGETPRODUCTS_B__1_OFFSET))(this, a1, a2);
		}
	};
}
