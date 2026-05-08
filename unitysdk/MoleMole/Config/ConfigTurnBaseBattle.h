#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigTurnBasePreviewEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTURNBASEBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1424EBB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTurnBaseBattle_TypeDefinitionIndex = 52092;

	class ConfigTurnBaseBattle : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* RandomClearDebuffList; // 0x58
		::System::Single OverrideBossLockAnchorElevation; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigTurnBasePreviewEffect*>* PreviewEffectDict; // 0x68
		::System::Single AllyRoundProtectTime; // 0x70
		::System::Single EnemyRoundProtectTime; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTURNBASEBATTLE__CTOR_OFFSET))(this);
		}
	};
}
