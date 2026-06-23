#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x170B7D70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x170B7D80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundSetting_TypeDefinitionIndex = 42148;

	class ConfigSoundSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Int32 MobileRumbleBattleDefaultVolume; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MobileRumbleDefaultVolumeDict; // 0x68
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>* MobileRumbleVolumeDeviceRegexIOSDict; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* MuteCellphoneRumbleIOSRegexList; // 0x78
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>* MobileRumbleVolumeDeviceRegexAndroidDict; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
