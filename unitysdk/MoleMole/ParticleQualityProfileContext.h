#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EMaterialModifierPerformanceLevel.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EDamageDecalQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLightLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLodLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleResolutionLevel.h"

#define MOLEMOLE_PARTICLEQUALITYPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x129D76D0)

namespace MoleMole
{
	inline static constexpr unsigned int ParticleQualityProfileContext_TypeDefinitionIndex = 58913;

	class ParticleQualityProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::UnityEngine::Rendering::Universal::GraphicSettings_EParticleResolutionLevel ParticleResolutionLevel; // 0x18
		::MoleMole::EMaterialModifierPerformanceLevel MaterialModifierPerformanceLevel; // 0x1C
		::UnityEngine::Rendering::Universal::GraphicSettings_EDamageDecalQuality DamageDecalQuality; // 0x20
		::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLightLevel ParticleLightLevel; // 0x24
		::System::Boolean DisableCutMarks; // 0x28
		::System::Boolean DisableGhostEffect; // 0x29
		::System::Boolean DisableDropItemBornIdleEffect; // 0x2A
		::System::Boolean DisableAbilityActionEffect; // 0x2B
		::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel ParticleLodLevel; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTICLEQUALITYPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
