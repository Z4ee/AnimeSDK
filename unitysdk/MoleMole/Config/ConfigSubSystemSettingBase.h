#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

namespace MoleMole { class SystemSettingEntryBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSUBSYSTEMSETTINGBASE_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x170B8130)
#define MOLEMOLE_CONFIG_CONFIGSUBSYSTEMSETTINGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x170B8050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSubSystemSettingBase_TypeDefinitionIndex = 70548;

	class ConfigSubSystemSettingBase : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>* DetailSettingDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUBSYSTEMSETTINGBASE__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUBSYSTEMSETTINGBASE_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
