#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK::Console::OS { class PayManagerCX; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1746CE70)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__TRYGETPRODUCTS_B__0_OFFSET UNITYSDK_OFFSET(0x1746E580)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerCX___c__DisplayClass18_0_TypeDefinitionIndex = 7857;

	class PayManagerCX___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::PayManagerCX* __4__this; // 0x10
		::MiHoYo::SDK::JSONArray* productArray; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGetProducts_b__0(::System::Int32 retcode, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* products)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS18_0__TRYGETPRODUCTS_B__0_OFFSET))(this, retcode, products);
		}
	};
}
