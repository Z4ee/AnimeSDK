#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace RPG::Client::Prop { class RubikCubePuzzleControlBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_DISABLECAMERA_OFFSET UNITYSDK_OFFSET(0xC610140)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_ENABLECAMERA_OFFSET UNITYSDK_OFFSET(0xC60FDF0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xC60FC60)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_GETLOOKATVECTOR_OFFSET UNITYSDK_OFFSET(0xC60FAF0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_GETXAXISVALUE_OFFSET UNITYSDK_OFFSET(0xC60FA20)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_GET_AXISXVALUE_OFFSET UNITYSDK_OFFSET(0xC60FCC0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xC60F270)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_LOCKCAMERACONTROL_OFFSET UNITYSDK_OFFSET(0xC6102F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_METHOD_5_953DD38710057F4B_OFFSET UNITYSDK_OFFSET(0xC60F990)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC60F220)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0xC60FD90)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_SETXAXISVALUE_OFFSET UNITYSDK_OFFSET(0xC60FA80)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_SET_AXISXVALUE_OFFSET UNITYSDK_OFFSET(0xC60FD20)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER_UNLOCKCAMERACONTROL_OFFSET UNITYSDK_OFFSET(0xC6103B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC610480)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleCameraController_TypeDefinitionIndex = 73341;

	class RubikCubePuzzleCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Field_5_0; // 0x18
		::System::Boolean StartRotate; // 0x1C
		::System::Single AxisXInput; // 0x20
		::Cinemachine::AxisState_IInputAxisProvider* Field_5_3; // 0x28
		::Cinemachine::CinemachineFreeLook* Field_5_4; // 0x30
		::RPG::GameCore::GameEntity* Field_5_5; // 0x38

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
