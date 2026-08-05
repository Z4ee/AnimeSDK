#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOTIMELINECAMERAEXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x112F1EF0)

inline static constexpr unsigned int MonoTimelineCameraExtraInfo_TypeDefinitionIndex = 66905;

class MonoTimelineCameraExtraInfo : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean CameraApplyOnTransitionYRatio; // 0x18
	::System::Single CameraOnTransitionYRatioValue; // 0x1C
	::System::Single CameraOnTransitionPolarAngle; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOTIMELINECAMERAEXTRAINFO__CTOR_OFFSET))(this);
	}
};
