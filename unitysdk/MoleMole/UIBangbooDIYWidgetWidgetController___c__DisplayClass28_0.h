#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBuddyDIYComponentWidgetController; }

#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1868DA80)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS28_0__ONBUDDYCOMPONENTDELETE_B__0_OFFSET UNITYSDK_OFFSET(0x1868DA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDIYWidgetWidgetController___c__DisplayClass28_0_TypeDefinitionIndex = 79076;

	class UIBangbooDIYWidgetWidgetController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBuddyDIYComponentWidgetController* component; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnBuddyComponentDelete_b__0(::MoleMole::UIBuddyDIYComponentWidgetController* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBuddyDIYComponentWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS28_0__ONBUDDYCOMPONENTDELETE_B__0_OFFSET))(this, match);
		}
	};
}
