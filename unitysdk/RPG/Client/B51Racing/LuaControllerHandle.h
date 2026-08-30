#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_ADDONBACKPRESSEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B6C4860)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNHOLDTOCS_OFFSET UNITYSDK_OFFSET(0x1B6D03B0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNRELEASETOCS_OFFSET UNITYSDK_OFFSET(0x1B6B6620)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNSHORTDOWNCLICKTOCS_OFFSET UNITYSDK_OFFSET(0x1B6B6540)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNTOCS_OFFSET UNITYSDK_OFFSET(0x1B6C4780)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDCUSTOMFADEINANIMNAME_OFFSET UNITYSDK_OFFSET(0x1B6D04A0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDCUSTOMFADEOUTANIMNAME_OFFSET UNITYSDK_OFFSET(0x1B6D0580)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDONFADEINANIMEND_OFFSET UNITYSDK_OFFSET(0x1B6D0230)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0x1B6C6EA0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDREDDOT_1_OFFSET UNITYSDK_OFFSET(0x1B6D06C0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDREDDOT_OFFSET UNITYSDK_OFFSET(0x1B6D0660)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BIND_OFFSET UNITYSDK_OFFSET(0x1B6CFD50)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_EXITAFTERFRAMES_OFFSET UNITYSDK_OFFSET(0x1B6CFF80)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_EXIT_OFFSET UNITYSDK_OFFSET(0x1B6C5930)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B6CFF10)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_GET_UICONTROLLER_OFFSET UNITYSDK_OFFSET(0x1B6CFF60)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_INVOKEONFADEINANIMEND_OFFSET UNITYSDK_OFFSET(0x1B6CF840)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_INVOKEONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0x1B6D0140)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_SETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x1B6C58E0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_SET_UICONTROLLER_OFFSET UNITYSDK_OFFSET(0x1B6CFF70)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_UNBINDONFADEINANIMEND_OFFSET UNITYSDK_OFFSET(0x1B6D0340)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_UNBINDONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0x1B6D00D0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_UNBIND_OFFSET UNITYSDK_OFFSET(0x1B6CFDE0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6D07B0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE__EXITAFTERFRAMES_B__9_0_OFFSET UNITYSDK_OFFSET(0x1B6D08C0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int LuaControllerHandle_TypeDefinitionIndex = 80432;

	class LuaControllerHandle : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Func_1<::System::Boolean>*>* _OnBackPressedCallbacks; // 0x10
		::System::Collections::Generic::List_1<::System::Action*>* _OnFadeInAnimEndCallbacks; // 0x18
		::XLua::LuaTable* _Table; // 0x20
		::RPG::Client::LuaUIController* _UIController_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::Action*>* _OnStartExitCallbacks; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE__CTOR_OFFSET))(this);
		}

		::System::Void Bind(::XLua::LuaTable* a1, ::RPG::Client::UIController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BIND_OFFSET))(this, a1, a2);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_UNBIND_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* get_UIController()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_GET_UICONTROLLER_OFFSET))(this);
		}

		::System::Void set_UIController(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_SET_UICONTROLLER_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_EXIT_OFFSET))(this);
		}

		::System::Void ExitAfterFrames(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_EXITAFTERFRAMES_OFFSET))(this, a1);
		}

		::System::Void SetExitAfterTransition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_SETEXITAFTERTRANSITION_OFFSET))(this, a1);
		}

		::System::Void BindOnStartExit(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDONSTARTEXIT_OFFSET))(this, a1);
		}

		::System::Void UnbindOnStartExit(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_UNBINDONSTARTEXIT_OFFSET))(this, a1);
		}

		::System::Void InvokeOnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_INVOKEONSTARTEXIT_OFFSET))(this);
		}

		::System::Void BindOnFadeInAnimEnd(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDONFADEINANIMEND_OFFSET))(this, a1);
		}

		::System::Void UnbindOnFadeInAnimEnd(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_UNBINDONFADEINANIMEND_OFFSET))(this, a1);
		}

		::System::Void InvokeOnFadeInAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_INVOKEONFADEINANIMEND_OFFSET))(this);
		}

		::System::Void AddOnBackPressedCallback(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_ADDONBACKPRESSEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void BindBtnToCs(::UnityEngine::UI::Button* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNTOCS_OFFSET))(this, a1, a2);
		}

		::System::Void BindBtnHoldToCs(::UnityEngine::GameObject* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNHOLDTOCS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BindBtnShortDownClickToCs(::UnityEngine::UI::Button* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNSHORTDOWNCLICKTOCS_OFFSET))(this, a1, a2);
		}

		::System::Void BindBtnReleaseToCs(::UnityEngine::UI::Button* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNRELEASETOCS_OFFSET))(this, a1, a2);
		}

		::System::Void BindCustomFadeInAnimName(::System::Func_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDCUSTOMFADEINANIMNAME_OFFSET))(this, a1);
		}

		::System::Void BindCustomFadeOutAnimName(::System::Func_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDCUSTOMFADEOUTANIMNAME_OFFSET))(this, a1);
		}

		::System::Void BindRedDot(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDREDDOT_OFFSET))(this, a1, a2);
		}

		::System::Void BindRedDot_1(::System::String* a1, ::System::Object* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDREDDOT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ExitAfterFrames_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE__EXITAFTERFRAMES_B__9_0_OFFSET))(this);
		}
	};
}
