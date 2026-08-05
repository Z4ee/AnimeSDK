#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x172B3310)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSystemSetting_TypeDefinitionIndex = 84034;

	class ConfigSystemSetting : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::String*>* SystemSettingTypeNameDict; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* AllowResetSystemSettingList; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* InLevelPauseSettingTabDict; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* OutLevelSettingList; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* HollowSettingList; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* LoginSettingList; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING__CTOR_OFFSET))(this);
		}
	};
}
