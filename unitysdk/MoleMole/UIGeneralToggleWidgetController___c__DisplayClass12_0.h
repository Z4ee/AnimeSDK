#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS12_0__BINDCLICKCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x18AE7060)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE7050)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralToggleWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 89477;

	class UIGeneralToggleWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindClickCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS12_0__BINDCLICKCALLBACK_B__0_OFFSET))(this);
		}
	};
}
