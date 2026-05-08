#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityTonemappingEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8C380)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityTonemappingEffects_TypeDefinitionIndex = 52052;

	class ConfigEntityTonemappingEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
