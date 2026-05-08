#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCamera.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System { class String; }

#define MOLEMOLE_CAMERAS_NAPTIMELINEVIRTUALCAMERA_SYNCCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x159CBB50)
#define MOLEMOLE_CAMERAS_NAPTIMELINEVIRTUALCAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x159CBDE0)
#define MOLEMOLE_CAMERAS_NAPTIMELINEVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x159CBDD0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapTimelineVirtualCamera_TypeDefinitionIndex = 75977;

	class NapTimelineVirtualCamera : public ::Cinemachine::CinemachineVirtualCamera
	{
	public:
		static ::System::String** StaticGet_VIRTUAL_CAMERA_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapTimelineVirtualCamera_TypeDefinitionIndex)->GetStaticField(0x3F830);
		}
		::System::Boolean CameraApplyOnTransitionYRatio; // 0x1C8
		::System::Single CameraOnTransitionYRatioValue; // 0x1CC
		::System::Single CameraOnTransitionPolarAngle; // 0x1D0
		::System::Boolean AutoCalRecoverPolarAngle; // 0x1D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPTIMELINEVIRTUALCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPTIMELINEVIRTUALCAMERA__CCTOR_OFFSET))();
		}

		::System::Void SyncCameraState(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPTIMELINEVIRTUALCAMERA_SYNCCAMERASTATE_OFFSET))(this, a1);
		}
	};
}
