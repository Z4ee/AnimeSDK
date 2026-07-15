#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_103;
class Class_1_6E6FEE1E26FFD7A8;
namespace RPG::Client::LittleGame::PixAir { class PixAirLevelController; }
namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneStatistics; }
namespace RPG::Client::PixAir { class PixAirGameBattleRoundData; }
namespace RPG::GameCore { class PixAirEquipmentPresetConfig; }
namespace RPG::GameCore { class PixAirGamePresetConfig; }
namespace RPG::GameCore { class PixAirPlanePresetConfig; }

#define RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION_CREATEENEMYPLANESNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x1A0BFF20)
#define RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION_CREATEPLAYERPLANESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1A0BF740)
#define RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION_GET_BATTLEROUNDINFO_OFFSET UNITYSDK_OFFSET(0x1A0BF730)
#define RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION_RESOLVEBATTLE_OFFSET UNITYSDK_OFFSET(0x1A0C01B0)
#define RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION__CREATEEQUIPMENTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1A0C0220)
#define RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION__CREATEPLANESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1A0BF810)
#define RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BF720)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirFakeBattleAction_TypeDefinitionIndex = 75259;

	class PixAirFakeBattleAction : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirGameBattleRoundData* _BattleRoundInfo_k__BackingField; // 0x10
		::RPG::GameCore::PixAirGamePresetConfig* _PresetConfig; // 0x18

		::System::Void _ctor(::RPG::GameCore::PixAirGamePresetConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PixAirGamePresetConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirGameBattleRoundData* get_BattleRoundInfo()
		{
			return ((::RPG::Client::PixAir::PixAirGameBattleRoundData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION_GET_BATTLEROUNDINFO_OFFSET))(this);
		}

		::Class_1_6E6FEE1E26FFD7A8* CreatePlayerPlaneSnapshot(::RPG::Client::LittleGame::PixAir::PixAirLevelController* a1)
		{
			return ((::Class_1_6E6FEE1E26FFD7A8*(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirLevelController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION_CREATEPLAYERPLANESNAPSHOT_OFFSET))(this, a1);
		}

		::Il2CppArray<::Class_1_6E6FEE1E26FFD7A8*>* CreateEnemyPlaneSnapshots(::RPG::Client::LittleGame::PixAir::PixAirLevelController* a1)
		{
			return ((::Il2CppArray<::Class_1_6E6FEE1E26FFD7A8*>*(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirLevelController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION_CREATEENEMYPLANESNAPSHOTS_OFFSET))(this, a1);
		}

		::System::Void ResolveBattle(::System::Boolean a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a2, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION_RESOLVEBATTLE_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_6E6FEE1E26FFD7A8* _CreatePlaneSnapshot(::RPG::GameCore::PixAirPlanePresetConfig* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::Class_1_6E6FEE1E26FFD7A8*(*)(::PVOID, ::RPG::GameCore::PixAirPlanePresetConfig*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION__CREATEPLANESNAPSHOT_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_43BD383C98B4C0C5_103* _CreateEquipmentSnapshot(::RPG::GameCore::PixAirEquipmentPresetConfig* a1, ::System::Int32 a2)
		{
			return ((::Class_1_43BD383C98B4C0C5_103*(*)(::PVOID, ::RPG::GameCore::PixAirEquipmentPresetConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRFAKEBATTLEACTION__CREATEEQUIPMENTSNAPSHOT_OFFSET))(this, a1, a2);
		}
	};
}
