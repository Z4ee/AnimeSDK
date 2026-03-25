#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CameraShakeTask;
namespace UnityEngine { class AnimationCurve; }

#define DEBUGCAMERASHAKE_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCB4D820)
#define DEBUGCAMERASHAKE_METHOD_5_DA9EBD5F5A0C0204_OFFSET UNITYSDK_OFFSET(0xCB4D580)
#define DEBUGCAMERASHAKE_START_OFFSET UNITYSDK_OFFSET(0xCB4D260)
#define DEBUGCAMERASHAKE_UPDATE_OFFSET UNITYSDK_OFFSET(0xCB4D400)
#define DEBUGCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0xCB4D8A0)

inline static constexpr unsigned int DebugCameraShake_TypeDefinitionIndex = 38152;

class DebugCameraShake : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean IsShake; // 0x18
	::System::Boolean ApplyPerlinNoise; // 0x19
	::CameraShakeTask* PosShakeTask; // 0x20
	::CameraShakeTask* RotShakeTask; // 0x28
	::UnityEngine::AnimationCurve* AmplitudeAttenuationCurve; // 0x30
	::System::Single Field_5_5; // 0x38
	::UnityEngine::Vector3 Field_5_6; // 0x3C
	::UnityEngine::Vector3 Field_5_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGCAMERASHAKE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGCAMERASHAKE_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGCAMERASHAKE_UPDATE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_5_DA9EBD5F5A0C0204(::CameraShakeTask* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::CameraShakeTask*))((::PBYTE)hIl2Cpp + DEBUGCAMERASHAKE_METHOD_5_DA9EBD5F5A0C0204_OFFSET))(this, a1);
	}

	::System::Void Method_5_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGCAMERASHAKE_METHOD_5_4343F372F34C05BF_OFFSET))(this);
	}
};
