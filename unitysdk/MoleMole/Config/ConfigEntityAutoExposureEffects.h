#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityAutoExposureEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x159E9E80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAutoExposureEffects_TypeDefinitionIndex = 56800;

	class ConfigEntityAutoExposureEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
