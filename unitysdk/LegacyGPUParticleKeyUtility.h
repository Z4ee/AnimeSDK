#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LegacyGPUParticleSystem;

#define LEGACYGPUPARTICLEKEYUTILITY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E538D20)
#define LEGACYGPUPARTICLEKEYUTILITY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E538A00)
#define LEGACYGPUPARTICLEKEYUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5390C0)

inline static constexpr unsigned int LegacyGPUParticleKeyUtility_TypeDefinitionIndex = 42301;

class LegacyGPUParticleKeyUtility : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean updateValues; // 0x18
	::System::Single startLifetime; // 0x1C
	::System::Single startSpeed; // 0x20
	::UnityEngine::Vector3 startSize; // 0x24
	::System::Single startRotation; // 0x30
	::System::Single emissionRate; // 0x34
	::System::Single emissionMultiply; // 0x38
	::System::Int32 posUVRandom; // 0x3C
	::System::Int32 posUVReverse; // 0x40
	::System::Single colorIntensityLifetime; // 0x44
	::System::Single maxVelocityLifetime; // 0x48
	::System::Single airResistance; // 0x4C
	::UnityEngine::Vector3 forceLifetime; // 0x50
	::UnityEngine::Vector3 circularForce; // 0x5C
	::UnityEngine::Vector3 turbulenceAmplitude; // 0x68
	::UnityEngine::Vector3 turbulenceFrequency; // 0x74
	::UnityEngine::Vector3 turbulenceOffset; // 0x80
	::System::Int32 materialZWrite; // 0x8C
	::System::Int32 materialRenderQueue; // 0x90
	::UnityEngine::Color mainColor; // 0x94
	::LegacyGPUParticleSystem* AJBNMGPFOHM; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLEKEYUTILITY__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLEKEYUTILITY_ONENABLE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLEKEYUTILITY_LATEUPDATE_OFFSET))(this);
	}
};
