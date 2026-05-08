#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIMindscapeWidgetController___c__DisplayClass100_1; }

#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS100_2__CHANGETABSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x13FCE100)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS100_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13FCE0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController___c__DisplayClass100_2_TypeDefinitionIndex = 38782;

	class UIMindscapeWidgetController___c__DisplayClass100_2 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x10
		::MoleMole::UIMindscapeWidgetController___c__DisplayClass100_1* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS100_2__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeTabState_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS100_2__CHANGETABSTATE_B__1_OFFSET))(this);
		}
	};
}
