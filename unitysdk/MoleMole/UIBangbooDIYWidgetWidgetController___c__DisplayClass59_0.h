#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBuddyDIYBagItemWidgetController; }
namespace MoleMole { class UIBuddyDIYComponentWidgetController; }

#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1956C190)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS59_0__ONSELECTITEMTOEDITOR_B__0_OFFSET UNITYSDK_OFFSET(0x1956C1A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDIYWidgetWidgetController___c__DisplayClass59_0_TypeDefinitionIndex = 71416;

	class UIBangbooDIYWidgetWidgetController___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBuddyDIYBagItemWidgetController* item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnSelectItemToEditor_b__0(::MoleMole::UIBuddyDIYComponentWidgetController* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBuddyDIYComponentWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS59_0__ONSELECTITEMTOEDITOR_B__0_OFFSET))(this, a);
		}
	};
}
