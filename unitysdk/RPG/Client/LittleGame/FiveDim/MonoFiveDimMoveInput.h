#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace InControl { class PlayerAction; }
namespace RPG::Client { class UIMonoJoyStick; }
namespace RPG::Client::LittleGame::FiveDim { class IFiveDimJoyStickBridge; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ADDINPUTHANDLER_OFFSET UNITYSDK_OFFSET(0xBE19C60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBE187F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBE18760)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xBE1A0D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETUPJOYSTICK_1_OFFSET UNITYSDK_OFFSET(0xBE19DB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETUPJOYSTICK_OFFSET UNITYSDK_OFFSET(0xBE19CB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_START_OFFSET UNITYSDK_OFFSET(0xBE184A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0xBE1A1B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__FETCHINPUTANGLE_OFFSET UNITYSDK_OFFSET(0xBE19AF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__GETINCONTROLLEFTSTICKINPUTDIRECTION_OFFSET UNITYSDK_OFFSET(0xBE19430)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__HASPCINPUT_OFFSET UNITYSDK_OFFSET(0xBE19330)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0xBE19C10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKDRAG_OFFSET UNITYSDK_OFFSET(0xBE19A50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xBE19910)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKPOINTERUP_OFFSET UNITYSDK_OFFSET(0xBE199B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xBE18610)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0xBE188E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEINPUTBYANGLE_OFFSET UNITYSDK_OFFSET(0xBE197E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEINPUTBYDIRECTION_OFFSET UNITYSDK_OFFSET(0xBE192C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xBE18BA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEPCINPUT_OFFSET UNITYSDK_OFFSET(0xBE18DD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATESHOULDREVERSEINPUTDEADZONE_OFFSET UNITYSDK_OFFSET(0xBE18F60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__USEJOYSTICK_OFFSET UNITYSDK_OFFSET(0xBE18B40)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoFiveDimMoveInput_TypeDefinitionIndex = 71763;

	class MonoFiveDimMoveInput : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MoveInputHorizontalAngle; // 0x18
		::System::Single MoveInputDeadZone; // 0x1C
		::System::Action_1<::UnityEngine::Vector2>* _InputHandler; // 0x20
		::RPG::Client::LittleGame::FiveDim::IFiveDimJoyStickBridge* _JoyStick; // 0x28
		::System::Boolean _HasJoyStickInput; // 0x30
		::InControl::PlayerAction* _MoveUpAction; // 0x38
		::InControl::PlayerAction* _MoveDownAction; // 0x40
		::InControl::PlayerAction* _MoveLeftAction; // 0x48
		::InControl::PlayerAction* _MoveRightAction; // 0x50
		::System::Boolean _NeedResetInputDeadZone; // 0x58
		::System::Boolean _LastShouldReverseInputDeadZoneCache; // 0x59
		::System::Boolean _ShouldReverseInputDeadZone; // 0x5A
		::System::Single _UpdateReverseTime; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _UpdateShouldReverseInputDeadZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATESHOULDREVERSEINPUTDEADZONE_OFFSET))(this);
		}

		::System::Void _UpdatePCInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEPCINPUT_OFFSET))(this);
		}

		::System::Boolean _HasPCInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__HASPCINPUT_OFFSET))(this);
		}

		::System::Void _UpdateGamePadInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEGAMEPADINPUT_OFFSET))(this);
		}

		::System::Void _UpdateJoyStickInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEJOYSTICKINPUT_OFFSET))(this);
		}

		::System::Boolean _UseJoyStick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__USEJOYSTICK_OFFSET))(this);
		}

		::UnityEngine::Vector2 _GetIncontrolLeftStickInputDirection()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__GETINCONTROLLEFTSTICKINPUTDIRECTION_OFFSET))(this);
		}

		::System::Void _OnJoyStickPointerDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKPOINTERDOWN_OFFSET))(this);
		}

		::System::Void _OnJoyStickPointerUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKPOINTERUP_OFFSET))(this);
		}

		::System::Void _OnJoyStickDrag(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKDRAG_OFFSET))(this, a1);
		}

		::System::Void _FetchInputAngle(::System::Single& a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__FETCHINPUTANGLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _UpdateInputByDirection(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEINPUTBYDIRECTION_OFFSET))(this, a1);
		}

		::System::Void _UpdateInputByAngle(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEINPUTBYANGLE_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _OnInputDeviceClassSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, a1);
		}

		::System::Void AddInputHandler(::System::Action_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ADDINPUTHANDLER_OFFSET))(this, a1);
		}

		::System::Void SetupJoyStick(::RPG::Client::UIMonoJoyStick* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETUPJOYSTICK_OFFSET))(this, a1);
		}

		::System::Void SetupJoyStick_1(::RPG::Client::LittleGame::FiveDim::IFiveDimJoyStickBridge* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::IFiveDimJoyStickBridge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETUPJOYSTICK_1_OFFSET))(this, a1);
		}

		::System::Void OnScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ONSCREENSIZECHANGED_OFFSET))(this);
		}
	};
}
