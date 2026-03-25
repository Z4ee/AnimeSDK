#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace InControl { class PlayerAction; }
namespace RPG::Client { class UIMonoJoyStick; }
namespace RPG::Client::LittleGame::FiveDim { class IFiveDimJoyStickBridge; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ADDINPUTHANDLER_OFFSET UNITYSDK_OFFSET(0x9A1DDC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9A1C930)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9A1C8B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x9A1E1E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETUPJOYSTICK_1_OFFSET UNITYSDK_OFFSET(0x9A1DF10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETUPJOYSTICK_OFFSET UNITYSDK_OFFSET(0x9A1DE10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_START_OFFSET UNITYSDK_OFFSET(0x9A1C4F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x9A1E2C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__FETCHINPUTANGLE_OFFSET UNITYSDK_OFFSET(0x9A1DC50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__GETINCONTROLLEFTSTICKINPUTDIRECTION_OFFSET UNITYSDK_OFFSET(0x9A1D580)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__HASPCINPUT_OFFSET UNITYSDK_OFFSET(0x9A1D480)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0x9A1DD70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKDRAG_OFFSET UNITYSDK_OFFSET(0x9A1DBB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9A1DA70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9A1DB10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x9A1C770)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0x9A1CA20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEINPUTBYANGLE_OFFSET UNITYSDK_OFFSET(0x9A1D940)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEINPUTBYDIRECTION_OFFSET UNITYSDK_OFFSET(0x9A1D420)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x9A1CCE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEPCINPUT_OFFSET UNITYSDK_OFFSET(0x9A1CF10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATESHOULDREVERSEINPUTDEADZONE_OFFSET UNITYSDK_OFFSET(0x9A1D090)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__USEJOYSTICK_OFFSET UNITYSDK_OFFSET(0x9A1CC80)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoFiveDimMoveInput_TypeDefinitionIndex = 62901;

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

		::System::Void _OnJoyStickDrag(::UnityEngine::Vector2 dragVec)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKDRAG_OFFSET))(this, dragVec);
		}

		::System::Void _FetchInputAngle(::System::Single& upAngleBegin, ::System::Single& leftAngleBegin, ::System::Single& downAngleBegin, ::System::Single& rightAngleBegin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__FETCHINPUTANGLE_OFFSET))(this, upAngleBegin, leftAngleBegin, downAngleBegin, rightAngleBegin);
		}

		::System::Void _UpdateInputByDirection(::UnityEngine::Vector2 direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEINPUTBYDIRECTION_OFFSET))(this, direction);
		}

		::System::Void _UpdateInputByAngle(::System::Boolean hasInput, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEINPUTBYANGLE_OFFSET))(this, hasInput, angle);
		}

		::System::Void _RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _OnInputDeviceClassSwitched(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, param);
		}

		::System::Void AddInputHandler(::System::Action_1<::UnityEngine::Vector2>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ADDINPUTHANDLER_OFFSET))(this, callback);
		}

		::System::Void SetupJoyStick(::RPG::Client::UIMonoJoyStick* joyStick)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETUPJOYSTICK_OFFSET))(this, joyStick);
		}

		::System::Void SetupJoyStick_1(::RPG::Client::LittleGame::FiveDim::IFiveDimJoyStickBridge* joyStick)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::IFiveDimJoyStickBridge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETUPJOYSTICK_1_OFFSET))(this, joyStick);
		}

		::System::Void OnScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ONSCREENSIZECHANGED_OFFSET))(this);
		}
	};
}
