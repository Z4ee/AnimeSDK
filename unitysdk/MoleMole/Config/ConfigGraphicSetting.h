#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"
#include "unitysdk/Sirenix/Serialization/DataFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class DevicePerformanceConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_GETFORMATTOSERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x17D566A0)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x17D56690)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x17D566F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGraphicSetting_TypeDefinitionIndex = 74785;

	class ConfigGraphicSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::MoleMole::Config::DevicePerformanceConfig*>* DevicePerformanceConfigDict; // 0x60
		::System::Int32 HDRMaxLuminosityDefaultLevel; // 0x68
		::System::Collections::Generic::List_1<::System::Single>* HDRMaxLuminosityLevelConfigList; // 0x70
		::System::Int32 HDRUIPaperWhiteDefaultLevel; // 0x78
		::System::Collections::Generic::List_1<::System::Single>* HDRUIPaperWhiteLevelConfigList; // 0x80
		::System::Collections::Generic::Dictionary_2<::MoleMole::GraphicSettingProfileType, ::System::Single>* graphicsTypeScoreRatioDict; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* pcResolutionSupportList; // 0x90
		::System::Collections::Generic::List_1<::System::String*>* RTXMidResolutionGPUWhitelistRegex; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}

		::Sirenix::Serialization::DataFormat GetFormatToSerializeAs(::System::Boolean isPlayer)
		{
			return ((::Sirenix::Serialization::DataFormat(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_GETFORMATTOSERIALIZEAS_OFFSET))(this, isPlayer);
		}
	};
}
