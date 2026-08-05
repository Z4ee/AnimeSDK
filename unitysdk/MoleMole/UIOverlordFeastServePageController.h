#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIOverlordFeastServePageController_ModuleStateType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5002A338EA6818A8;
class Class_2_208CC9941471731A_168;
class Class_2_208CC9941471731A_623;
class Class_2_79F6D62CE30E3F8E_105;
class Class_2_B1555FA59A3F87CE;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIOverlordFeastDishItemWidgetController; }
namespace MoleMole { class UIOverlordFeastDishObjectControlWidgetController; }
namespace MoleMole { class UIOverlordFeastServePageContext; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_AUTOPUSHINNER_OFFSET UNITYSDK_OFFSET(0x183501F0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_CHANGEGUESTPLATE_OFFSET UNITYSDK_OFFSET(0x18353B20)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_CHANGEMODULESTATE_OFFSET UNITYSDK_OFFSET(0x1834D770)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_CLEARDRAGDATA_OFFSET UNITYSDK_OFFSET(0x1834D6D0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_CREATEFUNC_OFFSET UNITYSDK_OFFSET(0x1834F160)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_CREATENEWDISHOBJECT_OFFSET UNITYSDK_OFFSET(0x18350820)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_CREATEPREORDERDISHOBJECT_OFFSET UNITYSDK_OFFSET(0x18354450)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ENDDRAG_OFFSET UNITYSDK_OFFSET(0x1834E0C0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETDISHITEMCONTEXT_OFFSET UNITYSDK_OFFSET(0x1834FA80)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETDISHITEMLISTINDEX_OFFSET UNITYSDK_OFFSET(0x18354D10)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETGUESTDELICIOUSNESS_OFFSET UNITYSDK_OFFSET(0x18356960)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETGUESTHEALTH_OFFSET UNITYSDK_OFFSET(0x18356B20)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x1834FD80)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETOBJECTCONTROL_OFFSET UNITYSDK_OFFSET(0x18355140)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETREALINDEX_OFFSET UNITYSDK_OFFSET(0x1834F3A0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1834AC30)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1834AC40)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ISGUESTHAVESPECIFICDISHID_OFFSET UNITYSDK_OFFSET(0x18356CE0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_MODIFYFILLPERCENTCONTENT_OFFSET UNITYSDK_OFFSET(0x18356020)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONBEGINDRAGCONTROL_OFFSET UNITYSDK_OFFSET(0x18355CA0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONCLICKOBJECT_OFFSET UNITYSDK_OFFSET(0x18355950)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONCLICKREMOVE_OFFSET UNITYSDK_OFFSET(0x18355330)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x183539D0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONCLOSEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x183570F0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1834AC50)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONDELBTNCLICK_OFFSET UNITYSDK_OFFSET(0x18357190)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONDRAGCONTROL_OFFSET UNITYSDK_OFFSET(0x18355DE0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONDRAGCUREDITOBJECTCONSOLE_OFFSET UNITYSDK_OFFSET(0x1834DF60)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONDRAGFROMCHILD_OFFSET UNITYSDK_OFFSET(0x1834F290)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONDRAGSINGLEOBJECT_OFFSET UNITYSDK_OFFSET(0x1834EF70)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x18355E80)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONEMPTYSUBMITTIPBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1834DE70)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONENDDRAGCONTROL_OFFSET UNITYSDK_OFFSET(0x18355F00)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x18355FB0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1834CD80)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONNUMCHANGE_OFFSET UNITYSDK_OFFSET(0x183510F0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONSELECTCHILD_OFFSET UNITYSDK_OFFSET(0x1834F5D0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONSTARTDRAG_OFFSET UNITYSDK_OFFSET(0x18355D60)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONSUBMITBTNCLICK_OFFSET UNITYSDK_OFFSET(0x18356DC0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1834E4A0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1834ACE0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1834B160)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_REFRESHGUESTTABINFO_OFFSET UNITYSDK_OFFSET(0x18356410)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_REFRESHITEMLIST_OFFSET UNITYSDK_OFFSET(0x1834C790)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_REFRESHSUBMITBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x18356220)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_REFRESHTABINFO_OFFSET UNITYSDK_OFFSET(0x1834BAF0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_REMOVECURPLATEOBJ_OFFSET UNITYSDK_OFFSET(0x1834FB50)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_RESORTITEMLIST_OFFSET UNITYSDK_OFFSET(0x18354BB0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_REVERTDRAGOP_OFFSET UNITYSDK_OFFSET(0x1834D4B0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_SCREENTOWORLDPOS_OFFSET UNITYSDK_OFFSET(0x18355220)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_SETGUESTLIST_OFFSET UNITYSDK_OFFSET(0x1834B9F0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_SETREDGREENLIST_OFFSET UNITYSDK_OFFSET(0x1834B610)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_SHOWBOTTOMTIP_OFFSET UNITYSDK_OFFSET(0x1834FF80)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_STARTDRAGCUREDITOBJECTCONSOLE_OFFSET UNITYSDK_OFFSET(0x18350E30)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_STARTDRAGNEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1834F560)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_STARTDRAGSINGLEOBJECT_OFFSET UNITYSDK_OFFSET(0x18354DC0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_STARTEDITSINGLEOBJECT_OFFSET UNITYSDK_OFFSET(0x18350AA0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_STOPEDITSINGLEOBJECT_OFFSET UNITYSDK_OFFSET(0x183555D0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1834E8F0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18357560)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER__ONDELBTNCLICK_B__75_0_OFFSET UNITYSDK_OFFSET(0x18357C50)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER__ONNUMCHANGE_B__69_0_OFFSET UNITYSDK_OFFSET(0x183579C0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER__RESORTITEMLIST_B__43_0_OFFSET UNITYSDK_OFFSET(0x18357750)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER__SHOWBOTTOMTIP_B__80_0_OFFSET UNITYSDK_OFFSET(0x18357CB0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER__SHOWBOTTOMTIP_B__80_1_OFFSET UNITYSDK_OFFSET(0x18357D50)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18357D80)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18357E10)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18357E40)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18357E50)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18357E60)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastServePageController_TypeDefinitionIndex = 53322;

	class UIOverlordFeastServePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_105* _view; // 0x318
		::MoleMole::UIOverlordFeastServePageContext* _context; // 0x320
		::Class_2_B1555FA59A3F87CE* _model; // 0x328
		::Class_2_208CC9941471731A_168* _gameConfig; // 0x330
		::Class_2_208CC9941471731A_623* _guestConfig; // 0x338
		::System::Collections::Generic::List_1<::Class_1_5002A338EA6818A8*>* _curList; // 0x340
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIOverlordFeastDishObjectControlWidgetController*>* _objectControlWidgetControllers; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* _guestStates; // 0x350
		::System::Collections::Generic::List_1<::System::Int32>* _guestList; // 0x358
		::System::Boolean _isEditSingleObject; // 0x360
		::System::Int32 _curOPIndex; // 0x364
		::System::Boolean _draging; // 0x368
		::UnityEngine::Vector3 _dragStartWorldPos; // 0x36C
		::UnityEngine::Vector3 _dragStartDeltaPos; // 0x378
		::UnityEngine::Material* _deliciousnessFillMat; // 0x388
		::UnityEngine::Material* _healthFillMat; // 0x390
		::System::Int32 _lastDeliciousness; // 0x398
		::System::Int32 _lastHealth; // 0x39C
		::System::Boolean _isSubmited; // 0x3A0
		::System::Int64 _startTime; // 0x3A8
		::System::Int64 _endTime; // 0x3B0
		::System::Int64 _startGameTime; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetRedGreenList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_SETREDGREENLIST_OFFSET))(this);
		}

