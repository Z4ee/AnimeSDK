#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class Class_1_20E58F76D44AFEF6;
namespace MoleMole::Config { class ConfigMonsterAlerts_KeyValueInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1486E3C0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1486D860)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1486F360)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1486F9D0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1486F9E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlerts_TypeDefinitionIndex = 89843;

	class ConfigMonsterAlerts : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::HashSet_1<::UnityEngine::LayerMask>* BlockColliderLayers; // 0x58
		::System::Collections::Generic::HashSet_1<::System::String*>* BlockColliderTags; // 0x60
		::System::Collections::Generic::HashSet_1<::System::String*>* NonBlockColliderTags; // 0x68
		::System::Single BattleSlopAngle; // 0x70
		::System::Collections::Generic::HashSet_1<::System::String*>* IgnoreZoneTags; // 0x78
		::System::Collections::Generic::HashSet_1<::System::String*>* SuppressAlertGrowthZoneTags; // 0x80
		::System::Collections::Generic::HashSet_1<::System::String*>* SuppressAlertIncreaseOnHitAttackPropertyTags; // 0x88
		::System::String* ShowAlertUIZoneTag; // 0x90
		::System::Single MajorAxisLength; // 0x98
		::System::Single MinorAxisLength; // 0x9C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_20E58F76D44AFEF6*>* AlertItemConfigs; // 0xA0
		::System::Collections::Generic::List_1<::UnityEngine::LayerMask>* ValueInfoList; // 0xA8
		::System::Collections::Generic::List_1<::System::String*>* ValueInfoList1; // 0xB0
		::System::Collections::Generic::List_1<::System::String*>* ValueInfoList2; // 0xB8
		::System::Collections::Generic::List_1<::System::String*>* ValueInfoList3; // 0xC0
		::System::Collections::Generic::List_1<::System::String*>* ValueInfoList4; // 0xC8
		::System::Collections::Generic::List_1<::System::String*>* ValueInfoList5; // 0xD0
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMonsterAlerts_KeyValueInfo*>* KeyValueInfoList; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
