#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityOldCRTEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x14373610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityOldCRTEffects_TypeDefinitionIndex = 51331;

	class ConfigEntityOldCRTEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityOldCRTEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
