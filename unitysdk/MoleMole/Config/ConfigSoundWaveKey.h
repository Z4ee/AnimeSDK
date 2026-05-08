#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define MOLEMOLE_CONFIG_CONFIGSOUNDWAVEKEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181D5790)
#define MOLEMOLE_CONFIG_CONFIGSOUNDWAVEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x181D5780)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundWaveKey_TypeDefinitionIndex = 42149;

	class ConfigSoundWaveKey : public ::System::Object
	{
	public:
		::System::Single time; // 0x10
		::System::Single value; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDWAVEKEY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Keyframe keyframe)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDWAVEKEY__CTOR_1_OFFSET))(this, keyframe);
		}
	};
}
