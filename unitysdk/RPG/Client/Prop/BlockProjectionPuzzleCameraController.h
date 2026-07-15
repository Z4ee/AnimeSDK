#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_DISABLECAMERA_OFFSET UNITYSDK_OFFSET(0x16DEC370)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DEBAA0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_ENABLECAMERA_OFFSET UNITYSDK_OFFSET(0x16DEBF00)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0x16DEBB50)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x16DEB8E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_690254C4B3C33267_OFFSET UNITYSDK_OFFSET(0x16DEBE70)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_953DD38710057F4B_OFFSET UNITYSDK_OFFSET(0x16DEBA20)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_9D967D80C41C7781_OFFSET UNITYSDK_OFFSET(0x16DEC630)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_E1B1897755057184_OFFSET UNITYSDK_OFFSET(0x16DEC290)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_E9A8695D8BBAA196_OFFSET UNITYSDK_OFFSET(0x16DEC5D0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16DEB890)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0x16DE52F0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16DEB840)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16DEC680)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionPuzzleCameraController_TypeDefinitionIndex = 74254;

	class BlockProjectionPuzzleCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineFreeLook* Field_5_0; // 0x18
		::UnityEngine::Vector2 Field_5_1; // 0x20
		::System::Single Field_5_2; // 0x28
		::System::Single Field_5_3; // 0x2C
		::System::Single Field_5_4; // 0x30
		::System::Single DeltaXFilterRatio; // 0x34
		::System::Single DeltaYFilterRatio; // 0x38
		::System::Single RightStickCameraRotationRatio; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Single GetAxisValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_GETAXISVALUE_OFFSET))(this, a1);
		}

		::System::Void EnableCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_ENABLECAMERA_OFFSET))(this);
		}

		::System::Void ResetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_RESETCAMERA_OFFSET))(this);
		}

		::System::Void DisableCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_DISABLECAMERA_OFFSET))(this);
		}

		::System::Void Method_5_E1B1897755057184(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_E1B1897755057184_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_953DD38710057F4B(::Cinemachine::AxisState_IInputAxisProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::AxisState_IInputAxisProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_953DD38710057F4B_OFFSET))(this, a1);
		}

		::System::Void Method_5_690254C4B3C33267(::System::Single& a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_690254C4B3C33267_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_E9A8695D8BBAA196(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_E9A8695D8BBAA196_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D967D80C41C7781(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_9D967D80C41C7781_OFFSET))(this, a1);
		}
	};
}
