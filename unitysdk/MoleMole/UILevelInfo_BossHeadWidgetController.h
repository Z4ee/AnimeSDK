#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_00E0F6A4450214AA_3;
class Class_2_208CC9941471731A_462;
class Class_2_F69D29AB796376C2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1861D000)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1861D090)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1861CE40)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1861CEA0)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1861D1C0)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_SETQUEST_OFFSET UNITYSDK_OFFSET(0x1861D110)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_SHOWBOSSINFO_OFFSET UNITYSDK_OFFSET(0x1861D2B0)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1861D4A0)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1861D500)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1861D590)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1861D620)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1861D6B0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelInfo_BossHeadWidgetController_TypeDefinitionIndex = 71425;

	class UILevelInfo_BossHeadWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_00E0F6A4450214AA_3* _view; // 0x2C0
		::Class_2_F69D29AB796376C2* questConfig; // 0x2C8
		::Class_2_208CC9941471731A_462* activityBattleQuestConfig; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetQuest(::System::Int32 quest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_SETQUEST_OFFSET))(this, quest);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ShowBossInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_SHOWBOSSINFO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
