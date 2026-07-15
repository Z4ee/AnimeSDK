#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PhotoGraphSettingDisplayOptionType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphSettingItemType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphSettingOptionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHSETTINGDATACONFIG_METHOD_2_B4BF48389A9A941B_OFFSET UNITYSDK_OFFSET(0x1B4C3DE0)
#define RPG_GAMECORE_PHOTOGRAPHSETTINGDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C4220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphSettingDataConfig_TypeDefinitionIndex = 18310;

	class PhotoGraphSettingDataConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PhotoGraphSettingItemType SettingType; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::RPG::GameCore::PhotoGraphSettingOptionType OptionType; // 0x28
		::RPG::GameCore::PhotoGraphSettingDisplayOptionType DisplayOptionType; // 0x2C
		::Il2CppArray<::System::UInt32>* IntParams; // 0x30
		::Il2CppArray<::System::Single>* FloatParams; // 0x38
		::Il2CppArray<::System::String*>* StringParams; // 0x40
		::System::Boolean SaveToLocal; // 0x48
		::System::Boolean AutoReset; // 0x49
		::System::Boolean AutoSwitchApply; // 0x4A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETTINGDATACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B4BF48389A9A941B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphSettingDataConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphSettingDataConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETTINGDATACONFIG_METHOD_2_B4BF48389A9A941B_OFFSET))(a1, a2);
		}
	};
}
