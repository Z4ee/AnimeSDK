#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UILineupListRowWidgetController_InputState.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_7F8E72A37FA24C0F;
class Class_1_D4F8C41AAD377B89;
class Class_2_79AE422BA06F6D26_87;
class Class_2_79AE422BA06F6D26_87_Class_2_EF16346D79C18F15_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x17AE3270)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_GETFIRSTREWARDBYID_OFFSET UNITYSDK_OFFSET(0x17AE6C20)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_GETFIRSTREWARDBYINDEX_1_OFFSET UNITYSDK_OFFSET(0x17AE6D10)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_GETFIRSTREWARDBYINDEX_OFFSET UNITYSDK_OFFSET(0x17AE6B60)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONCLICKDELITEM_OFFSET UNITYSDK_OFFSET(0x17AE3E50)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONCLICKRESETBTN_OFFSET UNITYSDK_OFFSET(0x17AE6260)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17AE4060)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONEDITCLICK_OFFSET UNITYSDK_OFFSET(0x17AE66B0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x17AE6110)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONGAMEPADMORECLICK_OFFSET UNITYSDK_OFFSET(0x17AE70A0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONGETCAFEDATA_OFFSET UNITYSDK_OFFSET(0x17AE3530)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17AE4350)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17AE4170)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x17AE7100)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17AE40F0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17AE3200)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPLD_OFFSET UNITYSDK_OFFSET(0x17AE6FE0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPLT_OFFSET UNITYSDK_OFFSET(0x17AE7040)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPRD_OFFSET UNITYSDK_OFFSET(0x17AE6F80)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPRT_OFFSET UNITYSDK_OFFSET(0x17AE6F20)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_REFRESHBASEVIEW_OFFSET UNITYSDK_OFFSET(0x17AE43A0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_REFRESHREWARDBUFFVIEW_OFFSET UNITYSDK_OFFSET(0x17AE3580)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_REFRESHREWARD_OFFSET UNITYSDK_OFFSET(0x17AE5290)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x17AE42E0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETGAMEPADMOREBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x17AE60A0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETGAMEPADMORECLICK_OFFSET UNITYSDK_OFFSET(0x17AE6800)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETREWARDICON_OFFSET UNITYSDK_OFFSET(0x17AE68B0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE7150)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER__ONCLICKDELITEM_B__9_0_OFFSET UNITYSDK_OFFSET(0x17AE7160)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER__REFRESHREWARD_G__SAFEGETITEMID_26_0_OFFSET UNITYSDK_OFFSET(0x17AE6850)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17AE7260)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17AE72F0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17AE7380)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17AE7420)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17AE74B0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupListRowWidgetController_TypeDefinitionIndex = 72938;

	class UILineupListRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::MoleMole::UILineupListRowWidgetController_InputState _inputState; // 0x2F0
		::Class_2_79AE422BA06F6D26_87* _view; // 0x2F8
		::System::Action_1<::System::Int32>* onClickCallAction; // 0x300
		::System::Int32 suiteId; // 0x308
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* rewardsItems; // 0x310
		::MoleMole::UIDoubleTipsInfoWidgetController* _doubleTipsInfoWidgetController; // 0x318
		::System::Action* _onGamepadMoreClick; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnGetCafeData(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONGETCAFEDATA_OFFSET))(this, obj);
		}

		::System::Void OnClickDelItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONCLICKDELITEM_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetData(::System::Int32 intemplateIndex, ::System::Action_1<::System::Int32>* onClickCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, intemplateIndex, onClickCallback);
		}

		::System::Void RefreshBaseView(::System::Boolean needRefreshReward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_REFRESHBASEVIEW_OFFSET))(this, needRefreshReward);
		}

		::System::Void RefreshRewardBuffView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_REFRESHREWARDBUFFVIEW_OFFSET))(this);
		}

		::System::Void SetGamepadMoreBtnActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETGAMEPADMOREBTNACTIVE_OFFSET))(this, active);
		}

		::System::Void OnEndEdit(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONENDEDIT_OFFSET))(this, name);
		}

		::System::Void OnClickResetBtn(::System::Action* onResetConfirm)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONCLICKRESETBTN_OFFSET))(this, onResetConfirm);
		}

		::System::Void OnEditClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONEDITCLICK_OFFSET))(this);
		}

		::System::Void SetGamepadMoreClick(::System::Action* onGamepadMoreClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETGAMEPADMORECLICK_OFFSET))(this, onGamepadMoreClick);
		}

		::System::Void RefreshReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_REFRESHREWARD_OFFSET))(this);
		}

		::System::Int32 GetFirstRewardByIndex(::System::Int32 machineLevel, ::System::Collections::Generic::List_1<::Class_1_7F8E72A37FA24C0F*>* build, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_7F8E72A37FA24C0F*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_GETFIRSTREWARDBYINDEX_OFFSET))(this, machineLevel, build, idx);
		}

		::System::Int32 GetFirstRewardByIndex_1(::System::Int32 machineLevel, ::Class_1_D4F8C41AAD377B89* build, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Class_1_D4F8C41AAD377B89*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_GETFIRSTREWARDBYINDEX_1_OFFSET))(this, machineLevel, build, idx);
		}

		::System::Int32 GetFirstRewardById(::System::Int32 machineLevel, ::System::Int32 monsterCard)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_GETFIRSTREWARDBYID_OFFSET))(this, machineLevel, monsterCard);
		}

		::System::Void SetRewardIcon(::Class_2_79AE422BA06F6D26_87_Class_2_EF16346D79C18F15_4* view, ::System::Int32 itemId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_79AE422BA06F6D26_87_Class_2_EF16346D79C18F15_4*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETREWARDICON_OFFSET))(this, view, itemId);
		}

		::UnityEngine::RectTransform* PopUpRT()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPRT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* PopUpRD()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPRD_OFFSET))(this);
		}

		::UnityEngine::RectTransform* PopUpLD()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPLD_OFFSET))(this);
		}

		::UnityEngine::RectTransform* PopUpLT()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPLT_OFFSET))(this);
		}

		::System::Void OnGamepadMoreClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONGAMEPADMORECLICK_OFFSET))(this);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void _OnClickDelItem_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER__ONCLICKDELITEM_B__9_0_OFFSET))(this);
		}

		static ::System::Int32 _RefreshReward_g__SafeGetItemId_26_0(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* source, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER__REFRESHREWARD_G__SAFEGETITEMID_26_0_OFFSET))(source, idx);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
