#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_082C291E835A01E6;
class Class_1_83DE381565FB61D2;
class Class_2_C08B9E9B622D3089;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISuibianTempleExpeditionBangbooHeadWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_CLICKSLEF_OFFSET UNITYSDK_OFFSET(0x15EE7670)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EE7560)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EE75F0)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EE72D0)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EE74F0)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x15EE7890)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE8680)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x15EE8760)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EE8770)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EE8800)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EE8890)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EE8920)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpeditionTeamRowWidgetController_TypeDefinitionIndex = 65358;

	class UIExpeditionTeamRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C08B9E9B622D3089* _view; // 0x2B8
		::System::Collections::Generic::List_1<::MoleMole::UISuibianTempleExpeditionBangbooHeadWidgetController*>* heads; // 0x2C0
		::Class_1_83DE381565FB61D2* _layerData; // 0x2C8
		::Class_1_082C291E835A01E6* _teamData; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ClickSlef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_CLICKSLEF_OFFSET))(this);
		}

		::System::Void SetData(::Class_1_082C291E835A01E6* teamData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_082C291E835A01E6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, teamData);
		}

		::System::Void _OnUIInit_b__4_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER__ONUIINIT_B__4_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
