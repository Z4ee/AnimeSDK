#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186756A0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS15_0__FORCEFADEOUTTIP_B__0_OFFSET UNITYSDK_OFFSET(0x186756B0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS15_0__FORCEFADEOUTTIP_B__1_OFFSET UNITYSDK_OFFSET(0x186757C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 91176;

	class UIMissionTipsContainerWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowWidgetController* oldTips; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _ForceFadeoutTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS15_0__FORCEFADEOUTTIP_B__0_OFFSET))(this);
		}

		::System::Void _ForceFadeoutTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS15_0__FORCEFADEOUTTIP_B__1_OFFSET))(this);
		}
	};
}
