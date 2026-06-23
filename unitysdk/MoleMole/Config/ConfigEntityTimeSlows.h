#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigEntityTimeSlows_ValueType.h"

namespace MoleMole::Config { class ConfigEntityTimeSlowBase; }
namespace MoleMole::Config { class ConfigEntityTimeSlows_KeyValueInfo; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS_BRIDGEONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1929B540)
#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS_BRIDGEONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1929B100)
#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS_GETVALUETYPEENUM_OFFSET UNITYSDK_OFFSET(0x1929B410)
#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1929B8B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS__CTOR_OFFSET UNITYSDK_OFFSET(0x1929B9F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS___BASE_BRIDGEONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1929BC20)
#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS___BASE_BRIDGEONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1929BCB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityTimeSlows_TypeDefinitionIndex = 64822;

	class ConfigEntityTimeSlows : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTimeSlowBase*>* timeSlows; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityTimeSlows_KeyValueInfo*>* KeyValueInfoList; // 0x60
		::Newtonsoft::Json::JsonSerializerSettings* serializerSettings; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS__CTOR_OFFSET))(this);
		}

		::System::Void BridgeOnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS_BRIDGEONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void BridgeOnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS_BRIDGEONAFTERDESERIALIZE_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityTimeSlows_ValueType GetValueTypeEnum(::System::Type* type)
		{
			return ((::MoleMole::Config::ConfigEntityTimeSlows_ValueType(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS_GETVALUETYPEENUM_OFFSET))(this, type);
		}

		::System::Type* GetValueType(::MoleMole::Config::ConfigEntityTimeSlows_ValueType valueType)
		{
			return ((::System::Type*(*)(::PVOID, ::MoleMole::Config::ConfigEntityTimeSlows_ValueType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS_GETVALUETYPE_OFFSET))(this, valueType);
		}

		::System::Void __base_BridgeOnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS___BASE_BRIDGEONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_BridgeOnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS___BASE_BRIDGEONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
