#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataFixNodeWidgetController; }

#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18045050)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS43_0__ROTATENODE_B__0_OFFSET UNITYSDK_OFFSET(0x18045060)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixNodeWidgetController___c__DisplayClass43_0_TypeDefinitionIndex = 50795;

	class UIDataFixNodeWidgetController___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDataFixNodeWidgetController* __4__this; // 0x10
		::System::Boolean preConnected; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _RotateNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS43_0__ROTATENODE_B__0_OFFSET))(this);
		}
	};
}
