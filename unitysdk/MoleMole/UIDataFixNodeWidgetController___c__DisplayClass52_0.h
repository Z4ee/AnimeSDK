#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataFixNodeWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA8FA0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__PLAYANIM_B__0_OFFSET UNITYSDK_OFFSET(0x19AA8FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixNodeWidgetController___c__DisplayClass52_0_TypeDefinitionIndex = 50801;

	class UIDataFixNodeWidgetController___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIDataFixNodeWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__PLAYANIM_B__0_OFFSET))(this);
		}
	};
}
