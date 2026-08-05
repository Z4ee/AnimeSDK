#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PayManager_PSProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PSDelegate_ProductsCallback; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D76E9B0)
#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__GETPRODUCTS_B__0_OFFSET UNITYSDK_OFFSET(0x1D76E9C0)
#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__GETPRODUCTS_B__1_OFFSET UNITYSDK_OFFSET(0x1D76EAE0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PayManager___c__DisplayClass46_0_TypeDefinitionIndex = 21010;

	class PayManager___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PSDelegate_ProductsCallback* __9__1; // 0x10
		::Il2CppArray<::System::String*>* idList; // 0x18
		::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*, ::System::Int32>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetProducts_b__0(::System::Int32 code, ::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__GETPRODUCTS_B__0_OFFSET))(this, code, isEmpty);
		}

		::System::Void _GetProducts_b__1(::System::Int32 retcode, ::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>* products)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__GETPRODUCTS_B__1_OFFSET))(this, retcode, products);
		}
	};
}
