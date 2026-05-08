#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityChannelMixerEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0xF97C440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityChannelMixerEffects_TypeDefinitionIndex = 68282;

	class ConfigEntityChannelMixerEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECTS__CTOR_OFFSET))(this);
		}
	};
}
