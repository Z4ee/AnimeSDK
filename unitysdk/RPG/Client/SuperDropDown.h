#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/UI/Dropdown.h"

namespace RPG::Client { class SuperDropDown_LocalizedOptionData; }
namespace RPG::Client { class SuperDropDown_VoidDelegate; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Dropdown_DropdownItem; }
namespace UnityEngine::UI { class Dropdown_OptionData; }
namespace UnityEngine::UI { class Toggle; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_SUPERDROPDOWN_ADDITEM_OFFSET UNITYSDK_OFFSET(0xA4FA4F0)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_1_OFFSET UNITYSDK_OFFSET(0xA4FA0A0)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_2_OFFSET UNITYSDK_OFFSET(0xA4FA1B0)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_3_OFFSET UNITYSDK_OFFSET(0xA4FA2B0)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_4_OFFSET UNITYSDK_OFFSET(0xA4FA420)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_OFFSET UNITYSDK_OFFSET(0xA4F9FF0)
#define RPG_CLIENT_SUPERDROPDOWN_AWAKE_OFFSET UNITYSDK_OFFSET(0xA4F8640)
#define RPG_CLIENT_SUPERDROPDOWN_BINDTOGGLECHANGEDFUNCTION_OFFSET UNITYSDK_OFFSET(0xA4FABD0)
#define RPG_CLIENT_SUPERDROPDOWN_CLEAROPTIONS_OFFSET UNITYSDK_OFFSET(0xA4F8DB0)
#define RPG_CLIENT_SUPERDROPDOWN_GET_TURNOFFCHECKVALUE_OFFSET UNITYSDK_OFFSET(0xA4FA4D0)
#define RPG_CLIENT_SUPERDROPDOWN_HASSTATE_OFFSET UNITYSDK_OFFSET(0xA4F9730)
#define RPG_CLIENT_SUPERDROPDOWN_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xA4F9ED0)
#define RPG_CLIENT_SUPERDROPDOWN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA4F8830)
#define RPG_CLIENT_SUPERDROPDOWN_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xA4F90C0)
#define RPG_CLIENT_SUPERDROPDOWN_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xA4F8FC0)
#define RPG_CLIENT_SUPERDROPDOWN_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA4F8EA0)
#define RPG_CLIENT_SUPERDROPDOWN_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xA4F9250)
#define RPG_CLIENT_SUPERDROPDOWN_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA4F97E0)
#define RPG_CLIENT_SUPERDROPDOWN_REFRESHSHOWNVALUE_OFFSET UNITYSDK_OFFSET(0xA4F89F0)
#define RPG_CLIENT_SUPERDROPDOWN_SETCHECKED_OFFSET UNITYSDK_OFFSET(0xA4F9520)
#define RPG_CLIENT_SUPERDROPDOWN_SETLUABINDINGCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4FAB60)
#define RPG_CLIENT_SUPERDROPDOWN_SETOPTIONSCOUNT_OFFSET UNITYSDK_OFFSET(0xA4FAC20)
#define RPG_CLIENT_SUPERDROPDOWN_SET_OFFSET UNITYSDK_OFFSET(0xA4F88D0)
#define RPG_CLIENT_SUPERDROPDOWN_SET_TURNOFFCHECKVALUE_OFFSET UNITYSDK_OFFSET(0xA4FA4E0)
#define RPG_CLIENT_SUPERDROPDOWN_START_OFFSET UNITYSDK_OFFSET(0xA4F8750)
#define RPG_CLIENT_SUPERDROPDOWN_UPDATE_OFFSET UNITYSDK_OFFSET(0xA4F8470)
#define RPG_CLIENT_SUPERDROPDOWN__ANIMATORCHECK_OFFSET UNITYSDK_OFFSET(0xA4F9640)
#define RPG_CLIENT_SUPERDROPDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0xA4FAD80)
#define RPG_CLIENT_SUPERDROPDOWN__INITNAVIGATIONMODE_OFFSET UNITYSDK_OFFSET(0xA4FAAD0)
#define RPG_CLIENT_SUPERDROPDOWN__ONUIINCONTROLTIPUPDATE_OFFSET UNITYSDK_OFFSET(0xA4FA960)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ADDITEM_OFFSET UNITYSDK_OFFSET(0xA4FB1E0)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xA4FADC0)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xA4FB130)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA4FAEB0)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xA4FB060)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xA4FAFB0)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA4FAEE0)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xA4FB070)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA4FB080)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_SET_OFFSET UNITYSDK_OFFSET(0xA4FAED0)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0xA4FAE60)

namespace RPG::Client
{
	inline static constexpr unsigned int SuperDropDown_TypeDefinitionIndex = 59561;

