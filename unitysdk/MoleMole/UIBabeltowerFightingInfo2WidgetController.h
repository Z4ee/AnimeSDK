#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBabeltowerFightingInfoWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_60638234271CCDB8_9;
class Class_3_025FF4981524A424_10;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralRoleCardRowWidgetController_Context; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_CHECKNEWBIE_OFFSET UNITYSDK_OFFSET(0x17F44650)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_INITBUDDY_OFFSET UNITYSDK_OFFSET(0x17F43800)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_INITPOOLDATA_OFFSET UNITYSDK_OFFSET(0x17F436B0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16131500)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16131740)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONNEWBIECLOSE_OFFSET UNITYSDK_OFFSET(0x161316A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16131D50)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONPOSTSETROLECARDDATA_OFFSET UNITYSDK_OFFSET(0x16131870)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONPOWERBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16132060)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16131600)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_OPENDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x17F43950)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REFRESHBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x16131980)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REFRESHPOWERGET_OFFSET UNITYSDK_OFFSET(0x17F43CA0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REFRESHPOWERTEXT_OFFSET UNITYSDK_OFFSET(0x17F43ED0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REQBABELTOWERBEGINFIGHT_OFFSET UNITYSDK_OFFSET(0x17F44000)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_UPDATEFLOORINDEX_OFFSET UNITYSDK_OFFSET(0x17F44400)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F448D0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER__ONNEWBIECLOSE_B__3_0_OFFSET UNITYSDK_OFFSET(0x17F448E0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER__ONPOSTREFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x17F44900)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_INITBUDDY_OFFSET UNITYSDK_OFFSET(0x17F44910)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_INITPOOLDATA_OFFSET UNITYSDK_OFFSET(0x17F44920)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F44930)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x17F44A00)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17F44A40)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONPOSTSETROLECARDDATA_OFFSET UNITYSDK_OFFSET(0x17F44AD0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F44AE0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_OPENDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x17F44AF0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_REFRESHBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x17F44B00)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_REQBABELTOWERBEGINFIGHT_OFFSET UNITYSDK_OFFSET(0x17F44B10)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_UPDATEFLOORINDEX_OFFSET UNITYSDK_OFFSET(0x17F44C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingInfo2WidgetController_TypeDefinitionIndex = 40486;

	class UIBabeltowerFightingInfo2WidgetController : public ::MoleMole::UIBabeltowerFightingInfoWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_9* _view; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnNewbieClose(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONNEWBIECLOSE_OFFSET))(this, args);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void OnPostSetRoleCardData(::MoleMole::UIGeneralRoleCardRowWidgetController_Context* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralRoleCardRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONPOSTSETROLECARDDATA_OFFSET))(this, data);
		}

		::System::Void RefreshBuffState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REFRESHBUFFSTATE_OFFSET))(this);
		}

		::System::Void OnPostRefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONPOSTREFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnPowerBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONPOWERBTNCLICK_OFFSET))(this);
		}

		::System::Void InitPoolData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_INITPOOLDATA_OFFSET))(this);
		}

		::System::Void InitBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_INITBUDDY_OFFSET))(this);
		}

		::System::Void OpenDetailDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_OPENDETAILDIALOG_OFFSET))(this);
		}

		::System::Void RefreshPowerGet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REFRESHPOWERGET_OFFSET))(this);
		}

		::System::Void RefreshPowerText(::System::Boolean isMvp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REFRESHPOWERTEXT_OFFSET))(this, isMvp);
		}

		::System::Void ReqBabelTowerBeginFight(::System::Int32 towerid, ::System::UInt32 floorIndex, ::System::Int32 buddy, ::System::Collections::Generic::List_1<::System::Int32>* selectAvatars, ::System::Collections::Generic::List_1<::System::Int32>* poolAvatars, ::System::Collections::Generic::List_1<::System::Int32>* buddyList, ::System::Boolean isContinue, ::System::Int32 selectBuf, ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_10*>* overrideCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Int32, ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_10*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REQBABELTOWERBEGINFIGHT_OFFSET))(this, towerid, floorIndex, buddy, selectAvatars, poolAvatars, buddyList, isContinue, selectBuf, overrideCallback);
		}

		::System::Void UpdateFloorIndex(::System::UInt32 realFloor)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_UPDATEFLOORINDEX_OFFSET))(this, realFloor);
		}

		::System::Void CheckNewbie(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_CHECKNEWBIE_OFFSET))(this, force);
		}

		::System::Void _OnNewbieClose_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER__ONNEWBIECLOSE_B__3_0_OFFSET))(this);
		}

		::System::Void _OnPostRefreshView_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER__ONPOSTREFRESHVIEW_B__7_0_OFFSET))(this);
		}

		::System::Void __base_InitBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_INITBUDDY_OFFSET))(this);
		}

		::System::Void __base_InitPoolData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_INITPOOLDATA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnPostRefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnPostSetRoleCardData(::MoleMole::UIGeneralRoleCardRowWidgetController_Context* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralRoleCardRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONPOSTSETROLECARDDATA_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OpenDetailDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_OPENDETAILDIALOG_OFFSET))(this);
		}

		::System::Void __base_RefreshBuffState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_REFRESHBUFFSTATE_OFFSET))(this);
		}

		::System::Void __base_ReqBabelTowerBeginFight(::System::Int32 P0, ::System::UInt32 P1, ::System::Int32 P2, ::System::Collections::Generic::List_1<::System::Int32>* P3, ::System::Collections::Generic::List_1<::System::Int32>* P4, ::System::Collections::Generic::List_1<::System::Int32>* P5, ::System::Boolean P6, ::System::Int32 P7, ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_10*>* P8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Int32, ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_10*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_REQBABELTOWERBEGINFIGHT_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
		}

		::System::Void __base_UpdateFloorIndex(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_UPDATEFLOORINDEX_OFFSET))(this, P0);
		}
	};
}
