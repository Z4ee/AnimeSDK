#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/FightModeType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMonsterAlertDetection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1744D930)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlertItem_TypeDefinitionIndex = 58887;

	class ConfigMonsterAlertItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FightModeType, ::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>*>* AvatarEnemyAlertReduceSpeedsForEnterState; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* MonsterEnemyAlertReduceSpeedsForEnterState; // 0x18
		::System::String* AlertReduceSpeedsOnSelfExitBattleAreaForEnterState; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMonsterAlertDetection*>* DetectionConfigs; // 0x28
		::System::Nullable_1<::System::Single> OverrideBattleSlopAngle; // 0x30
		::System::Single AlertIncreaseOnHitForIdleState; // 0x38
		::System::Single BulletExplodeDetectDistance; // 0x3C
		::System::Single AlertReduceSpeedsOnEnemyExitBattleAreaForEnterState; // 0x40
		::System::Single AlertReduceSpeedOnSlopeForEnterState; // 0x44
		::System::Single AlertIncreaseSpeedForEnterState; // 0x48
		::System::Single AlertIncreaseOnBulletExplode; // 0x4C
		::System::Single AlertReduceSpeedForIdleState; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTITEM__CTOR_OFFSET))(this);
		}
	};
}
