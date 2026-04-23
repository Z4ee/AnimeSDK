#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/MiHoYo/SDK/PS/PayManager_PSProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PSDelegate_ProductsCallback; }
namespace MiHoYo::SDK::Console::OS { class PayManagerPS; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17471290)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS19_0__GETGOODSPLATFORMPRODUCTS_B__0_OFFSET UNITYSDK_OFFSET(0x174721D0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS19_0__GETGOODSPLATFORMPRODUCTS_B__1_OFFSET UNITYSDK_OFFSET(0x17472330)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerPS___c__DisplayClass19_0_TypeDefinitionIndex = 7852;

	class PayManagerPS___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PSDelegate_ProductsCallback* __9__1; // 0x10
		::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>* callback; // 0x18
		::Il2CppArray<::System::String*>* idList; // 0x20
		::MiHoYo::SDK::Console::OS::PayManagerPS* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetGoodsPlatformProducts_b__0(::System::Int32 code, ::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS19_0__GETGOODSPLATFORMPRODUCTS_B__0_OFFSET))(this, code, isEmpty);
		}

		::System::Void _GetGoodsPlatformProducts_b__1(::System::Int32 retCode, ::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>* products)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS19_0__GETGOODSPLATFORMPRODUCTS_B__1_OFFSET))(this, retCode, products);
		}
	};
}
