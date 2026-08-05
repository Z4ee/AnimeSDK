#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIHadalZone_RewardV2_PopWindowController_HadalRewardData.h"

class Class_2_0096754AC2F6E253_35;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x19FD6A90)
#define MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19FD67C0)
#define MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19FD68D0)
#define MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19FD6850)
#define MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19FD6760)
#define MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FD6AD0)
#define MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19FD6AE0)
#define MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19FD6B70)
#define MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19FD6C10)
#define MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19FD6CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RewardRowTitleV2_WidgetController_TypeDefinitionIndex = 71762;

	class UIHadalZone_RewardRowTitleV2_WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_0096754AC2F6E253_35* _view; // 0x2F0
		::MoleMole::UIHadalZone_RewardV2_PopWindowController_HadalRewardData _curTitleData; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		static ::System::Single GetPreferredHeight()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER_GETPREFERREDHEIGHT_OFFSET))();
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWTITLEV2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
