#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_2E18C65B7CE4A976;
class Class_1_83DE381565FB61D2;
class Class_2_C08B9E9B622D3089;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISuibianTempleExpeditionBangbooHeadWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_CLICKSLEF_OFFSET UNITYSDK_OFFSET(0x17A65AA0)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17A65990)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17A65A20)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A65700)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17A65920)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x17A65CC0)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A66AB0)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x17A66B90)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17A66BA0)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17A66C30)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A66CC0)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17A66D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpeditionTeamRowWidgetController_TypeDefinitionIndex = 61100;

	class UIExpeditionTeamRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C08B9E9B622D3089* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UISuibianTempleExpeditionBangbooHeadWidgetController*>* heads; // 0x2C8
		::Class_1_83DE381565FB61D2* _layerData; // 0x2D0
		::Class_1_2E18C65B7CE4A976* _teamData; // 0x2D8

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

		::System::Void SetData(::Class_1_2E18C65B7CE4A976* teamData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E18C65B7CE4A976*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, teamData);
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
