#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBabeltowerFightingInfoWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_60638234271CCDB8_6;
class Class_3_025FF4981524A424_617;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralRoleCardRowWidgetController_Context; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_CHECKNEWBIE_OFFSET UNITYSDK_OFFSET(0x19295FD0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_INITBUDDY_OFFSET UNITYSDK_OFFSET(0x192953A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_INITPOOLDATA_OFFSET UNITYSDK_OFFSET(0x19295250)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192943C0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19294600)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONNEWBIECLOSE_OFFSET UNITYSDK_OFFSET(0x19294560)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19294C20)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONPOSTSETROLECARDDATA_OFFSET UNITYSDK_OFFSET(0x19294730)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONPOWERBTNCLICK_OFFSET UNITYSDK_OFFSET(0x19295160)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192944C0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_OPENDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x192954F0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REFRESHBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x19294840)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REFRESHPOWERGET_OFFSET UNITYSDK_OFFSET(0x19294F30)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REFRESHPOWERTEXT_OFFSET UNITYSDK_OFFSET(0x19295840)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REQBABELTOWERBEGINFIGHT_OFFSET UNITYSDK_OFFSET(0x19295970)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_UPDATEFLOORINDEX_OFFSET UNITYSDK_OFFSET(0x19295D70)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19296250)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER__ONNEWBIECLOSE_B__3_0_OFFSET UNITYSDK_OFFSET(0x19296260)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER__ONPOSTREFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x19296280)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_INITBUDDY_OFFSET UNITYSDK_OFFSET(0x19296290)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_INITPOOLDATA_OFFSET UNITYSDK_OFFSET(0x192962A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192962B0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19296380)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x192963C0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONPOSTSETROLECARDDATA_OFFSET UNITYSDK_OFFSET(0x19296450)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19296460)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_OPENDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x19296470)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_REFRESHBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x19296480)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_REQBABELTOWERBEGINFIGHT_OFFSET UNITYSDK_OFFSET(0x19296490)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_UPDATEFLOORINDEX_OFFSET UNITYSDK_OFFSET(0x192965F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingInfo2WidgetController_TypeDefinitionIndex = 49095;

	class UIBabeltowerFightingInfo2WidgetController : public ::MoleMole::UIBabeltowerFightingInfoWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_6* _view; // 0x3A0

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

		::System::Void ReqBabelTowerBeginFight(::System::Int32 towerid, ::System::UInt32 floorIndex, ::System::Int32 buddy, ::System::Collections::Generic::List_1<::System::Int32>* selectAvatars, ::System::Collections::Generic::List_1<::System::Int32>* poolAvatars, ::System::Collections::Generic::List_1<::System::Int32>* buddyList, ::System::Boolean isContinue, ::System::Int32 selectBuf, ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_617*>* overrideCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Int32, ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_617*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER_REQBABELTOWERBEGINFIGHT_OFFSET))(this, towerid, floorIndex, buddy, selectAvatars, poolAvatars, buddyList, isContinue, selectBuf, overrideCallback);
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

		::System::Void __base_ReqBabelTowerBeginFight(::System::Int32 P0, ::System::UInt32 P1, ::System::Int32 P2, ::System::Collections::Generic::List_1<::System::Int32>* P3, ::System::Collections::Generic::List_1<::System::Int32>* P4, ::System::Collections::Generic::List_1<::System::Int32>* P5, ::System::Boolean P6, ::System::Int32 P7, ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_617*>* P8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Int32, ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_617*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_REQBABELTOWERBEGINFIGHT_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
		}

		::System::Void __base_UpdateFloorIndex(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO2WIDGETCONTROLLER___BASE_UPDATEFLOORINDEX_OFFSET))(this, P0);
		}
	};
}
