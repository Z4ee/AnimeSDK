#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_DISABLECAMERA_OFFSET UNITYSDK_OFFSET(0xDBD63E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBD6640)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_ENABLECAMERA_OFFSET UNITYSDK_OFFSET(0xDBD5330)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xDBDF880)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xDBD51F0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_690254C4B3C33267_OFFSET UNITYSDK_OFFSET(0xDBDFBA0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_953DD38710057F4B_OFFSET UNITYSDK_OFFSET(0xDBDF800)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_9D967D80C41C7781_OFFSET UNITYSDK_OFFSET(0xDBDFD70)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_E1B1897755057184_OFFSET UNITYSDK_OFFSET(0xDBDFC30)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_METHOD_5_E9A8695D8BBAA196_OFFSET UNITYSDK_OFFSET(0xDBDFD10)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDBDF7B0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0xDBD7670)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDBDF760)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDBDFDC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionPuzzleCameraController_TypeDefinitionIndex = 77740;

	class BlockProjectionPuzzleCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineFreeLook* BEECOOKICFL; // 0x18
		::UnityEngine::Vector2 OENPLHBICCD; // 0x20
		::System::Single DOAMHLGEPEO; // 0x28
		::System::Single HEHAPCCGMIC; // 0x2C
		::System::Single MGMHDHJNJKP; // 0x30
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
