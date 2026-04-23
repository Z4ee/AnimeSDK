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

#define RPG_CLIENT_SUPERDROPDOWN_ADDITEM_OFFSET UNITYSDK_OFFSET(0xB1EC930)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_1_OFFSET UNITYSDK_OFFSET(0xB1EC4E0)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_2_OFFSET UNITYSDK_OFFSET(0xB1EC5F0)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_3_OFFSET UNITYSDK_OFFSET(0xB1EC6F0)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_4_OFFSET UNITYSDK_OFFSET(0xB1EC860)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_OFFSET UNITYSDK_OFFSET(0xB1EC430)
#define RPG_CLIENT_SUPERDROPDOWN_AWAKE_OFFSET UNITYSDK_OFFSET(0xB1EAA80)
#define RPG_CLIENT_SUPERDROPDOWN_BINDTOGGLECHANGEDFUNCTION_OFFSET UNITYSDK_OFFSET(0xB1ED010)
#define RPG_CLIENT_SUPERDROPDOWN_CLEAROPTIONS_OFFSET UNITYSDK_OFFSET(0xB1EB1F0)
#define RPG_CLIENT_SUPERDROPDOWN_GET_TURNOFFCHECKVALUE_OFFSET UNITYSDK_OFFSET(0xB1EC910)
#define RPG_CLIENT_SUPERDROPDOWN_HASSTATE_OFFSET UNITYSDK_OFFSET(0xB1EBB70)
#define RPG_CLIENT_SUPERDROPDOWN_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xB1EC310)
#define RPG_CLIENT_SUPERDROPDOWN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB1EAC70)
#define RPG_CLIENT_SUPERDROPDOWN_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xB1EB500)
#define RPG_CLIENT_SUPERDROPDOWN_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xB1EB400)
#define RPG_CLIENT_SUPERDROPDOWN_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xB1EB2E0)
#define RPG_CLIENT_SUPERDROPDOWN_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xB1EB690)
#define RPG_CLIENT_SUPERDROPDOWN_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB1EBC20)
#define RPG_CLIENT_SUPERDROPDOWN_REFRESHSHOWNVALUE_OFFSET UNITYSDK_OFFSET(0xB1EAE30)
#define RPG_CLIENT_SUPERDROPDOWN_SETCHECKED_OFFSET UNITYSDK_OFFSET(0xB1EB960)
#define RPG_CLIENT_SUPERDROPDOWN_SETLUABINDINGCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1ECFA0)
#define RPG_CLIENT_SUPERDROPDOWN_SETOPTIONSCOUNT_OFFSET UNITYSDK_OFFSET(0xB1ED060)
#define RPG_CLIENT_SUPERDROPDOWN_SET_OFFSET UNITYSDK_OFFSET(0xB1EAD10)
#define RPG_CLIENT_SUPERDROPDOWN_SET_TURNOFFCHECKVALUE_OFFSET UNITYSDK_OFFSET(0xB1EC920)
#define RPG_CLIENT_SUPERDROPDOWN_START_OFFSET UNITYSDK_OFFSET(0xB1EAB90)
#define RPG_CLIENT_SUPERDROPDOWN_UPDATE_OFFSET UNITYSDK_OFFSET(0xB1EA8B0)
#define RPG_CLIENT_SUPERDROPDOWN__ANIMATORCHECK_OFFSET UNITYSDK_OFFSET(0xB1EBA80)
#define RPG_CLIENT_SUPERDROPDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0xB1ED1F0)
#define RPG_CLIENT_SUPERDROPDOWN__INITNAVIGATIONMODE_OFFSET UNITYSDK_OFFSET(0xB1ECF10)
#define RPG_CLIENT_SUPERDROPDOWN__ONUIINCONTROLTIPUPDATE_OFFSET UNITYSDK_OFFSET(0xB1ECDA0)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ADDITEM_OFFSET UNITYSDK_OFFSET(0xB1ED650)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xB1ED230)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xB1ED5A0)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB1ED320)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xB1ED4D0)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xB1ED420)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xB1ED350)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xB1ED4E0)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB1ED4F0)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_SET_OFFSET UNITYSDK_OFFSET(0xB1ED340)
#define RPG_CLIENT_SUPERDROPDOWN___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0xB1ED2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SuperDropDown_TypeDefinitionIndex = 66956;

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
