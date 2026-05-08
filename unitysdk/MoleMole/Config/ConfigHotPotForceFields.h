#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SerializedScriptableObjectBase.h"

namespace MoleMole::Config { class HotPotForceFieldConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOTPOTFORCEFIELDS_GETCONFIGBYKEY_OFFSET UNITYSDK_OFFSET(0x159EDE60)
#define MOLEMOLE_CONFIG_CONFIGHOTPOTFORCEFIELDS__CTOR_OFFSET UNITYSDK_OFFSET(0x159EDF50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHotPotForceFields_TypeDefinitionIndex = 58184;

	class ConfigHotPotForceFields : public ::MoleMole::SerializedScriptableObjectBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HotPotForceFieldConfig*>* forceFieldConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOTPOTFORCEFIELDS__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::HotPotForceFieldConfig* GetConfigByKey(::System::String* key)
		{
			return ((::MoleMole::Config::HotPotForceFieldConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOTPOTFORCEFIELDS_GETCONFIGBYKEY_OFFSET))(this, key);
		}
	};
}
