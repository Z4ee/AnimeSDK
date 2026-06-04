#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PayManager_PSProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PSDelegate_ProductsCallback; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183C9570)
#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__GETPRODUCTS_B__0_OFFSET UNITYSDK_OFFSET(0x183CA560)
#define MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__GETPRODUCTS_B__1_OFFSET UNITYSDK_OFFSET(0x183CA6F0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PayManager___c__DisplayClass46_0_TypeDefinitionIndex = 8578;

	class PayManager___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PSDelegate_ProductsCallback* __9__1; // 0x10
		::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*, ::System::Int32>* callback; // 0x18
		::Il2CppArray<::System::String*>* idList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetProducts_b__0(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__GETPRODUCTS_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _GetProducts_b__1(::System::Int32 a1, ::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__DISPLAYCLASS46_0__GETPRODUCTS_B__1_OFFSET))(this, a1, a2);
		}
	};
}
