#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0E760)
#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__DISPLAYCLASS16_0__ONJUMP_B__0_OFFSET UNITYSDK_OFFSET(0x19F0E770)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookZeroThemeItemWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 55415;

	class UIHandBookZeroThemeItemWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Int32 val; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnJump_b__0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__DISPLAYCLASS16_0__ONJUMP_B__0_OFFSET))(this, success);
		}
	};
}
