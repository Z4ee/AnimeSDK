#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityFXFogEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x186B91F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFXFogEffects_TypeDefinitionIndex = 44912;

	class ConfigEntityFXFogEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Boolean DefaultFxFogOverrideCustomData; // 0x58
		::System::Boolean DefaultFxFog; // 0x59
		::UnityEngine::Color DefaultFxFogStartColor; // 0x5C
		::UnityEngine::Color DefaultFxFogEndColor; // 0x6C
		::UnityEngine::Color DefaultFxFogFinalColor; // 0x7C
		::System::Single DefaultFxFogIntensityForSky; // 0x8C
		::System::Single DefaultFxVolumetricFogIntensity; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>* Effects; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
