#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A24D00)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS11_0__OVERRIDECLICKCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x15A24D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralToggleWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 55225;

	class UIGeneralToggleWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OverrideClickCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS11_0__OVERRIDECLICKCALLBACK_B__0_OFFSET))(this);
		}
	};
}
