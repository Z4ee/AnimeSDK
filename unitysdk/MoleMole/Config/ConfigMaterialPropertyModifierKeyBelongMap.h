#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERKEYBELONGMAP_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1486A190)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERKEYBELONGMAP_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1486A460)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERKEYBELONGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1486A750)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERKEYBELONGMAP___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1486A7B0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERKEYBELONGMAP___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1486A7C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertyModifierKeyBelongMap_TypeDefinitionIndex = 55712;

	class ConfigMaterialPropertyModifierKeyBelongMap : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>* KeyToBelongPathMap; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* KeyToBelongPathMap_Keys; // 0x60
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* KeyToBelongPathMap_Values; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERKEYBELONGMAP__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERKEYBELONGMAP_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERKEYBELONGMAP_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERKEYBELONGMAP___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERKEYBELONGMAP___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
