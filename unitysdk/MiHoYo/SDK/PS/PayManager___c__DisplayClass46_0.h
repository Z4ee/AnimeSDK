#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PayManager_PSProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PSDelegate_ProductsCallback; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F85BB0)
#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__GETPRODUCTS_B__0_OFFSET UNITYSDK_OFFSET(0x15F86BA0)
#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__GETPRODUCTS_B__1_OFFSET UNITYSDK_OFFSET(0x15F86D10)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PayManager___c__DisplayClass46_0_TypeDefinitionIndex = 7534;

	class PayManager___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* idList; // 0x10
		::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*, ::System::Int32>* callback; // 0x18
		::MiHoYo::SDK::PSDelegate_ProductsCallback* __9__1; // 0x20

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
