#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20E58F76D44AFEF6;
namespace MoleMole::Config { class ConfigMonsterAlerts_ConfigMonsterAlertDetectionSurrogate; }
namespace MoleMole::Config { class ConfigMonsterAlerts_FightModeReduceSpeedPair; }
namespace MoleMole::Config { class ConfigMonsterAlerts_FloatFloatPair; }
namespace MoleMole::Config { class ConfigMonsterAlerts_StringFloatPair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTITEMSURROGATE_TOCONFIG_OFFSET UNITYSDK_OFFSET(0x11476D90)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTITEMSURROGATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11476550)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTITEMSURROGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x114763D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlerts_ConfigMonsterAlertItemSurrogate_TypeDefinitionIndex = 89845;

	class ConfigMonsterAlerts_ConfigMonsterAlertItemSurrogate : public ::System::Object
	{
	public:
		::System::Boolean HasOverrideBattleSlopAngle; // 0x10
		::System::Single OverrideBattleSlopAngle; // 0x14
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMonsterAlerts_StringFloatPair*>* ExtraAlertReduceSpeedByZoneTag; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMonsterAlerts_ConfigMonsterAlertDetectionSurrogate*>* DetectionConfigs; // 0x20
		::System::Single AlertReduceSpeedForIdleState; // 0x28
		::System::Single AlertIncreaseOnHitForIdleState; // 0x2C
		::System::Boolean EnterBattleRegardlessOfSameArea; // 0x30
		::System::Single BulletExplodeDetectDistance; // 0x34
		::System::Single AlertIncreaseOnBulletExplode; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMonsterAlerts_FightModeReduceSpeedPair*>* AvatarEnemyAlertReduceSpeedsForEnterState; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMonsterAlerts_FloatFloatPair*>* MonsterEnemyAlertReduceSpeedsForEnterState; // 0x48
		::System::Single AlertReduceSpeedsOnEnemyExitBattleAreaForEnterState; // 0x50
		::System::String* AlertReduceSpeedsOnSelfExitBattleAreaForEnterState; // 0x58
		::System::Single AlertIncreaseSpeedForEnterState; // 0x60
		::System::Single AlertReduceSpeedOnSlopeForEnterState; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTITEMSURROGATE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_1_20E58F76D44AFEF6* src)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_20E58F76D44AFEF6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTITEMSURROGATE__CTOR_1_OFFSET))(this, src);
		}

		::Class_1_20E58F76D44AFEF6* ToConfig()
		{
			return ((::Class_1_20E58F76D44AFEF6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTITEMSURROGATE_TOCONFIG_OFFSET))(this);
		}
	};
}
