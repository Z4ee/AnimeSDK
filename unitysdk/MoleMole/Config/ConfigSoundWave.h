#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigSoundWaveKey; }
namespace System { class String; }
namespace UnityEngine::Rendering { template <typename T1, typename T2> class SerializedDictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDWAVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17D626B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D628E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundWave_TypeDefinitionIndex = 87039;

	class ConfigSoundWave : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::UnityEngine::Rendering::SerializedDictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigSoundWaveKey*>*>* waves; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDWAVE__CTOR_OFFSET))(this);
		}

		::System::Single Evaluate(::System::String* voiceKey, ::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDWAVE_EVALUATE_OFFSET))(this, voiceKey, time);
		}
	};
}
