#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_92;
class Class_2_F9471F3BB5949932_3;
class MonoUITableScrollV2;
class UIMainStoryParam;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainStoryRow03ChildWindowController_SelectImage; }
namespace MoleMole { class UIMainStorySubitemRowChildWindowControllerV2; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_CREATESUBWIDGET_1_OFFSET UNITYSDK_OFFSET(0x19867EC0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0x19867CF0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_DOALPHAOFFSET_OFFSET UNITYSDK_OFFSET(0x19869E20)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GETBATTLETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x19867B70)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GETPERFORMSBEFORESUBID_OFFSET UNITYSDK_OFFSET(0x19868630)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GETSUBGOBYSUBID_OFFSET UNITYSDK_OFFSET(0x19868E70)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GET_HASSUBITEM_OFFSET UNITYSDK_OFFSET(0x1986A5C0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GET_SELFSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1986A5D0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x19868E60)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x1986A830)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19866A60)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19867A70)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_OK_OFFSET UNITYSDK_OFFSET(0x19869050)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONBTNCLICK_OFFSET UNITYSDK_OFFSET(0x19867480)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19866A70)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONQUESTUPDATE_OFFSET UNITYSDK_OFFSET(0x1986A600)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x19868860)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19867150)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x198671F0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19866B00)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x198670E0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONUNSELECT_OFFSET UNITYSDK_OFFSET(0x19868980)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_REFRESHCOMPLETEVIEW_OFFSET UNITYSDK_OFFSET(0x19868A30)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_REFRESHINFOVIEW_OFFSET UNITYSDK_OFFSET(0x19868AA0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_REFRESHSCROLLVIEWCONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x198693C0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19869680)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_RESETCOLOR_OFFSET UNITYSDK_OFFSET(0x19869440)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_RESETHISTORY_OFFSET UNITYSDK_OFFSET(0x19868550)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECT_OFFSET UNITYSDK_OFFSET(0x19869F00)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SETALPHAOFFSET_OFFSET UNITYSDK_OFFSET(0x19869D40)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SETROOTSELECTED_OFFSET UNITYSDK_OFFSET(0x19869BA0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SETSTAR_OFFSET UNITYSDK_OFFSET(0x19868C40)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SETSUBITEM_OFFSET UNITYSDK_OFFSET(0x19867770)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x1986A840)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SHOWINFO_OFFSET UNITYSDK_OFFSET(0x19869C70)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_TRIGGERBTNCLICK_OFFSET UNITYSDK_OFFSET(0x19867300)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER__CREATESUBWIDGET_B__9_0_OFFSET UNITYSDK_OFFSET(0x1986A930)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER__CREATESUBWIDGET_G__SETSELECTED_9_1_OFFSET UNITYSDK_OFFSET(0x1986AA70)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1986A850)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER__SETSUBITEM_B__23_0_OFFSET UNITYSDK_OFFSET(0x1986AAE0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1986AB20)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1986ABB0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1986AC70)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1986AC80)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1986AC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryRow03ChildWindowController_TypeDefinitionIndex = 91003;

	class UIMainStoryRow03ChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::MonoUITableScrollV2* parentScrollView; // 0x318
		::Class_2_F9471F3BB5949932_3* _view; // 0x320
		::System::Int32 _templateID; // 0x328
		::System::Boolean _selected; // 0x32C
		::System::Action_1<::System::Int32>* _clickFunc; // 0x330
		::System::Action* _callback; // 0x338
		::Class_2_208CC9941471731A_92* _template_k__BackingField; // 0x340
		::MoleMole::UIMainStoryRow03ChildWindowController_SelectImage* lastSelectItem; // 0x348
		::System::Int32 _curSubID; // 0x350
		::UIMainStoryParam* param; // 0x358
		::System::Boolean _hasSubItem; // 0x360
		::UnityEngine::Material* _selectMaterial; // 0x368
		::System::Collections::Generic::List_1<::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*>* _subitems; // 0x370
		::System::Collections::Generic::List_1<::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*>* selectHistory; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void TriggerBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_TRIGGERBTNCLICK_OFFSET))(this);
		}

		::System::Void onBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONBTNCLICK_OFFSET))(this);
		}

		::System::Void CreateSubWidget(::Class_2_208CC9941471731A_92* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_92*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_CREATESUBWIDGET_OFFSET))(this, template_);
		}

		::System::Void CreateSubWidget_1(::Class_2_208CC9941471731A_92* template_, ::System::Action_2<::System::Int32, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*>* subBtnCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_92*, ::System::Action_2<::System::Int32, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_CREATESUBWIDGET_1_OFFSET))(this, template_, subBtnCallback);
		}

		::System::Void ResetHistory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_RESETHISTORY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetPerformsBeforeSubID(::System::Int32 startID, ::System::Boolean include)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GETPERFORMSBEFORESUBID_OFFSET))(this, startID, include);
		}

		::System::Void OnSelect(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONSELECT_OFFSET))(this, anim);
		}

		::System::Void OnUnselect(::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONUNSELECT_OFFSET))(this, playAnim);
		}

		::System::Void RefreshCompleteView(::System::Boolean isComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_REFRESHCOMPLETEVIEW_OFFSET))(this, isComplete);
		}

		::System::Void RefreshInfoView(::System::Boolean isShowInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_REFRESHINFOVIEW_OFFSET))(this, isShowInfo);
		}

		::System::Void SetStar(::System::Int32 star)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SETSTAR_OFFSET))(this, star);
		}

		::System::Int32 get_TemplateID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GET_TEMPLATEID_OFFSET))(this);
		}

		::System::Int32 GetBattleTemplateID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GETBATTLETEMPLATEID_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetSubGoBySubID(::System::Int32 subid)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GETSUBGOBYSUBID_OFFSET))(this, subid);
		}

		::System::Void Ok()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_OK_OFFSET))(this);
		}

		::System::Void SetSubItem(::System::Boolean active, ::System::Boolean immediateUnselect, ::System::Boolean delayPlayFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SETSUBITEM_OFFSET))(this, active, immediateUnselect, delayPlayFadeIn);
		}

		::System::Void RefreshScrollViewContentActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_REFRESHSCROLLVIEWCONTENTACTIVE_OFFSET))(this);
		}

		::System::Void ResetColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_RESETCOLOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_INVOKE_OFFSET))(this, index);
		}

		::System::Void RefreshView(::System::Int32 curSelectedTapeIndex, ::System::Int32 vhsQuestTemplateID, ::System::Action* callback, ::System::Action_1<::System::Int32>* clickFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this, curSelectedTapeIndex, vhsQuestTemplateID, callback, clickFunc);
		}

		::System::Void SetRootSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SETROOTSELECTED_OFFSET))(this, selected);
		}

		::System::Void ShowInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SHOWINFO_OFFSET))(this);
		}

		::System::Void SetAlphaOffset(::System::Single alphaTiling)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SETALPHAOFFSET_OFFSET))(this, alphaTiling);
		}

		::System::Void DOAlphaOffset(::System::Single alphaTiling, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_DOALPHAOFFSET_OFFSET))(this, alphaTiling, duration);
		}

		::System::Void Select(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECT_OFFSET))(this, isSelect);
		}

		::System::Boolean get_HasSubItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GET_HASSUBITEM_OFFSET))(this);
		}

		::MonoUITableScrollV2* get_selfScrollView()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GET_SELFSCROLLVIEW_OFFSET))(this);
		}

		::System::Void OnQuestUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_ONQUESTUPDATE_OFFSET))(this, obj);
		}

		::Class_2_208CC9941471731A_92* get_template()
		{
			return ((::Class_2_208CC9941471731A_92*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_template(::Class_2_208CC9941471731A_92* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_92*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SET_TEMPLATE_OFFSET))(this, value);
		}

		::System::Void _CreateSubWidget_b__9_0(::System::Int32 subid, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2* selectImg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER__CREATESUBWIDGET_B__9_0_OFFSET))(this, subid, selectImg);
		}

		::System::Void _CreateSubWidget_g__SetSelected_9_1(::MoleMole::UIMainStorySubitemRowChildWindowControllerV2* childItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER__CREATESUBWIDGET_G__SETSELECTED_9_1_OFFSET))(this, childItem);
		}

		::System::Void _SetSubItem_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER__SETSUBITEM_B__23_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
