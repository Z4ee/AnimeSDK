#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityLightingEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD3670)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityLightingEffects_TypeDefinitionIndex = 77025;

	class ConfigEntityLightingEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIGHTINGEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
