#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigNapBloom; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGNAPBLOOMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1170B250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNapBlooms_TypeDefinitionIndex = 42225;

	class ConfigNapBlooms : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single DefaultGlareScaler; // 0x58
		::System::Single DefaultGlareThreshold; // 0x5C
		::System::Single DefaultGlareIntensity; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigNapBloom*>* ScreenEffects; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOMS__CTOR_OFFSET))(this);
		}
	};
}
