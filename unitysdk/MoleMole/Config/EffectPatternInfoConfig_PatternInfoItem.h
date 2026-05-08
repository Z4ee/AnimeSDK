#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EffectPatternInfoConfig_EffectType.h"
#include "unitysdk/MoleMole/Config/EffectPatternInfoConfig_ParticleSystemFreqMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLodLevel.h"

namespace MoleMole::Config::EffectPattern { class MonoEffectPluginFollowSoData_New; }

#define MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG_PATTERNINFOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x183D0900)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectPatternInfoConfig_PatternInfoItem_TypeDefinitionIndex = 77214;

	class EffectPatternInfoConfig_PatternInfoItem : public ::System::Object
	{
	public:
		::Foundation::AssetPath assetPath; // 0x10
		::System::Int32 lifetime; // 0x20
		::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel cullingPriority; // 0x24
		::System::Boolean supportLightWeightActive; // 0x28
		::System::Boolean forceNESLightWeightActive; // 0x29
		::System::Boolean open2p5FxOpt; // 0x2A
		::System::Byte fullGoLOD; // 0x2B
		::MoleMole::Config::EffectPatternInfoConfig_EffectType effectType; // 0x2C
		::MoleMole::Config::EffectPatternInfoConfig_ParticleSystemFreqMode particleSystemFreqMode; // 0x30
		::MoleMole::Config::EffectPattern::MonoEffectPluginFollowSoData_New* effectFollowData; // 0x38
		::System::Boolean CanCarryIntoBlackCurtain; // 0x40
		::System::Boolean ForbidSuspendByBlackCurtain; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG_PATTERNINFOITEM__CTOR_OFFSET))(this);
		}
	};
}
