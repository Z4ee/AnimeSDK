#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class MonsterMappingConfig_KeyValueInfo; }
namespace MoleMole { class MonsterMappingEntry; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONSTERMAPPINGCONFIG_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x160DB8D0)
#define MOLEMOLE_MONSTERMAPPINGCONFIG_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x160DB6D0)
#define MOLEMOLE_MONSTERMAPPINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x160DBB70)
#define MOLEMOLE_MONSTERMAPPINGCONFIG___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x160DBCD0)
#define MOLEMOLE_MONSTERMAPPINGCONFIG___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x160DBCE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterMappingConfig_TypeDefinitionIndex = 81740;

	class MonsterMappingConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MonsterMappingEntry*>*>* Mappings; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::MonsterMappingConfig_KeyValueInfo*>* KeyValueInfoList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERMAPPINGCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERMAPPINGCONFIG_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERMAPPINGCONFIG_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERMAPPINGCONFIG___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERMAPPINGCONFIG___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
