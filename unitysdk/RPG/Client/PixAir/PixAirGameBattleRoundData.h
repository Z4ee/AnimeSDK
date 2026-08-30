#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirBattleDropDisplayData; }
namespace RPG::Client::PixAir { class PixAirBattleRoundEnemyData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C831170)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_GET_BATTLEID_OFFSET UNITYSDK_OFFSET(0x1C849D60)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_GET_ENEMYDATA_OFFSET UNITYSDK_OFFSET(0x1C849D80)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_GET_ENEMYHEALTHPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C849DA0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_GET_LOOTCOINICONPATH_OFFSET UNITYSDK_OFFSET(0x1C849E00)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_GET_LOOTCOINNUM_OFFSET UNITYSDK_OFFSET(0x1C849DE0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_GET_PLAYERHEALTHPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C849DC0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_SET_BATTLEID_OFFSET UNITYSDK_OFFSET(0x1C849D70)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_SET_ENEMYDATA_OFFSET UNITYSDK_OFFSET(0x1C849D90)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_SET_ENEMYHEALTHPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C849DB0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_SET_LOOTCOINICONPATH_OFFSET UNITYSDK_OFFSET(0x1C849E10)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_SET_LOOTCOINNUM_OFFSET UNITYSDK_OFFSET(0x1C849DF0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_SET_PLAYERHEALTHPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C849DD0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C849880)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA__INIT_OFFSET UNITYSDK_OFFSET(0x1C8498A0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA__NORMALIZEHEALTHPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C849C60)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameBattleRoundData_TypeDefinitionIndex = 78836;

	class PixAirGameBattleRoundData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirBattleDropDisplayData*>* DropDisplayDataList; // 0x10
		::System::String* _LootCoinIconPath_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* EnemyList; // 0x20
		::RPG::Client::PixAir::PixAirBattleRoundEnemyData* _EnemyData_k__BackingField; // 0x28
		::RPG::GameCore::FixPoint _PlayerHealthPercentage_k__BackingField; // 0x30
		::RPG::GameCore::FixPoint _EnemyHealthPercentage_k__BackingField; // 0x38
		::System::UInt32 _BattleID_k__BackingField; // 0x40
		::System::UInt32 _LootCoinNum_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirGameBattleRoundData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirGameBattleRoundData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA__INIT_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint _NormalizeHealthPercentage(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA__NORMALIZEHEALTHPERCENTAGE_OFFSET))(a1);
		}

		::System::UInt32 get_BattleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_GET_BATTLEID_OFFSET))(this);
		}

		::System::Void set_BattleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_SET_BATTLEID_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirBattleRoundEnemyData* get_EnemyData()
		{
			return ((::RPG::Client::PixAir::PixAirBattleRoundEnemyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_GET_ENEMYDATA_OFFSET))(this);
		}

		::System::Void set_EnemyData(::RPG::Client::PixAir::PixAirBattleRoundEnemyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirBattleRoundEnemyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_SET_ENEMYDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_EnemyHealthPercentage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_GET_ENEMYHEALTHPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_EnemyHealthPercentage(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_SET_ENEMYHEALTHPERCENTAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_PlayerHealthPercentage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_GET_PLAYERHEALTHPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_PlayerHealthPercentage(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_SET_PLAYERHEALTHPERCENTAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_LootCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_GET_LOOTCOINNUM_OFFSET))(this);
		}

		::System::Void set_LootCoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_SET_LOOTCOINNUM_OFFSET))(this, a1);
		}

		::System::String* get_LootCoinIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_GET_LOOTCOINICONPATH_OFFSET))(this);
		}

		::System::Void set_LootCoinIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEBATTLEROUNDDATA_SET_LOOTCOINICONPATH_OFFSET))(this, a1);
		}
	};
}
