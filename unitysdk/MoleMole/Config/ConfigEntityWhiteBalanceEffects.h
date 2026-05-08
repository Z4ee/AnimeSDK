#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYWHITEBALANCEEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x186B9DF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityWhiteBalanceEffects_TypeDefinitionIndex = 38664;

	class ConfigEntityWhiteBalanceEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYWHITEBALANCEEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
