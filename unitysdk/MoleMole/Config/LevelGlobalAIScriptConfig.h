#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/LevelGlobalAIScriptConfigData_AIGroupTagWeight.h"

namespace MoleMole::Config { class LevelGlobalAIModule; }
namespace MoleMole::Config { class LevelGlobalAIScriptConfig_AISteerParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_ONKEYCHANGE_OFFSET UNITYSDK_OFFSET(0x19FF60A0)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF6100)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAIScriptConfig_TypeDefinitionIndex = 40098;

	class LevelGlobalAIScriptConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* DefaultLevelAIModuleKey; // 0x58
		::Il2CppArray<::System::String*>* customKeyList; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LevelGlobalAIModule*>* LevelGlobalAIModules; // 0x68
		::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::MoleMole::Config::LevelGlobalAIScriptConfigData_AIGroupTagWeight>* AIGroupTagWeight; // 0x70
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::LevelGlobalAIScriptConfig_AISteerParam*>*>* AISteerSizeWeight; // 0x78
		::System::Single AISteerStrength; // 0x80
		::System::Single AISteerRadius; // 0x84
		::System::Single NormalStrength; // 0x88
		::System::Single TangentStrength; // 0x8C
		::System::Single viewPortMinX; // 0x90
		::System::Single viewPortMaxX; // 0x94
		::System::Single viewPortMinY; // 0x98
		::System::Single viewPortMaxY; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void OnKeyChange()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_ONKEYCHANGE_OFFSET))();
		}
	};
}
