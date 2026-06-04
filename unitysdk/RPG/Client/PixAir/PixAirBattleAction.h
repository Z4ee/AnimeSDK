#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"

class Class_1_6E6FEE1E26FFD7A8;
class Class_1_D17272E82AE804C2_688;
namespace RPG::Client::LittleGame::PixAir { class PixAirLevelController; }
namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneStatistics; }
namespace RPG::Client::PixAir { class PixAirGameBattleRoundData; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_CREATEENEMYPLANESNAPSHOTS_OFFSET UNITYSDK_OFFSET(0xC3B3F20)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_CREATEPLAYERPLANESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xC3B3B20)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xC3B33D0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_FINISH_OFFSET UNITYSDK_OFFSET(0xC3B3830)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xC3B37C0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_GET_BATTLEROUNDINFO_OFFSET UNITYSDK_OFFSET(0xC3B4160)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0xC3B4170)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_RESOLVEBATTLE_1_OFFSET UNITYSDK_OFFSET(0xC3B38F0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_RESOLVEBATTLE_OFFSET UNITYSDK_OFFSET(0xC3B38A0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_START_OFFSET UNITYSDK_OFFSET(0xC3B3370)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B3110)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION__DOENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xC3B36D0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION__REPORTPIXAIRWAVEBATTLESTART_OFFSET UNITYSDK_OFFSET(0xC3B3420)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION___IFIXBASEPROXY_FINISH_OFFSET UNITYSDK_OFFSET(0xC3B4B50)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION___IFIXBASEPROXY_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xC3B4AF0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0xC3B4A90)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBattleAction_TypeDefinitionIndex = 73604;

	class PixAirBattleAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::RPG::Client::PixAir::PixAirGameBattleRoundData* _BattleRoundInfo_k__BackingField; // 0x18
		::System::Int32 Life; // 0x20
		::System::Int32 MaxLife; // 0x24

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_D17272E82AE804C2_688* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D17272E82AE804C2_688*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_START_OFFSET))(this);
		}

		::System::Void EnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_ENTERBATTLE_OFFSET))(this);
		}

		::System::String* GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_GETCONTENTKEY_OFFSET))(this);
		}

		::System::Void _DoEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION__DOENTERBATTLE_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_FINISH_OFFSET))(this);
		}

		::System::Void ResolveBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_RESOLVEBATTLE_OFFSET))(this, a1);
		}

		::System::Void ResolveBattle_1(::System::Boolean a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a2, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_RESOLVEBATTLE_1_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_6E6FEE1E26FFD7A8* CreatePlayerPlaneSnapshot(::RPG::Client::LittleGame::PixAir::PixAirLevelController* a1)
		{
			return ((::Class_1_6E6FEE1E26FFD7A8*(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirLevelController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_CREATEPLAYERPLANESNAPSHOT_OFFSET))(this, a1);
		}

		::Il2CppArray<::Class_1_6E6FEE1E26FFD7A8*>* CreateEnemyPlaneSnapshots(::RPG::Client::LittleGame::PixAir::PixAirLevelController* a1)
		{
			return ((::Il2CppArray<::Class_1_6E6FEE1E26FFD7A8*>*(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirLevelController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_CREATEENEMYPLANESNAPSHOTS_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirGameBattleRoundData* get_BattleRoundInfo()
		{
			return ((::RPG::Client::PixAir::PixAirGameBattleRoundData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_GET_BATTLEROUNDINFO_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION_GET_NODECASE_OFFSET))(this);
		}

		::System::Void _ReportPixAirWaveBattleStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION__REPORTPIXAIRWAVEBATTLESTART_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION___IFIXBASEPROXY_START_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION___IFIXBASEPROXY_GETCONTENTKEY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEACTION___IFIXBASEPROXY_FINISH_OFFSET))(this);
		}
	};
}
