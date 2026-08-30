#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AetherSpiritTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_GETAETHERMONSTERTYPECONFIG_OFFSET UNITYSDK_OFFSET(0xC8D44D0)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_GETAETHERSPIRITTYPECONFIG_OFFSET UNITYSDK_OFFSET(0xC8D42A0)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISCOUNTERBYATTACKER_OFFSET UNITYSDK_OFFSET(0xC8D4760)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISCOUNTERBYTYPE_OFFSET UNITYSDK_OFFSET(0xC8D48E0)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISMONSTERHASCUTIN_OFFSET UNITYSDK_OFFSET(0xC8D4B60)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISNEXTTURNOWNERMONSTERHASCUTIN_OFFSET UNITYSDK_OFFSET(0xC8D4D20)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISPERSISTBYATTACKER_OFFSET UNITYSDK_OFFSET(0xC8D4960)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISPERSISTBYTYPE_OFFSET UNITYSDK_OFFSET(0xC8D4AE0)
#define RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_TRYGETAETHERTYPECONFIG_OFFSET UNITYSDK_OFFSET(0xC8D4700)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAetherDivideUtils_TypeDefinitionIndex = 71360;

	class BattleAetherDivideUtils : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AetherSpiritTypeRow* GetAetherSpiritTypeConfig(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AetherSpiritTypeRow*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_GETAETHERSPIRITTYPECONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::AetherSpiritTypeRow* GetAetherMonsterTypeConfig(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AetherSpiritTypeRow*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_GETAETHERMONSTERTYPECONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::AetherSpiritTypeRow* TryGetAetherTypeConfig(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AetherSpiritTypeRow*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_TRYGETAETHERTYPECONFIG_OFFSET))(a1);
		}

		static ::System::Boolean IsCounterByAttacker(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISCOUNTERBYATTACKER_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPersistByAttacker(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISPERSISTBYATTACKER_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsCounterByType(::RPG::GameCore::AetherSpiritType a1, ::RPG::GameCore::AetherSpiritType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AetherSpiritType, ::RPG::GameCore::AetherSpiritType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISCOUNTERBYTYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPersistByType(::RPG::GameCore::AetherSpiritType a1, ::RPG::GameCore::AetherSpiritType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AetherSpiritType, ::RPG::GameCore::AetherSpiritType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISPERSISTBYTYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMonsterHasCutIn(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISMONSTERHASCUTIN_OFFSET))(a1);
		}

		static ::System::Boolean IsNextTurnOwnerMonsterHasCutin(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAETHERDIVIDEUTILS_ISNEXTTURNOWNERMONSTERHASCUTIN_OFFSET))(a1);
		}
	};
}
