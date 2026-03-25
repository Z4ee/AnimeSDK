#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class CameraBlendCurve; }

#define CLASS_1_CEF50BC26E0B42E9_VIRTUALCAMERACONFIG_GET_PREFERREDVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x10BABE30)
#define CLASS_1_CEF50BC26E0B42E9_VIRTUALCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10BAC260)

inline static constexpr unsigned int Class_1_CEF50BC26E0B42E9_VirtualCameraConfig_TypeDefinitionIndex = 63925;

class Class_1_CEF50BC26E0B42E9_VirtualCameraConfig : public ::System::Object
{
public:
	::Cinemachine::CinemachineVirtualCamera* VirtualCamera16X9; // 0x10
	::Cinemachine::CinemachineVirtualCamera* VirtualCamera4X3; // 0x18
	::Cinemachine::CinemachineBlendDefinition_Style BlendType; // 0x20
	::RPG::Client::CameraBlendCurve* CustomBlendCurve; // 0x28
	::System::Single BlendTime; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF50BC26E0B42E9_VIRTUALCAMERACONFIG__CTOR_OFFSET))(this);
	}

	::Cinemachine::CinemachineVirtualCamera* get_PreferredVirtualCamera()
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF50BC26E0B42E9_VIRTUALCAMERACONFIG_GET_PREFERREDVIRTUALCAMERA_OFFSET))(this);
	}
};
