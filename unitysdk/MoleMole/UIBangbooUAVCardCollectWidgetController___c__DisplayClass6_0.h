#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooUAVCardCollectWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }

#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1735CC00)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1735CC10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooUAVCardCollectWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 70375;

	class UIBangbooUAVCardCollectWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralToggleWidgetController* toggle; // 0x10
		::MoleMole::UIBangbooUAVCardCollectWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
