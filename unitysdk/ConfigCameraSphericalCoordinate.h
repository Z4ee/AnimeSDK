#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CameraConfig.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace UnityEngine { class AnimationCurve; }

#define CONFIGCAMERASPHERICALCOORDINATE_GETCONFIGBYID_OFFSET UNITYSDK_OFFSET(0x16B18320)
#define CONFIGCAMERASPHERICALCOORDINATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B183C0)

inline static constexpr unsigned int ConfigCameraSphericalCoordinate_TypeDefinitionIndex = 47868;

class ConfigCameraSphericalCoordinate : public ::Foundation::MihoyoSerializedScriptableObject
{
public:
	::Il2CppArray<::CameraConfig>* cameraConfigs; // 0x58
	::UnityEngine::AnimationCurve* radiusCurve; // 0x60
	::UnityEngine::AnimationCurve* heightCurve; // 0x68
	::UnityEngine::AnimationCurve* rotationCurve; // 0x70
	::System::Single totalSwitchDuration; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATE__CTOR_OFFSET))(this);
	}

	::CameraConfig GetConfigByID(::System::Int32 configID)
	{
		return ((::CameraConfig(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATE_GETCONFIGBYID_OFFSET))(this, configID);
	}
};
