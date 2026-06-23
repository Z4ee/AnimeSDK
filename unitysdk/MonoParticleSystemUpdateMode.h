#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUpdateModeBase.h"

namespace UnityEngine { class ParticleSystem; }

#define MONOPARTICLESYSTEMUPDATEMODE_AWAKE_OFFSET UNITYSDK_OFFSET(0x12CA7680)
#define MONOPARTICLESYSTEMUPDATEMODE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12CA7750)
#define MONOPARTICLESYSTEMUPDATEMODE_UPDATEMANUAL_OFFSET UNITYSDK_OFFSET(0x12CA7A60)
#define MONOPARTICLESYSTEMUPDATEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA7BF0)

inline static constexpr unsigned int MonoParticleSystemUpdateMode_TypeDefinitionIndex = 75445;

class MonoParticleSystemUpdateMode : public ::MonoUpdateModeBase
{
public:
	::UnityEngine::ParticleSystem* _particleSystem; // 0x20
	::System::Single _t; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPARTICLESYSTEMUPDATEMODE__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPARTICLESYSTEMUPDATEMODE_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPARTICLESYSTEMUPDATEMODE_ONENABLE_OFFSET))(this);
	}

	::System::Void UpdateManual()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPARTICLESYSTEMUPDATEMODE_UPDATEMANUAL_OFFSET))(this);
	}
};
