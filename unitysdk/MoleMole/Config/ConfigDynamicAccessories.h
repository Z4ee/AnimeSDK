#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigDynamicAccessoryData; }
namespace MoleMole::Config { class ConfigDynamicAccessorySkinningData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1109F860)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAccessories_TypeDefinitionIndex = 84249;

	class ConfigDynamicAccessories : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigDynamicAccessorySkinningData*>* AccessorySkinningDatas; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicAccessoryData*>* AccessoryDatas; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES__CTOR_OFFSET))(this);
		}
	};
}
