#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_MATERIALPROPERTYEXCLUSIVITYGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x192A1980)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertyExclusivity_MaterialPropertyExclusivityGroup_TypeDefinitionIndex = 68387;

	class ConfigMaterialPropertyExclusivity_MaterialPropertyExclusivityGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::Int32>* PriorityInfo; // 0x10
		::System::String* Desc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_MATERIALPROPERTYEXCLUSIVITYGROUP__CTOR_OFFSET))(this);
		}
	};
}
