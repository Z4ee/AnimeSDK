#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179656C0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYZENKOVTIP_B__2_OFFSET UNITYSDK_OFFSET(0x179656D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass140_0_TypeDefinitionIndex = 91184;

	class UIMissionTipsContainerWidgetController___c__DisplayClass140_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayZenkovTip_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYZENKOVTIP_B__2_OFFSET))(this);
		}
	};
}
