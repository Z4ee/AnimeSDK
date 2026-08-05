#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigPageCameraBase; }
namespace MoleMole::Config { class ConfigUICameraStretch; }
namespace MoleMole::Config { class UICameraSettingData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUICAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC9FF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUICamera_TypeDefinitionIndex = 65978;

	class ConfigUICamera : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigPageCameraBase*>* ConfigPageDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUICameraStretch*>* ConfigCameraStretchDictionary; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UICameraSettingData*>* uiPlatformCameraTransInfo; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUICAMERA__CTOR_OFFSET))(this);
		}
	};
}
