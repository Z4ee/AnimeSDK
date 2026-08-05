#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class AbilityRegistryInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NEWAUTOABILITYREGISTRYCONFIG_BUILDABILITYCONFIGINFO_OFFSET UNITYSDK_OFFSET(0x13ACC760)
#define MOLEMOLE_NEWAUTOABILITYREGISTRYCONFIG_CLEARABILITYREGISTRYINFOS_OFFSET UNITYSDK_OFFSET(0x13ACC670)
#define MOLEMOLE_NEWAUTOABILITYREGISTRYCONFIG_CLEARABILITYREGISTRYNAMES_OFFSET UNITYSDK_OFFSET(0x13ACBBA0)
#define MOLEMOLE_NEWAUTOABILITYREGISTRYCONFIG_GET_ABILITYREGISTRYNAMES_OFFSET UNITYSDK_OFFSET(0x13ACB910)
#define MOLEMOLE_NEWAUTOABILITYREGISTRYCONFIG_REBUILDABILITYREGISTRYNAMEHASHES_OFFSET UNITYSDK_OFFSET(0x13ACBC50)
#define MOLEMOLE_NEWAUTOABILITYREGISTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACC7A0)

namespace MoleMole
{
	inline static constexpr unsigned int NewAutoAbilityRegistryConfig_TypeDefinitionIndex = 66582;

	class NewAutoAbilityRegistryConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Int32 abilityDataGlobalHashCode; // 0x58
		::Il2CppArray<::Foundation::AssetPath>* abilityRegistryPathes; // 0x60
		::Il2CppArray<::System::UInt64>* abilityRegistryNameHashes; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::AbilityRegistryInfo*>* abilityRegistryInfos; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _abilityRegistryNames; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOABILITYREGISTRYCONFIG__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* get_abilityRegistryNames()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOABILITYREGISTRYCONFIG_GET_ABILITYREGISTRYNAMES_OFFSET))(this);
		}

		::System::Void ClearAbilityRegistryNames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOABILITYREGISTRYCONFIG_CLEARABILITYREGISTRYNAMES_OFFSET))(this);
		}

		::System::Boolean RebuildAbilityRegistryNameHashes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOABILITYREGISTRYCONFIG_REBUILDABILITYREGISTRYNAMEHASHES_OFFSET))(this);
		}

		::System::Void ClearAbilityRegistryInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOABILITYREGISTRYCONFIG_CLEARABILITYREGISTRYINFOS_OFFSET))(this);
		}

		::System::Void BuildAbilityConfigInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOABILITYREGISTRYCONFIG_BUILDABILITYCONFIGINFO_OFFSET))(this);
		}
	};
}