		::System::Void SetGuestList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_SETGUESTLIST_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateFunc(::Enum_3_DBF2701137F18AA6 arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_DBF2701137F18AA6, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_CREATEFUNC_OFFSET))(this, arg1, arg2);
		}

		::System::Void OnDragFromChild(::System::Int32 index, ::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONDRAGFROMCHILD_OFFSET))(this, index, pointerEventData);
		}

		::System::Void OnSelectChild(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONSELECTCHILD_OFFSET))(this, index);
		}

		::System::Void AutoPushInner(::System::Int32 realIndex, ::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* validGrids, ::UnityEngine::Vector3 pushPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_AUTOPUSHINNER_OFFSET))(this, realIndex, validGrids, pushPos);
		}

		::MoleMole::UIOverlordFeastDishItemWidgetController* GetItemWidget(::System::Int32 idx)
		{
			return ((::MoleMole::UIOverlordFeastDishItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETITEMWIDGET_OFFSET))(this, idx);
		}

		::System::Void RefreshTabInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_REFRESHTABINFO_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::System::Void ChangeGuestPlate(::System::Int32 guestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_CHANGEGUESTPLATE_OFFSET))(this, guestID);
		}

		::System::Void RefreshItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_REFRESHITEMLIST_OFFSET))(this);
		}

		::System::Void ResortItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_RESORTITEMLIST_OFFSET))(this);
		}

		::System::Int32 GetRealIndex(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETREALINDEX_OFFSET))(this, index);
		}

		::Class_1_5002A338EA6818A8* GetDishItemContext(::System::Int32 index)
		{
			return ((::Class_1_5002A338EA6818A8*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETDISHITEMCONTEXT_OFFSET))(this, index);
		}

		::System::Int32 GetDishItemListIndex(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETDISHITEMLISTINDEX_OFFSET))(this, index);
		}

		::System::Void StartDragNewObject(::System::Int32 index, ::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_STARTDRAGNEWOBJECT_OFFSET))(this, index, pointerEventData);
		}

		::MoleMole::UIOverlordFeastDishObjectControlWidgetController* CreateNewDishObject(::System::Int32 index)
		{
			return ((::MoleMole::UIOverlordFeastDishObjectControlWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_CREATENEWDISHOBJECT_OFFSET))(this, index);
		}

		::System::Void CreatePreorderDishObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_CREATEPREORDERDISHOBJECT_OFFSET))(this);
		}

		::MoleMole::UIOverlordFeastDishObjectControlWidgetController* GetObjectControl(::System::Int32 index)
		{
			return ((::MoleMole::UIOverlordFeastDishObjectControlWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETOBJECTCONTROL_OFFSET))(this, index);
		}

		::System::Void StartDragSingleObject(::System::Int32 index, ::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_STARTDRAGSINGLEOBJECT_OFFSET))(this, index, pointerEventData);
		}

		::System::Void StartDragCurEditObjectConsole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_STARTDRAGCUREDITOBJECTCONSOLE_OFFSET))(this);
		}

		::System::Void OnDragSingleObject(::System::Int32 index, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONDRAGSINGLEOBJECT_OFFSET))(this, index, eventData);
		}

		::System::Void OnDragCurEditObjectConsole(::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONDRAGCUREDITOBJECTCONSOLE_OFFSET))(this, offset);
		}

		::System::Void EndDrag(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ENDDRAG_OFFSET))(this, index);
		}

		::System::Void RevertDragOp(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_REVERTDRAGOP_OFFSET))(this, index);
		}

		::System::Void ClearDragData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_CLEARDRAGDATA_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 ScreenToWorldPos(::UnityEngine::RectTransform* rect, ::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::RectTransform*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_SCREENTOWORLDPOS_OFFSET))(rect, pointerEventData);
		}

		::System::Void StartEditSingleObject(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_STARTEDITSINGLEOBJECT_OFFSET))(this, index);
		}

		::System::Void StopEditSingleObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_STOPEDITSINGLEOBJECT_OFFSET))(this);
		}

		::System::Void RemoveCurPlateObj(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_REMOVECURPLATEOBJ_OFFSET))(this, index);
		}

		::System::Void OnClickRemove(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONCLICKREMOVE_OFFSET))(this, index);
		}

		::System::Void ChangeModuleState(::MoleMole::UIOverlordFeastServePageController_ModuleStateType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIOverlordFeastServePageController_ModuleStateType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_CHANGEMODULESTATE_OFFSET))(this, type);
		}

		::System::Void OnClickObject(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONCLICKOBJECT_OFFSET))(this, index);
		}

		::System::Void OnBeginDragControl(::System::Int32 index, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONBEGINDRAGCONTROL_OFFSET))(this, index, eventData);
		}

		::System::Void OnDragControl(::System::Int32 index, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONDRAGCONTROL_OFFSET))(this, index, eventData);
		}

		::System::Void OnEndDragControl(::System::Int32 index, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONENDDRAGCONTROL_OFFSET))(this, index, eventData);
		}

		::System::Void OnNumChange(::System::Boolean bChangePlate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONNUMCHANGE_OFFSET))(this, bChangePlate);
		}

		::System::Void RefreshGuestTabInfo(::System::Int32 guestId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_REFRESHGUESTTABINFO_OFFSET))(this, guestId);
		}

		::System::Void ModifyFillPercentContent(::UnityEngine::Material* material, ::System::Int32 currentNum, ::System::Int32 maxNum)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_MODIFYFILLPERCENTCONTENT_OFFSET))(this, material, currentNum, maxNum);
		}

		::System::Void RefreshSubmitButtonState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_REFRESHSUBMITBUTTONSTATE_OFFSET))(this);
		}

		::System::Void OnSubmitBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONSUBMITBTNCLICK_OFFSET))(this);
		}

		::System::Void OnCloseBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONCLOSEBTNCLICK_OFFSET))(this);
		}

		::System::Void OnDelBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONDELBTNCLICK_OFFSET))(this);
		}

		::System::Void OnEmptySubmitTipBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONEMPTYSUBMITTIPBTNCLICK_OFFSET))(this);
		}

		::System::Int32 GetGuestDeliciousness(::System::Int32 guestId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETGUESTDELICIOUSNESS_OFFSET))(this, guestId);
		}

		::System::Int32 GetGuestHealth(::System::Int32 guestId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_GETGUESTHEALTH_OFFSET))(this, guestId);
		}

		::System::Boolean IsGuestHaveSpecificDishID(::System::Int32 guestId, ::System::Int32 specificDishID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ISGUESTHAVESPECIFICDISHID_OFFSET))(this, guestId, specificDishID);
		}

		::System::Void ShowBottomTip(::System::String* tips)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_SHOWBOTTOMTIP_OFFSET))(this, tips);
		}

		::System::Void OnStartDrag(::System::Int32 index, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONSTARTDRAG_OFFSET))(this, index, eventData);
		}

		::System::Void OnDrag(::System::Int32 index, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONDRAG_OFFSET))(this, index, eventData);
		}

		::System::Void OnEndDrag(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER_ONENDDRAG_OFFSET))(this, index);
		}

		::System::Int32 _ResortItemList_b__43_0(::Class_1_5002A338EA6818A8* a, ::Class_1_5002A338EA6818A8* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5002A338EA6818A8*, ::Class_1_5002A338EA6818A8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER__RESORTITEMLIST_B__43_0_OFFSET))(this, a, b);
		}

		::System::Void _OnNumChange_b__69_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER__ONNUMCHANGE_B__69_0_OFFSET))(this);
		}

		::System::Boolean _OnDelBtnClick_b__75_0(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER__ONDELBTNCLICK_B__75_0_OFFSET))(this, index);
		}

		::System::Void _ShowBottomTip_b__80_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER__SHOWBOTTOMTIP_B__80_0_OFFSET))(this);
		}

		::System::Void _ShowBottomTip_b__80_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER__SHOWBOTTOMTIP_B__80_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
