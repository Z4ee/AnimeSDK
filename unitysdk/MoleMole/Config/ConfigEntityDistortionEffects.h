#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityDistortionEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x17D22E10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityDistortionEffects_TypeDefinitionIndex = 59767;

	class ConfigEntityDistortionEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single DefaultIntensity; // 0x58
		::System::Single DefaultSeparateRGBIntensity; // 0x5C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>* Effects; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
