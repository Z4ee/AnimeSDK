#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigTargetValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTARGETVALUES_GETALLTARGETVALUEKEYS_OFFSET UNITYSDK_OFFSET(0x192A96D0)
#define MOLEMOLE_CONFIG_CONFIGTARGETVALUES__CTOR_OFFSET UNITYSDK_OFFSET(0x192A98C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTargetValues_TypeDefinitionIndex = 50460;

	class ConfigTargetValues : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single UpdateInterval; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigTargetValue*>* TargetValueConfigs; // 0x60
		::System::String* defaultConfigTag; // 0x68
		::System::String* defaultMultiplayerConfigTag; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* allKeys; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETVALUES__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetAllTargetValueKeys()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETVALUES_GETALLTARGETVALUEKEYS_OFFSET))(this);
		}
	};
}
