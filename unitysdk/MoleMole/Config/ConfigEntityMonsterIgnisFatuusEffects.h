#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityMonsterIgnisFatuusEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA7280)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityMonsterIgnisFatuusEffects_TypeDefinitionIndex = 46778;

	class ConfigEntityMonsterIgnisFatuusEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
