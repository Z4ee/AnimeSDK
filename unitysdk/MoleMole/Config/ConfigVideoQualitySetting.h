#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/VideoQuality.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGVIDEOQUALITYSETTING_ISMATCHED_OFFSET UNITYSDK_OFFSET(0x16B442E0)
#define MOLEMOLE_CONFIG_CONFIGVIDEOQUALITYSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x16B44580)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigVideoQualitySetting_TypeDefinitionIndex = 38163;

	class ConfigVideoQualitySetting : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::VideoQuality>* videoQualityConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIDEOQUALITYSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsMatched(::System::String* videoPath, ::MoleMole::Config::VideoQuality quality)
		{
			return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::VideoQuality))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIDEOQUALITYSETTING_ISMATCHED_OFFSET))(videoPath, quality);
		}
	};
}
