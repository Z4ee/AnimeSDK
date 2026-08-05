#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigLockTarget; }
namespace MoleMole::Config { class ConfigLockTargets_KeyValueInfo; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETS_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4CE8F0)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETS_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4CE560)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CECA0)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETS___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4CEEC0)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETS___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4CEED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockTargets_TypeDefinitionIndex = 42972;

	class ConfigLockTargets : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLockTarget*>* LockTargets; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLockTargets_KeyValueInfo*>* KeyValueInfoList; // 0x60
		::Newtonsoft::Json::JsonSerializerSettings* serializerSettings; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETS__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETS_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETS_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETS___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETS___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
