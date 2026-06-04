#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConsoleDelegate_ProductsCallback; }
namespace MiHoYo::SDK::Console::OS { class PayManagerPS; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1826FE60)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS9_0__TRYGETPRODUCTS_B__0_OFFSET UNITYSDK_OFFSET(0x182735F0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS9_0__TRYGETPRODUCTS_B__1_OFFSET UNITYSDK_OFFSET(0x18273930)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerPS___c__DisplayClass9_0_TypeDefinitionIndex = 8753;

	class PayManagerPS___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::PayManagerPS* __4__this; // 0x10
		::MiHoYo::SDK::ConsoleDelegate_ProductsCallback* __9__1; // 0x18
		::Il2CppArray<::System::String*>* productLabels; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGetProducts_b__0(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS9_0__TRYGETPRODUCTS_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _TryGetProducts_b__1(::System::Int32 a1, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS9_0__TRYGETPRODUCTS_B__1_OFFSET))(this, a1, a2);
		}
	};
}
