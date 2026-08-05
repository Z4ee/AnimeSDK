#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/MoleMole/EMaterialModifierPerformanceLevel.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EDamageDecalQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLightLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLodLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleResolutionLevel.h"

namespace MoleMole { class ParticleQualityProfileContext; }

#define MOLEMOLE_COMMANDLINEPARTICLEQUALITY_METHOD_2_811EE164562C9434_OFFSET UNITYSDK_OFFSET(0x16247170)
#define MOLEMOLE_COMMANDLINEPARTICLEQUALITY_METHOD_2_927E546B2D95E0F1_OFFSET UNITYSDK_OFFSET(0x16246FE0)
#define MOLEMOLE_COMMANDLINEPARTICLEQUALITY__CTOR_OFFSET UNITYSDK_OFFSET(0x16247130)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineParticleQuality_TypeDefinitionIndex = 46856;

	class CommandLineParticleQuality : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::ParticleQualityProfileContext*, ::MoleMole::CommandLineParticleQuality*>
	{
	public:
		::System::Nullable_1<::UnityEngine::Rendering::Universal::GraphicSettings_EParticleResolutionLevel> ParticleResolutionLevel; // 0x18
		::System::Nullable_1<::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel> ParticleLodLevel; // 0x20
		::System::Nullable_1<::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLightLevel> ParticleLightLevel; // 0x28
		::System::Nullable_1<::MoleMole::EMaterialModifierPerformanceLevel> MaterialModifierPerformanceLevel; // 0x30
		::System::Nullable_1<::System::Boolean> DisableGhostEffect; // 0x38
		::System::Nullable_1<::System::Boolean> DisableCutMarks; // 0x3A
		::System::Nullable_1<::UnityEngine::Rendering::Universal::GraphicSettings_EDamageDecalQuality> DamageDecalQuality; // 0x3C
		::System::Nullable_1<::System::Boolean> DisableDropItemBornIdleEffect; // 0x44
		::System::Nullable_1<::System::Boolean> DisableAbilityActionEffect; // 0x46

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEPARTICLEQUALITY__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineParticleQuality* Method_2_927E546B2D95E0F1(::MoleMole::ParticleQualityProfileContext* a1)
		{
			return ((::MoleMole::CommandLineParticleQuality*(*)(::PVOID, ::MoleMole::ParticleQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEPARTICLEQUALITY_METHOD_2_927E546B2D95E0F1_OFFSET))(this, a1);
		}

		::MoleMole::ParticleQualityProfileContext* Method_2_811EE164562C9434(::MoleMole::ParticleQualityProfileContext* a1)
		{
			return ((::MoleMole::ParticleQualityProfileContext*(*)(::PVOID, ::MoleMole::ParticleQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEPARTICLEQUALITY_METHOD_2_811EE164562C9434_OFFSET))(this, a1);
		}
	};
}
