#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AB0772CB60BD0697.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace System { class String; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182E8DB0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS23_0__REFRESHPARTNERDATEBUBBLETIP_B__0_OFFSET UNITYSDK_OFFSET(0x182E8DC0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS23_0__REFRESHPARTNERDATEBUBBLETIP_B__1_OFFSET UNITYSDK_OFFSET(0x182E8F60)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS23_0__REFRESHPARTNERDATEBUBBLETIP_G__GETTEXT_2_OFFSET UNITYSDK_OFFSET(0x182E9090)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass23_0_TypeDefinitionIndex = 91206;

	class UIMissionTipsContainerWidgetController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x18
		::Enum_3_AB0772CB60BD0697 showingState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPartnerDateBubbleTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS23_0__REFRESHPARTNERDATEBUBBLETIP_B__0_OFFSET))(this);
		}

		::System::Void _RefreshPartnerDateBubbleTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS23_0__REFRESHPARTNERDATEBUBBLETIP_B__1_OFFSET))(this);
		}

		::System::String* _RefreshPartnerDateBubbleTip_g__GetText_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS23_0__REFRESHPARTNERDATEBUBBLETIP_G__GETTEXT_2_OFFSET))(this);
		}
	};
}
