#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_6E6FEE1E26FFD7A8;
namespace RPG::Client::LittleGame::PixAir { class PixAirLevelController; }
namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneStatistics; }
namespace RPG::Client::PixAir { class PixAirGameBattleRoundData; }
namespace RPG::GameCore { class PixAirEquipmentPresetConfig; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRCOMMANDBATTLEACTION_CREATEENEMYPLANESNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x1C834500)
#define RPG_CLIENT_PIXAIR_PIXAIRCOMMANDBATTLEACTION_CREATEPLAYERPLANESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1C834260)
#define RPG_CLIENT_PIXAIR_PIXAIRCOMMANDBATTLEACTION_GET_BATTLEROUNDINFO_OFFSET UNITYSDK_OFFSET(0x1C834250)
#define RPG_CLIENT_PIXAIR_PIXAIRCOMMANDBATTLEACTION_RESOLVEBATTLE_OFFSET UNITYSDK_OFFSET(0x1C834640)
#define RPG_CLIENT_PIXAIR_PIXAIRCOMMANDBATTLEACTION__CREATEPLANESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1C834320)
#define RPG_CLIENT_PIXAIR_PIXAIRCOMMANDBATTLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C834230)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirCommandBattleAction_TypeDefinitionIndex = 78802;

	class PixAirCommandBattleAction : public ::System::Object
	{
	public:
		// static const ::System::Int32 SlotCount = 0x7; // 0x0
		// static const ::System::Int32 PlayerPlaneID = 0x1; // 0x0
		// static const ::System::Int32 EnemyPlaneID = 0x2; // 0x0
		// static const ::System::UInt32 DefaultEnemyDisplayID = 0x2BD; // 0x0
		// static const ::System::String* DefaultViewResPath; // 0x0
		::RPG::Client::PixAir::PixAirGameBattleRoundData* _BattleRoundInfo_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::PixAirEquipmentPresetConfig*>* _PlayerSlots; // 0x18
		::Il2CppArray<::RPG::GameCore::PixAirEquipmentPresetConfig*>* _EnemySlots; // 0x20
		::RPG::GameCore::FixPoint _PlayerHP; // 0x28
		::RPG::GameCore::FixPoint _EnemyHP; // 0x30

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::Il2CppArray<::RPG::GameCore::PixAirEquipmentPresetConfig*>* a3, ::Il2CppArray<::RPG::GameCore::PixAirEquipmentPresetConfig*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Il2CppArray<::RPG::GameCore::PixAirEquipmentPresetConfig*>*, ::Il2CppArray<::RPG::GameCore::PixAirEquipmentPresetConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCOMMANDBATTLEACTION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::PixAir::PixAirGameBattleRoundData* get_BattleRoundInfo()
		{
			return ((::RPG::Client::PixAir::PixAirGameBattleRoundData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCOMMANDBATTLEACTION_GET_BATTLEROUNDINFO_OFFSET))(this);
		}

		::Class_1_6E6FEE1E26FFD7A8* CreatePlayerPlaneSnapshot(::RPG::Client::LittleGame::PixAir::PixAirLevelController* a1)
		{
			return ((::Class_1_6E6FEE1E26FFD7A8*(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirLevelController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCOMMANDBATTLEACTION_CREATEPLAYERPLANESNAPSHOT_OFFSET))(this, a1);
		}

		::Il2CppArray<::Class_1_6E6FEE1E26FFD7A8*>* CreateEnemyPlaneSnapshots(::RPG::Client::LittleGame::PixAir::PixAirLevelController* a1)
		{
			return ((::Il2CppArray<::Class_1_6E6FEE1E26FFD7A8*>*(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirLevelController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCOMMANDBATTLEACTION_CREATEENEMYPLANESNAPSHOTS_OFFSET))(this, a1);
		}

		::System::Void ResolveBattle(::System::Boolean a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a2, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCOMMANDBATTLEACTION_RESOLVEBATTLE_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_6E6FEE1E26FFD7A8* _CreatePlaneSnapshot(::RPG::GameCore::FixPoint a1, ::Il2CppArray<::RPG::GameCore::PixAirEquipmentPresetConfig*>* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::Class_1_6E6FEE1E26FFD7A8*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Il2CppArray<::RPG::GameCore::PixAirEquipmentPresetConfig*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCOMMANDBATTLEACTION__CREATEPLANESNAPSHOT_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
