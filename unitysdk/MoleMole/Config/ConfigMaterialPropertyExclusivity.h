#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigMaterialPropertyExclusivity_MaterialPropertyExclusivityGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0AEC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertyExclusivity_TypeDefinitionIndex = 68386;

	class ConfigMaterialPropertyExclusivity : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* ShaderBlacklist; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialPropertyExclusivity_MaterialPropertyExclusivityGroup*>* Groups; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY__CTOR_OFFSET))(this);
		}
	};
}
