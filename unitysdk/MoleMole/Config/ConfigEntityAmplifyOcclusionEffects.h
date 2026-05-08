#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityAmplifyOcclusionEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x16A87F00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAmplifyOcclusionEffects_TypeDefinitionIndex = 66810;

	class ConfigEntityAmplifyOcclusionEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
