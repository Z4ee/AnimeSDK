#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityShadowsMidtonesHighlightsEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x141F0600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityShadowsMidtonesHighlightsEffects_TypeDefinitionIndex = 42252;

	class ConfigEntityShadowsMidtonesHighlightsEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
