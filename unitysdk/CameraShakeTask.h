#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CAMERASHAKETASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A863CC0)

inline static constexpr unsigned int CameraShakeTask_TypeDefinitionIndex = 47703;

class CameraShakeTask : public ::System::Object
{
public:
	::UnityEngine::Vector3 Amplitude; // 0x10
	::UnityEngine::Vector3 Frequence; // 0x1C
	::UnityEngine::Vector3 PerlinFrequence; // 0x28
	::UnityEngine::Vector3 PerlinAmplitude; // 0x34
	::System::Single ShakeTime; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKETASK__CTOR_OFFSET))(this);
	}
};
