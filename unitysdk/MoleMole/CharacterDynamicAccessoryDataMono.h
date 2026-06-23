#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_AWAKE_OFFSET UNITYSDK_OFFSET(0x12C53B30)
#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_GET_ACCESSORYLIST_OFFSET UNITYSDK_OFFSET(0x12C53B20)
#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x12C53CA0)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterDynamicAccessoryDataMono_TypeDefinitionIndex = 59930;

	class CharacterDynamicAccessoryDataMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Int32>* AccessoryArr; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_1; // 0x20

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
	};
}
