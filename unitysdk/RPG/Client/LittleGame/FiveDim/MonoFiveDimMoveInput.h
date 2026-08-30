#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMoveInputData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace InControl { class PlayerAction; }
namespace RPG::Client { class UIMonoJoyStick; }
namespace RPG::Client::LittleGame::FiveDim { class IFiveDimJoyStickBridge; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ADDINPUTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B1B9F60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_CLEARJOYSTICK_OFFSET UNITYSDK_OFFSET(0x1B1B8770)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B1B88B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B1B86E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x1B1BA520)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETRAWINPUTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B1B9FB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETUPJOYSTICK_1_OFFSET UNITYSDK_OFFSET(0x1B1BA100)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETUPJOYSTICK_OFFSET UNITYSDK_OFFSET(0x1B1BA000)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_START_OFFSET UNITYSDK_OFFSET(0x1B1B83C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1BA650)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__FETCHINPUTANGLE_OFFSET UNITYSDK_OFFSET(0x1B1B9DF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__GETINCONTROLLEFTSTICKINPUTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B1B9720)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__HASPCINPUT_OFFSET UNITYSDK_OFFSET(0x1B1B9620)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0x1B1B9F10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKDRAG_OFFSET UNITYSDK_OFFSET(0x1B1B9D50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1B1B9C10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONJOYSTICKPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1B1B9CB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1B1B8530)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0x1B1B89A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEINPUTBYANGLE_OFFSET UNITYSDK_OFFSET(0x1B1B9AD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEINPUTBYDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B1B95A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x1B1B8CB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEPCINPUT_OFFSET UNITYSDK_OFFSET(0x1B1B90C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATERAWINPUT_OFFSET UNITYSDK_OFFSET(0x1B1B9530)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATESHOULDREVERSEINPUTDEADZONE_OFFSET UNITYSDK_OFFSET(0x1B1B92B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__USEJOYSTICK_OFFSET UNITYSDK_OFFSET(0x1B1B8C50)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoFiveDimMoveInput_TypeDefinitionIndex = 76767;

	class MonoFiveDimMoveInput : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MoveInputHorizontalAngle; // 0x18
		::System::Single MoveInputDeadZone; // 0x1C
		::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimMoveInputData>* _InputHandler; // 0x20
		::System::Action_1<::UnityEngine::Vector2>* _RawInputHandler; // 0x28
		::RPG::Client::LittleGame::FiveDim::IFiveDimJoyStickBridge* _JoyStick; // 0x30
		::System::Boolean _HasJoyStickInput; // 0x38
		::InControl::PlayerAction* _MoveUpAction; // 0x40
		::InControl::PlayerAction* _MoveDownAction; // 0x48
		::InControl::PlayerAction* _MoveLeftAction; // 0x50
		::InControl::PlayerAction* _MoveRightAction; // 0x58
		::System::Boolean _NeedResetInputDeadZone; // 0x60
		::System::Boolean _LastShouldReverseInputDeadZoneCache; // 0x61
		::System::Boolean _ShouldReverseInputDeadZone; // 0x62
		::System::Single _UpdateReverseTime; // 0x64

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

		::System::Void _UpdateRawInput(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATERAWINPUT_OFFSET))(this, a1);
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

		::System::Void _UpdateInputByDirection(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEINPUTBYDIRECTION_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateInputByAngle(::System::Boolean a1, ::System::Single a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__UPDATEINPUTBYANGLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _OnInputDeviceClassSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT__ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, a1);
		}

		::System::Void AddInputHandler(::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimMoveInputData>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimMoveInputData>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ADDINPUTHANDLER_OFFSET))(this, a1);
		}

		::System::Void SetRawInputHandler(::System::Action_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETRAWINPUTHANDLER_OFFSET))(this, a1);
		}

		::System::Void SetupJoyStick(::RPG::Client::UIMonoJoyStick* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETUPJOYSTICK_OFFSET))(this, a1);
		}

		::System::Void SetupJoyStick_1(::RPG::Client::LittleGame::FiveDim::IFiveDimJoyStickBridge* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::IFiveDimJoyStickBridge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_SETUPJOYSTICK_1_OFFSET))(this, a1);
		}

		::System::Void ClearJoyStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_CLEARJOYSTICK_OFFSET))(this);
		}

		::System::Void OnScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMMOVEINPUT_ONSCREENSIZECHANGED_OFFSET))(this);
		}
	};
}
