#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class MonsterSpecialIdleEntry; }
namespace MoleMole { class MonsterSpecialIdleSerializedData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONSTERSPECIALIDLECONFIG_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1687C420)
#define MOLEMOLE_MONSTERSPECIALIDLECONFIG_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1687BDF0)
#define MOLEMOLE_MONSTERSPECIALIDLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1687C7F0)
#define MOLEMOLE_MONSTERSPECIALIDLECONFIG___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1687C950)
#define MOLEMOLE_MONSTERSPECIALIDLECONFIG___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1687C960)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterSpecialIdleConfig_TypeDefinitionIndex = 67993;

	class MonsterSpecialIdleConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MonsterSpecialIdleEntry*>*>* Mappings; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::MonsterSpecialIdleSerializedData*>* SerializedData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERSPECIALIDLECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERSPECIALIDLECONFIG_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERSPECIALIDLECONFIG_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERSPECIALIDLECONFIG___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERSPECIALIDLECONFIG___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
