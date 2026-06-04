#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConsoleDelegate_ProductsCallback; }
namespace MiHoYo::SDK::Console::CN { class PayManagerPS; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18220D20)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__DISPLAYCLASS10_0__TRYGETPRODUCTS_B__0_OFFSET UNITYSDK_OFFSET(0x182236A0)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__DISPLAYCLASS10_0__TRYGETPRODUCTS_B__1_OFFSET UNITYSDK_OFFSET(0x182239E0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int PayManagerPS___c__DisplayClass10_0_TypeDefinitionIndex = 8780;

	class PayManagerPS___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ConsoleDelegate_ProductsCallback* __9__1; // 0x10
		::Il2CppArray<::System::String*>* productLabels; // 0x18
		::MiHoYo::SDK::Console::CN::PayManagerPS* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGetProducts_b__0(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__DISPLAYCLASS10_0__TRYGETPRODUCTS_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _TryGetProducts_b__1(::System::Int32 a1, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__DISPLAYCLASS10_0__TRYGETPRODUCTS_B__1_OFFSET))(this, a1, a2);
		}
	};
}
