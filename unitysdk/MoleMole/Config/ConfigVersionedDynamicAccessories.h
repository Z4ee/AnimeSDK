#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigDynamicAccessoryData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGVERSIONEDDYNAMICACCESSORIES__CTOR_OFFSET UNITYSDK_OFFSET(0x177E4340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigVersionedDynamicAccessories_TypeDefinitionIndex = 58331;

	class ConfigVersionedDynamicAccessories : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicAccessoryData*>* Accessories; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVERSIONEDDYNAMICACCESSORIES__CTOR_OFFSET))(this);
		}
	};
}
