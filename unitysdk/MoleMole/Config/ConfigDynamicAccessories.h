#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigDynamicAccessoryData; }
namespace MoleMole::Config { class ConfigDynamicAccessorySkinningData; }
namespace MoleMole::Config { class ConfigVersionedDynamicAccessories; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_GET_ACCESSORIES_OFFSET UNITYSDK_OFFSET(0x12EFD250)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_MERGEVERSIONEDACCESSORIES_OFFSET UNITYSDK_OFFSET(0x12EFD2B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES__CTOR_OFFSET UNITYSDK_OFFSET(0x12EFD850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAccessories_TypeDefinitionIndex = 63866;

	class ConfigDynamicAccessories : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigDynamicAccessorySkinningData*>* AccessorySkinningDatas; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigVersionedDynamicAccessories*>* VersionedAccessories; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicAccessoryData*>* _mergedAccessories; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicAccessoryData*>* get_Accessories()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicAccessoryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_GET_ACCESSORIES_OFFSET))(this);
		}

		::System::Void MergeVersionedAccessories()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_MERGEVERSIONEDACCESSORIES_OFFSET))(this);
		}
	};
}
