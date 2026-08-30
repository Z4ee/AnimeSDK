#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PluginMsgReceiver.h"
#include "unitysdk/RPG/Client/MonoNativeEditBox_EditBoxConfig.h"
#include "unitysdk/RPG/Client/MonoNativeEditBox_ReturnKeyType.h"
#include "unitysdk/UnityEngine/Rect.h"

class JsonObject;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MONONATIVEEDITBOX_ADD_RETURNPRESSED_OFFSET UNITYSDK_OFFSET(0x1ACF9450)
#define RPG_CLIENT_MONONATIVEEDITBOX_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ACF9BA0)
#define RPG_CLIENT_MONONATIVEEDITBOX_CHECKERRORJSONRET_OFFSET UNITYSDK_OFFSET(0x1ACFAE70)
#define RPG_CLIENT_MONONATIVEEDITBOX_CREATENATIVEEDIT_OFFSET UNITYSDK_OFFSET(0x1ACFAF60)
#define RPG_CLIENT_MONONATIVEEDITBOX_GETNATIVEFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1ACFA8A0)
#define RPG_CLIENT_MONONATIVEEDITBOX_GETSCREENRECTFROMRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1ACF9900)
#define RPG_CLIENT_MONONATIVEEDITBOX_GET_INPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1ACF9510)
#define RPG_CLIENT_MONONATIVEEDITBOX_GET_KEYBOARDSHOWING_OFFSET UNITYSDK_OFFSET(0x1ACF9540)
#define RPG_CLIENT_MONONATIVEEDITBOX_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1ACF9560)
#define RPG_CLIENT_MONONATIVEEDITBOX_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1ACF9520)
#define RPG_CLIENT_MONONATIVEEDITBOX_INITIALIZENATIVEEDIT_OFFSET UNITYSDK_OFFSET(0x1ACF98B0)
#define RPG_CLIENT_MONONATIVEEDITBOX_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ACF9820)
#define RPG_CLIENT_MONONATIVEEDITBOX_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1ACFA240)
#define RPG_CLIENT_MONONATIVEEDITBOX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1ACFA060)
#define RPG_CLIENT_MONONATIVEEDITBOX_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1ACFA000)
#define RPG_CLIENT_MONONATIVEEDITBOX_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1ACF9D90)
#define RPG_CLIENT_MONONATIVEEDITBOX_ONPLUGINMSGDIRECT_OFFSET UNITYSDK_OFFSET(0x1ACFAC40)
#define RPG_CLIENT_MONONATIVEEDITBOX_ONTEXTCHANGE_OFFSET UNITYSDK_OFFSET(0x1ACFAAE0)
#define RPG_CLIENT_MONONATIVEEDITBOX_ONTEXTEDITEND_OFFSET UNITYSDK_OFFSET(0x1ACFABB0)
#define RPG_CLIENT_MONONATIVEEDITBOX_PLUGINSMESSAGEROUTINE_OFFSET UNITYSDK_OFFSET(0x1ACFADD0)
#define RPG_CLIENT_MONONATIVEEDITBOX_PREPARENATIVEEDIT_OFFSET UNITYSDK_OFFSET(0x1ACFA360)
#define RPG_CLIENT_MONONATIVEEDITBOX_REMOVENATIVE_OFFSET UNITYSDK_OFFSET(0x1ACFA0D0)
#define RPG_CLIENT_MONONATIVEEDITBOX_REMOVE_RETURNPRESSED_OFFSET UNITYSDK_OFFSET(0x1ACF94B0)
#define RPG_CLIENT_MONONATIVEEDITBOX_SETFOCUS_OFFSET UNITYSDK_OFFSET(0x1ACFA2C0)
#define RPG_CLIENT_MONONATIVEEDITBOX_SETNATIVEEDITRECT_OFFSET UNITYSDK_OFFSET(0x1ACFBED0)
#define RPG_CLIENT_MONONATIVEEDITBOX_SETTEXTNATIVE_OFFSET UNITYSDK_OFFSET(0x1ACF9640)
#define RPG_CLIENT_MONONATIVEEDITBOX_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x1ACF9DF0)
#define RPG_CLIENT_MONONATIVEEDITBOX_SET_KEYBOARDSHOWING_OFFSET UNITYSDK_OFFSET(0x1ACF9550)
#define RPG_CLIENT_MONONATIVEEDITBOX_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1ACF95C0)
#define RPG_CLIENT_MONONATIVEEDITBOX_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1ACF9530)
#define RPG_CLIENT_MONONATIVEEDITBOX_START_OFFSET UNITYSDK_OFFSET(0x1ACF9D40)
#define RPG_CLIENT_MONONATIVEEDITBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACFC380)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNativeEditBox_TypeDefinitionIndex = 71126;

	class MonoNativeEditBox : public ::PluginMsgReceiver
	{
	public:
		// static const ::System::String* MSG_CREATE; // 0x0
		// static const ::System::String* MSG_REMOVE; // 0x0
		// static const ::System::String* MSG_SET_TEXT; // 0x0
		// static const ::System::String* MSG_SET_RECT; // 0x0
		// static const ::System::String* MSG_SET_FOCUS; // 0x0
		// static const ::System::String* MSG_SET_VISIBLE; // 0x0
		// static const ::System::String* MSG_TEXT_CHANGE; // 0x0
		// static const ::System::String* MSG_TEXT_END_EDIT; // 0x0
		// static const ::System::String* MSG_ANDROID_KEY_DOWN; // 0x0
		// static const ::System::String* MSG_RETURN_PRESSED; // 0x0
		// static const ::System::String* MSG_GET_TEXT; // 0x0
		// static const ::System::String* MSG_KEYBOARD_SHOWN; // 0x0
		// static const ::System::String* MSG_KEYBOARD_HIDDEN; // 0x0
		// static const ::System::String* MSG_GET_FOCUS; // 0x0
		::RPG::Client::MonoNativeEditBox_ReturnKeyType returnKeyType; // 0x20
		::System::Boolean useInputFieldFont; // 0x24
		::System::Single updateIntervalSecond; // 0x28
		::System::Action* returnPressed; // 0x30
		::UnityEngine::Events::UnityEvent* onReturnPressed; // 0x38
		::System::Boolean _hasNativeEditCreated; // 0x40
		::UnityEngine::UI::InputField* _inputField; // 0x48
		::UnityEngine::Camera* _uiCamera; // 0x50
		::UnityEngine::UI::Text* _textComponent; // 0x58
		::System::Boolean _focusOnCreate; // 0x60
		::System::Boolean _visibleOnCreate; // 0x61
		::System::Single _timeFromLastUpdate; // 0x64
		::System::Boolean _visible_k__BackingField; // 0x68
		::System::Boolean _keyboardShowing_k__BackingField; // 0x69
		::RPG::Client::MonoNativeEditBox_EditBoxConfig mConfig; // 0x70
		::System::Boolean _isVisibleBeforeApplicationPause; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX__CTOR_OFFSET))(this);
		}

		::System::Void add_returnPressed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_ADD_RETURNPRESSED_OFFSET))(this, a1);
		}

		::System::Void remove_returnPressed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_REMOVE_RETURNPRESSED_OFFSET))(this, a1);
		}

		::UnityEngine::UI::InputField* get_inputField()
		{
			return ((::UnityEngine::UI::InputField*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_GET_INPUTFIELD_OFFSET))(this);
		}

		::System::Boolean get_visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_visible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_SET_VISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_keyboardShowing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_GET_KEYBOARDSHOWING_OFFSET))(this);
		}

		::System::Void set_keyboardShowing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_SET_KEYBOARDSHOWING_OFFSET))(this, a1);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_SET_TEXT_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_INITIALIZE_OFFSET))(this);
		}

		::UnityEngine::Rect GetScreenRectFromRectTransform(::UnityEngine::RectTransform* a1)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_GETSCREENRECTFROMRECTTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void InitializeNativeEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_INITIALIZENATIVEEDIT_OFFSET))(this);
		}

		::System::Single GetNativeFontSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_GETNATIVEFONTSIZE_OFFSET))(this);
		}

		::System::Void PrepareNativeEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_PREPARENATIVEEDIT_OFFSET))(this);
		}

		::System::Void onTextChange(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_ONTEXTCHANGE_OFFSET))(this, a1);
		}

		::System::Void onTextEditEnd(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_ONTEXTEDITEND_OFFSET))(this, a1);
		}

		::System::Void OnPluginMsgDirect(::JsonObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JsonObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_ONPLUGINMSGDIRECT_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* PluginsMessageRoutine(::JsonObject* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::JsonObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_PLUGINSMESSAGEROUTINE_OFFSET))(this, a1);
		}

		::System::Boolean CheckErrorJsonRet(::JsonObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JsonObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_CHECKERRORJSONRET_OFFSET))(this, a1);
		}

		::System::Void CreateNativeEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_CREATENATIVEEDIT_OFFSET))(this);
		}

		::System::Void SetTextNative(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_SETTEXTNATIVE_OFFSET))(this, a1);
		}

		::System::Void RemoveNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_REMOVENATIVE_OFFSET))(this);
		}

		::System::Void SetNativeEditRect(::UnityEngine::UI::InputField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_SETNATIVEEDITRECT_OFFSET))(this, a1);
		}

		::System::Void SetFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_SETFOCUS_OFFSET))(this, a1);
		}

		::System::Void SetVisible(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX_SETVISIBLE_OFFSET))(this, a1, a2);
		}
	};
}
