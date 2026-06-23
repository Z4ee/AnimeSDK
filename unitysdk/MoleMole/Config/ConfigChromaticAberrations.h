#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigChromaticAberration; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18F30260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChromaticAberrations_TypeDefinitionIndex = 59327;

	class ConfigChromaticAberrations : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single DefaultIntensity; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>* ScreenEffects; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATIONS__CTOR_OFFSET))(this);
		}
	};
}
