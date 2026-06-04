#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneStatistics; }

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC3B59F0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_GET_ENEMYSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC3B5AD0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xC3B5A90)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_GET_PLAYERSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC3B5AB0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_SET_ENEMYSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC3B5AE0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xC3B5AA0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_SET_PLAYERSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC3B5AC0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B5A80)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBattleSettlementData_TypeDefinitionIndex = 73681;

	class PixAirBattleSettlementData : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* _PlayerStatistics_k__BackingField; // 0x10
		::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* _EnemyStatistics_k__BackingField; // 0x18
		::System::Boolean _IsWin_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirBattleSettlementData* Create(::System::Boolean a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a2, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a3)
		{
			return ((::RPG::Client::PixAir::PixAirBattleSettlementData*(*)(::System::Boolean, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_SET_ISWIN_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* get_PlayerStatistics()
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_GET_PLAYERSTATISTICS_OFFSET))(this);
		}

		::System::Void set_PlayerStatistics(::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_SET_PLAYERSTATISTICS_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* get_EnemyStatistics()
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_GET_ENEMYSTATISTICS_OFFSET))(this);
		}

		::System::Void set_EnemyStatistics(::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTDATA_SET_ENEMYSTATISTICS_OFFSET))(this, a1);
		}
	};
}
