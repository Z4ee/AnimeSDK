#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0xF13A860)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityScreenSpaceReflectionEffects_TypeDefinitionIndex = 40776;

	class ConfigEntityScreenSpaceReflectionEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
