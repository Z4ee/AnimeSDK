#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_5DA2E7556103D5A3_111;
class Class_1_5DA2E7556103D5A3_344;
class Class_1_90F86E90A663D1B4;
class Class_1_E081FCEC8F87505A;
class Class_2_1824EF69C8E376A3;
class Class_2_468A4FBF2E9F527C;
class Class_2_79AE422BA06F6D26_73;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace MoleMole { class UIHadalZone_Common_HadalRoomSelectContext; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_CLEAROVERRIDESELECTHEROPAGE_OFFSET UNITYSDK_OFFSET(0x157B8DE0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_CURROOMCTX_OFFSET UNITYSDK_OFFSET(0x157BA6D0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_FORCEOPENBUDDYPAGE_OFFSET UNITYSDK_OFFSET(0x157B8D40)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_FORCEOPENHEROPAGE_OFFSET UNITYSDK_OFFSET(0x157B83D0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ISLINEUPSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x157B8E30)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONBOSSINFOBTN_OFFSET UNITYSDK_OFFSET(0x157BB2D0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157B6B90)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONHADALROOMSELECTEDROLESCHANGED_OFFSET UNITYSDK_OFFSET(0x157BA650)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONLINEUPSELECTIONCHANGED_1_OFFSET UNITYSDK_OFFSET(0x157B9D30)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONLINEUPSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x157B9690)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157B6C20)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157B6570)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157B66D0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_PLAYTEAMSWITCHANI_OFFSET UNITYSDK_OFFSET(0x157B8300)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_OFFSET UNITYSDK_OFFSET(0x157B93F0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0x157B7BF0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_SETOVERRIDESELECTHEROPAGE_OFFSET UNITYSDK_OFFSET(0x157B8D90)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_SHOWINFOCONSOLEBTN_OFFSET UNITYSDK_OFFSET(0x157B6CA0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x157BB510)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__OPENSELECTHEROPAGE_OFFSET UNITYSDK_OFFSET(0x157B8420)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__REFRESHSELECTEDAVATAR_OFFSET UNITYSDK_OFFSET(0x157B7CD0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__REFRESHSELECTEDBUDDY_OFFSET UNITYSDK_OFFSET(0x157B8080)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__SETROOMSTATE_OFFSET UNITYSDK_OFFSET(0x157B6800)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__UPDATEBOSSIMAGE_OFFSET UNITYSDK_OFFSET(0x157BB250)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__UPDATEROLES_OFFSET UNITYSDK_OFFSET(0x157B6D10)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__UPDATEROOMBUFF_OFFSET UNITYSDK_OFFSET(0x157BA720)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__UPDATEROOMINFO_OFFSET UNITYSDK_OFFSET(0x157B7340)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__UPDATEROOMRESISTBYINDEX_OFFSET UNITYSDK_OFFSET(0x157BAA60)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__UPDATEROOMRESIST_OFFSET UNITYSDK_OFFSET(0x157BACF0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157BB820)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157BB8B0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157BB940)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157BB9D0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___UPDATEROLES_G____ONBUDDYHEADROWBTNCLICKED_13_1_OFFSET UNITYSDK_OFFSET(0x157BB740)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___UPDATEROLES_G____ONROLEHEADROWBTNCLICKED_13_0_OFFSET UNITYSDK_OFFSET(0x157BB660)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RoomV2_WidgetController_TypeDefinitionIndex = 51350;

	class UIHadalZone_RoomV2_WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 MAX_ROLE_COUNT = 0x3; // 0x0
		// static const ::System::Int32 MAX_BUDDY_COUNT = 0x1; // 0x0
		::Class_2_79AE422BA06F6D26_73* _view; // 0x2B8
		::MoleMole::UIHadalZone_Common_HadalRoomSelectContext* _roomSelectContext; // 0x2C0
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* _role_headRowWidgetControllers; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* _buddy_headRowWidgetControllers; // 0x2D8
		::System::Action_1<::System::Boolean>* _overrideSelectHeroPage; // 0x2E0
		::Class_1_90F86E90A663D1B4* _initSelectionDataCache; // 0x2E8
		::Class_1_90F86E90A663D1B4* _lineUpSelectionDataCache; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowInfoConsoleBtn(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_SHOWINFOCONSOLEBTN_OFFSET))(this, show);
		}

		::System::Void _SetRoomState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__SETROOMSTATE_OFFSET))(this);
		}

		::System::Void _UpdateRoles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__UPDATEROLES_OFFSET))(this);
		}

		::System::Void RefreshTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_REFRESHTEAM_OFFSET))(this);
		}

		::System::Single PlayTeamSwitchAni()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_PLAYTEAMSWITCHANI_OFFSET))(this);
		}

		::System::Void ForceOpenHeroPage(::System::Boolean openFadeInOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_FORCEOPENHEROPAGE_OFFSET))(this, openFadeInOut);
		}

		::System::Void ForceOpenBuddyPage(::System::Boolean openFadeInOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_FORCEOPENBUDDYPAGE_OFFSET))(this, openFadeInOut);
		}

		::System::Void SetOverrideSelectHeroPage(::System::Action_1<::System::Boolean>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_SETOVERRIDESELECTHEROPAGE_OFFSET))(this, action);
		}

		::System::Void ClearOverrideSelectHeroPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_CLEAROVERRIDESELECTHEROPAGE_OFFSET))(this);
		}

		::System::Boolean IsLineUpSelectionChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ISLINEUPSELECTIONCHANGED_OFFSET))(this);
		}

		::System::Void _OpenSelectHeroPage(::System::Boolean openFadeInOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__OPENSELECTHEROPAGE_OFFSET))(this, openFadeInOut);
		}

		::System::Void ReConfirmSelectionChangedOnLineupClose(::System::Action* onFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_OFFSET))(this, onFinished);
		}

		static ::System::Void OnLineupSelectionChanged(::System::Int32 layerID, ::Class_1_E081FCEC8F87505A* lineupData)
		{
			return ((::System::Void(*)(::System::Int32, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONLINEUPSELECTIONCHANGED_OFFSET))(layerID, lineupData);
		}

		static ::System::Void OnLineupSelectionChanged_1(::System::Int32 layerID, ::Class_1_90F86E90A663D1B4* lineupData)
		{
			return ((::System::Void(*)(::System::Int32, ::Class_1_90F86E90A663D1B4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONLINEUPSELECTIONCHANGED_1_OFFSET))(layerID, lineupData);
		}

		::System::Void OnHadalRoomSelectedRolesChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONHADALROOMSELECTEDROLESCHANGED_OFFSET))(this, args);
		}

		::System::Void _RefreshSelectedAvatar(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* selectedAvatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__REFRESHSELECTEDAVATAR_OFFSET))(this, selectedAvatars);
		}

		::System::Void _RefreshSelectedBuddy(::System::Int32 buddyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__REFRESHSELECTEDBUDDY_OFFSET))(this, buddyID);
		}

		::MoleMole::UIHadalZone_Common_HadalRoomSelectContext* CurRoomCtx()
		{
			return ((::MoleMole::UIHadalZone_Common_HadalRoomSelectContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_CURROOMCTX_OFFSET))(this);
		}

		::System::Void _UpdateRoomBuff(::System::Int32 index, ::Class_1_5DA2E7556103D5A3_111* roomInfoTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_5DA2E7556103D5A3_111*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__UPDATEROOMBUFF_OFFSET))(this, index, roomInfoTemplate);
		}

		::System::Void _UpdateRoomResistByIndex(::System::Int32 index, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* resists)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__UPDATEROOMRESISTBYINDEX_OFFSET))(this, index, resists);
		}

		::System::Void _UpdateRoomResist(::Class_1_5DA2E7556103D5A3_111* roomInfoTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_111*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__UPDATEROOMRESIST_OFFSET))(this, roomInfoTemplate);
		}

		::System::Void _UpdateRoomInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__UPDATEROOMINFO_OFFSET))(this);
		}

		::System::Void _UpdateBossImage(::Class_1_5DA2E7556103D5A3_344* cardConfigTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_344*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER__UPDATEBOSSIMAGE_OFFSET))(this, cardConfigTemplate);
		}

		::System::Void OnBossInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER_ONBOSSINFOBTN_OFFSET))(this);
		}

		::System::Void __UpdateRoles_g____OnRoleHeadRowBtnClicked_13_0(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___UPDATEROLES_G____ONROLEHEADROWBTNCLICKED_13_0_OFFSET))(this, index);
		}

		::System::Void __UpdateRoles_g____OnBuddyHeadRowBtnClicked_13_1(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___UPDATEROLES_G____ONBUDDYHEADROWBTNCLICKED_13_1_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
