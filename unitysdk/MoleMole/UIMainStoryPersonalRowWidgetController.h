#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainStoryPersonalRowWidgetController_State.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_33EA27A25F076E07;
class Class_2_60638234271CCDB8_103;
class Class_2_60638234271CCDB8_103_Class_2_CCCC37016CEE1C66;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainStoryPageController_PersonalLineRowData; }
namespace MoleMole { class UIMainStoryPersonalRowWidgetController_SelectImage; }
namespace MoleMole { class UIMainStorySubitemRowChildWindowControllerV2; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_CLEARSUBWIDGETS_OFFSET UNITYSDK_OFFSET(0x163D8C20)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_CREATESUBWIDGETS_OFFSET UNITYSDK_OFFSET(0x163D8860)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0x163D8F30)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_DOALPHAOFFSET_OFFSET UNITYSDK_OFFSET(0x151E04B0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GETSUBGOBYSUBID_OFFSET UNITYSDK_OFFSET(0x151E0590)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GET_HASSUBITEM_OFFSET UNITYSDK_OFFSET(0x151E0960)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GET_ROWDATA_OFFSET UNITYSDK_OFFSET(0x163D8830)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GET_SELFSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x163D8840)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_INVOKESUBITEM_OFFSET UNITYSDK_OFFSET(0x163D8720)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_OK_OFFSET UNITYSDK_OFFSET(0x163D75A0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x163D6570)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x163D92E0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x163D6600)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x163D5EC0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x163D6500)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUNSELECT_OFFSET UNITYSDK_OFFSET(0x163D9150)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_READNEW_OFFSET UNITYSDK_OFFSET(0x163D81F0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_REFRESHSCROLLVIEWCONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x163D90D0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x163D6AE0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x163D6770)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECT_OFFSET UNITYSDK_OFFSET(0x163D9420)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETALPHAOFFSET_OFFSET UNITYSDK_OFFSET(0x163D96A0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETROOTSELECTED_OFFSET UNITYSDK_OFFSET(0x163D9210)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETSTAR_OFFSET UNITYSDK_OFFSET(0x163D8DA0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETSUBITEM_OFFSET UNITYSDK_OFFSET(0x163D7250)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SHOWINFO_OFFSET UNITYSDK_OFFSET(0x151E0770)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_TRIGGERBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x163D8070)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_TRIGGERSELECT_OFFSET UNITYSDK_OFFSET(0x163D8360)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__CREATESUBWIDGETS_B__20_0_OFFSET UNITYSDK_OFFSET(0x151E0F20)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x151E0970)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__OK_B__7_0_OFFSET UNITYSDK_OFFSET(0x151E0C80)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__OK_B__7_1_OFFSET UNITYSDK_OFFSET(0x151E0DD0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__OK_B__7_2_OFFSET UNITYSDK_OFFSET(0x151E0B30)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x151E0B20)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__SETSUBITEM_B__22_0_OFFSET UNITYSDK_OFFSET(0x151E1080)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__SETSUBITEM_G__HIDESUBITEMS_22_2_OFFSET UNITYSDK_OFFSET(0x151E1120)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__SETSUBITEM_G__SHOWINFO_22_1_OFFSET UNITYSDK_OFFSET(0x151E10B0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151E1180)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151E1210)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151E12A0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x151E1330)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPersonalRowWidgetController_TypeDefinitionIndex = 56852;

	class UIMainStoryPersonalRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_103* _view; // 0x2B8
		::MonoUITableScrollV2* parentScrollView; // 0x2C0
		::System::Int32 _curSubID; // 0x2C8
		::MoleMole::UIMainStoryPersonalRowWidgetController_SelectImage* lastSelectItem; // 0x2D0
		::Class_2_33EA27A25F076E07* _mainStoryModel; // 0x2D8
		::MoleMole::UIMainStoryPersonalRowWidgetController_State _state; // 0x2E0
		::Class_2_60638234271CCDB8_103_Class_2_CCCC37016CEE1C66* _extendInfoWidgetView; // 0x2E8
		::MoleMole::UIMainStoryPageController_PersonalLineRowData* _rowData; // 0x2F0
		::System::Boolean _hasSubItems; // 0x2F8
		::System::Boolean _showSubItems; // 0x2F9
		::System::Action_1<::System::Boolean>* _onClick; // 0x300
		::System::Action_1<::System::Int32>* _onClickSubItem; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*>* _subItems; // 0x310
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _subIDToArchiveFileID; // 0x318
		::UnityEngine::Material* _selectMaterial; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIMainStoryPageController_PersonalLineRowData* rowData, ::System::Action_1<::System::Boolean>* onClick, ::System::Action_1<::System::Int32>* onClickSubItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainStoryPageController_PersonalLineRowData*, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, rowData, onClick, onClickSubItem);
		}

		::System::Void Ok()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_OK_OFFSET))(this);
		}

		::System::Void TriggerButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_TRIGGERBUTTONCLICK_OFFSET))(this);
		}

		::System::Void ReadNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_READNEW_OFFSET))(this);
		}

		::System::Void TriggerSelect(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_TRIGGERSELECT_OFFSET))(this, isInit);
		}

		::MoleMole::UIMainStoryPageController_PersonalLineRowData* get_RowData()
		{
			return ((::MoleMole::UIMainStoryPageController_PersonalLineRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GET_ROWDATA_OFFSET))(this);
		}

		::MonoUITableScrollV2* get_selfScrollView()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GET_SELFSCROLLVIEW_OFFSET))(this);
		}

		::System::Void RefreshState(::MoleMole::UIMainStoryPersonalRowWidgetController_State state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainStoryPersonalRowWidgetController_State))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_REFRESHSTATE_OFFSET))(this, state);
		}

		::System::Void SetStar(::System::Int32 star)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETSTAR_OFFSET))(this, star);
		}

		::System::Void InvokeSubItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_INVOKESUBITEM_OFFSET))(this, index);
		}

		::System::Void ClearSubWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_CLEARSUBWIDGETS_OFFSET))(this);
		}

		::System::Void CreateSubWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_CREATESUBWIDGETS_OFFSET))(this);
		}

		::System::Void CreateSubWidget(::System::Int32 index, ::System::Int32 subID, ::System::Action_2<::System::Int32, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*>* subBtnCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET))(this, index, subID, subBtnCallback);
		}

		::System::Void SetSubItem(::System::Boolean showSubItems, ::System::Boolean immediateUnselect, ::System::Boolean delayPlayFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETSUBITEM_OFFSET))(this, showSubItems, immediateUnselect, delayPlayFadeIn);
		}

		::System::Void RefreshScrollViewContentActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_REFRESHSCROLLVIEWCONTENTACTIVE_OFFSET))(this);
		}

		::System::Void SetRootSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETROOTSELECTED_OFFSET))(this, selected);
		}

		::System::Void OnSelect(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONSELECT_OFFSET))(this, anim);
		}

		::System::Void OnUnselect(::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUNSELECT_OFFSET))(this, playAnim);
		}

		::System::Void Select(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetAlphaOffset(::System::Single alphaTiling)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETALPHAOFFSET_OFFSET))(this, alphaTiling);
		}

		::System::Void DOAlphaOffset(::System::Single alphaTiling, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_DOALPHAOFFSET_OFFSET))(this, alphaTiling, duration);
		}

		::UnityEngine::GameObject* GetSubGoBySubID(::System::Int32 subid)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GETSUBGOBYSUBID_OFFSET))(this, subid);
		}

		::System::Void ShowInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SHOWINFO_OFFSET))(this);
		}

		::System::Boolean get_HasSubItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GET_HASSUBITEM_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET))(this);
		}

		::System::Void _Ok_b__7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__OK_B__7_2_OFFSET))(this);
		}

		::System::Void _Ok_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__OK_B__7_0_OFFSET))(this);
		}

		::System::Void _Ok_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__OK_B__7_1_OFFSET))(this);
		}

		::System::Void _CreateSubWidgets_b__20_0(::System::Int32 subID, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2* selectImg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__CREATESUBWIDGETS_B__20_0_OFFSET))(this, subID, selectImg);
		}

		::System::Void _SetSubItem_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__SETSUBITEM_B__22_0_OFFSET))(this);
		}

		::System::Void _SetSubItem_g__ShowInfo_22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__SETSUBITEM_G__SHOWINFO_22_1_OFFSET))(this);
		}

		::System::Void _SetSubItem_g__HideSubItems_22_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__SETSUBITEM_G__HIDESUBITEMS_22_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