	class SuperDropDown : public ::UnityEngine::UI::Dropdown
	{
	public:
		::UnityEngine::Animator* localAnimator; // 0x180
		::System::Boolean _IsFirstSet; // 0x188
		::System::Int32 _IsSelectedHash; // 0x18C
		::System::Int32 _SelectedHash; // 0x190
		::System::Int32 _NormalHash; // 0x194
		::RPG::Client::SuperDropDown_VoidDelegate* onSelectTrigger; // 0x198
		::RPG::Client::SuperDropDown_VoidDelegate* onDeselectTrigger; // 0x1A0
		::System::Action_4<::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Int32>* mOnSetShowItemOption; // 0x1A8
		::System::Action_3<::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Int32>* mOnSetSelectOption; // 0x1B0
		::System::Func_3<::XLua::LuaTable*, ::System::Int32, ::System::Boolean>* mOnToggleClick; // 0x1B8
		::XLua::LuaTable* bindingPanel; // 0x1C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_UPDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONDESTROY_OFFSET))(this);
		}

		::System::Void Set(::System::Int32 value, ::System::Boolean sendCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_SET_OFFSET))(this, value, sendCallback);
		}

		::System::Void ClearOptions(::System::Boolean doRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_CLEAROPTIONS_OFFSET))(this, doRefresh);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnSelectItem(::UnityEngine::UI::Toggle* toggle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONSELECTITEM_OFFSET))(this, toggle);
		}

		::System::Void SetChecked(::System::Boolean isChecked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_SETCHECKED_OFFSET))(this, isChecked);
		}

		::System::Boolean HasState(::UnityEngine::Animator* _animator, ::System::String* state_name, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_HASSTATE_OFFSET))(this, _animator, state_name, index);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONDESELECT_OFFSET))(this, eventData);
		}

		::System::Void RefreshShownValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_REFRESHSHOWNVALUE_OFFSET))(this);
		}

		::System::Void AddOptions(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_OFFSET))(this, options);
		}

		::System::Void AddOptions_1(::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_1_OFFSET))(this, options);
		}

		::System::Void AddOptions_2(::System::Collections::Generic::List_1<::System::String*>* options, ::System::Boolean swtch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_2_OFFSET))(this, options, swtch);
		}

		::System::Void AddOptions_3(::System::Collections::Generic::List_1<::RPG::Client::TextID>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_3_OFFSET))(this, options);
		}

		::System::Void AddOptions_4(::System::Collections::Generic::List_1<::RPG::Client::SuperDropDown_LocalizedOptionData*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SuperDropDown_LocalizedOptionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_4_OFFSET))(this, options);
		}

		::System::Boolean get_TurnOffCheckValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_GET_TURNOFFCHECKVALUE_OFFSET))(this);
		}

		::System::Void set_TurnOffCheckValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_SET_TURNOFFCHECKVALUE_OFFSET))(this, value);
		}

		::UnityEngine::UI::Dropdown_DropdownItem* AddItem(::UnityEngine::UI::Dropdown_OptionData* data, ::System::Boolean selected, ::UnityEngine::UI::Dropdown_DropdownItem* itemTemplate, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_DropdownItem*>* items)
		{
			return ((::UnityEngine::UI::Dropdown_DropdownItem*(*)(::PVOID, ::UnityEngine::UI::Dropdown_OptionData*, ::System::Boolean, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_DropdownItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ADDITEM_OFFSET))(this, data, selected, itemTemplate, items);
		}

		::System::Boolean _AnimatorCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN__ANIMATORCHECK_OFFSET))(this);
		}

		::System::Void _OnUIInControlTipUpdate(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN__ONUIINCONTROLTIPUPDATE_OFFSET))(this, args);
		}

		::System::Void _InitNavigationMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN__INITNAVIGATIONMODE_OFFSET))(this);
		}

		::System::Void SetLuaBindingCallback(::XLua::LuaTable* panel, ::System::Action_4<::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Int32>* onSetShowItemOption, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Int32>* onSetSelectOption)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action_4<::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Int32>*, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_SETLUABINDINGCALLBACK_OFFSET))(this, panel, onSetShowItemOption, onSetSelectOption);
		}

		::System::Void BindToggleChangedFunction(::System::Func_3<::XLua::LuaTable*, ::System::Int32, ::System::Boolean>* OnToggleClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::XLua::LuaTable*, ::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_BINDTOGGLECHANGEDFUNCTION_OFFSET))(this, OnToggleClick);
		}

		::System::Void SetOptionsCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_SETOPTIONSCOUNT_OFFSET))(this, count);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_START_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Set(::System::Int32 P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_SET_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONPOINTERUP_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSelectItem(::UnityEngine::UI::Toggle* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONSELECTITEM_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSelect(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONSELECT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDeselect(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONDESELECT_OFFSET))(this, P0);
		}

		::UnityEngine::UI::Dropdown_DropdownItem* __iFixBaseProxy_AddItem(::UnityEngine::UI::Dropdown_OptionData* P0, ::System::Boolean P1, ::UnityEngine::UI::Dropdown_DropdownItem* P2, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_DropdownItem*>* P3)
		{
			return ((::UnityEngine::UI::Dropdown_DropdownItem*(*)(::PVOID, ::UnityEngine::UI::Dropdown_OptionData*, ::System::Boolean, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_DropdownItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ADDITEM_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
