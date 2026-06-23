#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHandBookRABItemRowWidgetController_RABSectionType.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER_PANELDATA_GET_HASBUBBLE_OFFSET UNITYSDK_OFFSET(0x16709950)
#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER_PANELDATA_GET_HASREDDOT_OFFSET UNITYSDK_OFFSET(0x16709820)
#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER_PANELDATA_GET_NOTIFYPRIORITY_OFFSET UNITYSDK_OFFSET(0x16709970)
#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x167099E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRABItemRowWidgetController_PanelData_TypeDefinitionIndex = 42664;

	class UIHandBookRABItemRowWidgetController_PanelData : public ::System::Object
	{
	public:
		::System::String* LockDescText; // 0x10
		::System::String* LockTitleKey; // 0x18
		::System::String* TitleKey; // 0x20
		::System::String* BtnTipsKey; // 0x28
		::MoleMole::UIHandBookRABItemRowWidgetController_RABSectionType SectionType; // 0x30
		::System::Boolean IsLocked; // 0x34
		::Share::ENotificationBadgeType RedSignType; // 0x38
		::System::Int32 LockTipGroupId; // 0x3C
		::System::Int32 ShowPriority; // 0x40
		::System::Int32 LockAccessId; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER_PANELDATA_GET_HASREDDOT_OFFSET))(this);
		}

		::System::Boolean get_HasBubble()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER_PANELDATA_GET_HASBUBBLE_OFFSET))(this);
		}

		::System::Int32 get_NotifyPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER_PANELDATA_GET_NOTIFYPRIORITY_OFFSET))(this);
		}
	};
}
