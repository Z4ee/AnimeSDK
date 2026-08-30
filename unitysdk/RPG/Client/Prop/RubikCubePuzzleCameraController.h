#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace RPG::Client::Prop { class RubikCubePuzzleControlBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_DISABLECAMERA_OFFSET UNITYSDK_OFFSET(0xDD19670)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_ENABLECAMERA_OFFSET UNITYSDK_OFFSET(0xDD19320)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xDD19190)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_GETLOOKATVECTOR_OFFSET UNITYSDK_OFFSET(0xDD19020)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_GETXAXISVALUE_OFFSET UNITYSDK_OFFSET(0xDD18F50)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_GET_AXISXVALUE_OFFSET UNITYSDK_OFFSET(0xDD191F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xDD187A0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_LOCKCAMERACONTROL_OFFSET UNITYSDK_OFFSET(0xDD19820)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_METHOD_5_953DD38710057F4B_OFFSET UNITYSDK_OFFSET(0xDD18EC0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDD18750)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0xDD192C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_SETXAXISVALUE_OFFSET UNITYSDK_OFFSET(0xDD18FB0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_SET_AXISXVALUE_OFFSET UNITYSDK_OFFSET(0xDD19250)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_UNLOCKCAMERACONTROL_OFFSET UNITYSDK_OFFSET(0xDD198E0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDD199B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleCameraController_TypeDefinitionIndex = 78352;

	class RubikCubePuzzleCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DCHHGLCIIHB; // 0x18
		::System::Boolean StartRotate; // 0x1C
		::System::Single AxisXInput; // 0x20
		::Cinemachine::AxisState_IInputAxisProvider* OIPKCMLACIA; // 0x28
		::Cinemachine::CinemachineFreeLook* BEECOOKICFL; // 0x30
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::RubikCubePuzzleControlBoard* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RubikCubePuzzleControlBoard*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetXAxisValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_GETXAXISVALUE_OFFSET))(this);
		}

		::System::Void SetXAxisValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_SETXAXISVALUE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetLookAtVector()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_GETLOOKATVECTOR_OFFSET))(this);
		}

		::System::Single GetAxisValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_GETAXISVALUE_OFFSET))(this, a1);
		}

		::System::Single get_AxisXValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_GET_AXISXVALUE_OFFSET))(this);
		}

		::System::Void set_AxisXValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_SET_AXISXVALUE_OFFSET))(this, a1);
		}

		::System::Void ResetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_RESETCAMERA_OFFSET))(this);
		}

		::System::Void EnableCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_ENABLECAMERA_OFFSET))(this);
		}

		::System::Void DisableCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_DISABLECAMERA_OFFSET))(this);
		}

		::System::Void LockCameraControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_LOCKCAMERACONTROL_OFFSET))(this);
		}

		::System::Void UnLockCameraControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_UNLOCKCAMERACONTROL_OFFSET))(this);
		}

		::System::Void Method_5_953DD38710057F4B(::Cinemachine::AxisState_IInputAxisProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::AxisState_IInputAxisProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_METHOD_5_953DD38710057F4B_OFFSET))(this, a1);
		}
	};
}
