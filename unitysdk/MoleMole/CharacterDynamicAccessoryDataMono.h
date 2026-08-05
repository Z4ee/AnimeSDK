#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonsterIdToAccessories.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_AWAKE_OFFSET UNITYSDK_OFFSET(0x114513B0)
#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_GETMONSTERACCESSORYDATA_OFFSET UNITYSDK_OFFSET(0x11451470)
#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_GET_ACCESSORYLIST_OFFSET UNITYSDK_OFFSET(0x114513A0)
#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x11451570)
#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_METHOD_5_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x11451420)
#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_METHOD_5_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x114516E0)
#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x11451520)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterDynamicAccessoryDataMono_TypeDefinitionIndex = 63033;

	class CharacterDynamicAccessoryDataMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Int32>* AccessoryArr; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_1; // 0x20
		::System::Boolean UseMonsterConfig; // 0x28
		::Il2CppArray<::MoleMole::MonsterIdToAccessories>* MonsterConfig; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonsterIdToAccessories>* Field_5_6; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_AccessoryList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_GET_ACCESSORYLIST_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_AWAKE_OFFSET))(this);
		}

		::MoleMole::MonsterIdToAccessories GetMonsterAccessoryData(::System::Int32 a1)
		{
			return ((::MoleMole::MonsterIdToAccessories(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_GETMONSTERACCESSORYDATA_OFFSET))(this, a1);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_DAEB67F34AF80609()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_METHOD_5_DAEB67F34AF80609_OFFSET))(this);
		}

		::System::Void Method_5_E21AC6EE08DC160A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_METHOD_5_E21AC6EE08DC160A_OFFSET))(this);
		}
	};
}
