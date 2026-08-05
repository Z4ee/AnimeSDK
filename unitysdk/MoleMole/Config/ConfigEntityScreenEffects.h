#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityScreenEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x114700F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityScreenEffects_TypeDefinitionIndex = 62154;

	class ConfigEntityScreenEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single DefaultBoundary; // 0x58
		::System::Single DefaultMaxOpacity; // 0x5C
		::System::Single DefaultDissolveProgress; // 0x60
		::System::Single DefaultDissolveDistortionIntensity; // 0x64
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>* ScreenEffects; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
