#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AetherSpiritTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_GETAETHERMONSTERTYPECONFIG_OFFSET UNITYSDK_OFFSET(0x9DE2870)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_GETAETHERSPIRITTYPECONFIG_OFFSET UNITYSDK_OFFSET(0x9DE2700)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISCOUNTERBYATTACKER_OFFSET UNITYSDK_OFFSET(0x9DE2A40)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISCOUNTERBYTYPE_OFFSET UNITYSDK_OFFSET(0x9DE2BC0)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISMONSTERHASCUTIN_OFFSET UNITYSDK_OFFSET(0x9DE2E40)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISNEXTTURNOWNERMONSTERHASCUTIN_OFFSET UNITYSDK_OFFSET(0x9DE2F50)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISPERSISTBYATTACKER_OFFSET UNITYSDK_OFFSET(0x9DE2C40)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISPERSISTBYTYPE_OFFSET UNITYSDK_OFFSET(0x9DE2DC0)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_TRYGETAETHERTYPECONFIG_OFFSET UNITYSDK_OFFSET(0x9DE29E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAetherDivideUtils_TypeDefinitionIndex = 65810;

	class BattleAetherDivideUtils : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AetherSpiritTypeRow* GetAetherSpiritTypeConfig(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::AetherSpiritTypeRow*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_GETAETHERSPIRITTYPECONFIG_OFFSET))(entity);
		}

		static ::RPG::GameCore::AetherSpiritTypeRow* GetAetherMonsterTypeConfig(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::AetherSpiritTypeRow*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_GETAETHERMONSTERTYPECONFIG_OFFSET))(entity);
		}

		static ::RPG::GameCore::AetherSpiritTypeRow* TryGetAetherTypeConfig(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::AetherSpiritTypeRow*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_TRYGETAETHERTYPECONFIG_OFFSET))(entity);
		}

		static ::System::Boolean IsCounterByAttacker(::RPG::GameCore::GameEntity* defender, ::RPG::GameCore::GameEntity* attacker)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISCOUNTERBYATTACKER_OFFSET))(defender, attacker);
		}

		static ::System::Boolean IsPersistByAttacker(::RPG::GameCore::GameEntity* defender, ::RPG::GameCore::GameEntity* attacker)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISPERSISTBYATTACKER_OFFSET))(defender, attacker);
		}

		static ::System::Boolean IsCounterByType(::RPG::GameCore::AetherSpiritType defenderType, ::RPG::GameCore::AetherSpiritType attackerType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AetherSpiritType, ::RPG::GameCore::AetherSpiritType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISCOUNTERBYTYPE_OFFSET))(defenderType, attackerType);
		}

		static ::System::Boolean IsPersistByType(::RPG::GameCore::AetherSpiritType defenderType, ::RPG::GameCore::AetherSpiritType attackerType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AetherSpiritType, ::RPG::GameCore::AetherSpiritType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISPERSISTBYTYPE_OFFSET))(defenderType, attackerType);
		}

		static ::System::Boolean IsMonsterHasCutIn(::RPG::GameCore::GameEntity* pAetherMonster)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISMONSTERHASCUTIN_OFFSET))(pAetherMonster);
		}

		static ::System::Boolean IsNextTurnOwnerMonsterHasCutin(::RPG::GameCore::TurnBasedGameMode* pGameMode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISNEXTTURNOWNERMONSTERHASCUTIN_OFFSET))(pGameMode);
		}
	};
}
