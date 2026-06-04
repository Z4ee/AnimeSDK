#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphSettingItemType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphSettingOptionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PhotoGraphSettingDataConfig; }

#define RPG_CLIENT_PHOTOGRAPHSETTINGDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC382AD0)
#define RPG_CLIENT_PHOTOGRAPHSETTINGDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC382AE0)
#define RPG_CLIENT_PHOTOGRAPHSETTINGDATA_GET_OPTIONTYPE_OFFSET UNITYSDK_OFFSET(0xC382B10)
#define RPG_CLIENT_PHOTOGRAPHSETTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC381B40)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphSettingData_TypeDefinitionIndex = 62142;

	class PhotoGraphSettingData : public ::System::Object
	{
	public:
		::RPG::GameCore::PhotoGraphSettingDataConfig* _Config_k__BackingField; // 0x10
		::RPG::GameCore::PhotoGraphSettingItemType SettingType; // 0x18
		::System::Boolean IsEnable; // 0x1C

		::System::Void _ctor(::RPG::GameCore::PhotoGraphSettingDataConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphSettingDataConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSETTINGDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::PhotoGraphSettingDataConfig* get_Config()
		{
			return ((::RPG::GameCore::PhotoGraphSettingDataConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSETTINGDATA_GET_CONFIG_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSETTINGDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::PhotoGraphSettingOptionType get_OptionType()
		{
			return ((::RPG::GameCore::PhotoGraphSettingOptionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSETTINGDATA_GET_OPTIONTYPE_OFFSET))(this);
		}
	};
}
