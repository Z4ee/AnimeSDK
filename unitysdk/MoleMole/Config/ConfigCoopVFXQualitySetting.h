#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"

namespace MoleMole::Config { class CoopVFXQualityConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCOOPVFXQUALITYSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A341530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCoopVFXQualitySetting_TypeDefinitionIndex = 72665;

	class ConfigCoopVFXQualitySetting : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::MoleMole::Config::CoopVFXQualityConfig*>* CoopVFXQualityConfigDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOOPVFXQUALITYSETTING__CTOR_OFFSET))(this);
		}
	};
}
