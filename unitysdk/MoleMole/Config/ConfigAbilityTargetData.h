#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTargetData_ValueType.h"

namespace MoleMole::Config { class ConfigAbilityTarget; }
namespace MoleMole::Config { class ConfigAbilityTargetData_KeyValueInfo; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA_BRIDGEONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x186AB1A0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA_BRIDGEONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x186AABE0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA_GETVALUETYPEENUM_OFFSET UNITYSDK_OFFSET(0x186AAF00)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x186AB510)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x186AB700)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA___BASE_BRIDGEONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x186AB930)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA___BASE_BRIDGEONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x186AB9C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTargetData_TypeDefinitionIndex = 39975;

	class ConfigAbilityTargetData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Int32 priorityOrder; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigAbilityTarget*>* configDic; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityTargetData_KeyValueInfo*>* KeyValueInfoList; // 0x68
		::Newtonsoft::Json::JsonSerializerSettings* serializerSettings; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA__CTOR_OFFSET))(this);
		}

		::System::Void BridgeOnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA_BRIDGEONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void BridgeOnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA_BRIDGEONAFTERDESERIALIZE_OFFSET))(this);
		}

		::MoleMole::Config::ConfigAbilityTargetData_ValueType GetValueTypeEnum(::System::Type* type)
		{
			return ((::MoleMole::Config::ConfigAbilityTargetData_ValueType(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA_GETVALUETYPEENUM_OFFSET))(this, type);
		}

		::System::Type* GetValueType(::MoleMole::Config::ConfigAbilityTargetData_ValueType valueType)
		{
			return ((::System::Type*(*)(::PVOID, ::MoleMole::Config::ConfigAbilityTargetData_ValueType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA_GETVALUETYPE_OFFSET))(this, valueType);
		}

		::System::Void __base_BridgeOnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA___BASE_BRIDGEONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_BridgeOnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA___BASE_BRIDGEONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
