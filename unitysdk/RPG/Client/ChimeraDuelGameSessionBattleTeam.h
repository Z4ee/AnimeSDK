#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraDuelChallengeTeam; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_CREATEAIENEMYTEAM_1_OFFSET UNITYSDK_OFFSET(0x93909D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_CREATEAIENEMYTEAM_OFFSET UNITYSDK_OFFSET(0x939D610)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_CREATEALLYTEAM_OFFSET UNITYSDK_OFFSET(0x93905A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0x939DB30)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_HPREMAIN_OFFSET UNITYSDK_OFFSET(0x939DC30)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0x939DB90)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_PLAYERICON_OFFSET UNITYSDK_OFFSET(0x939DBF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x939DBD0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_RANKID_OFFSET UNITYSDK_OFFSET(0x939DBB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_SUMMONQUEUE_OFFSET UNITYSDK_OFFSET(0x939DB50)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x939DB70)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0x939DC10)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0x939DB40)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_HPREMAIN_OFFSET UNITYSDK_OFFSET(0x939DC40)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_MASTERID_OFFSET UNITYSDK_OFFSET(0x939DBA0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_PLAYERICON_OFFSET UNITYSDK_OFFSET(0x939DC00)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x939DBE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_RANKID_OFFSET UNITYSDK_OFFSET(0x939DBC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_SUMMONQUEUE_OFFSET UNITYSDK_OFFSET(0x939DB60)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x939DB80)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0x939DC20)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x939DC50)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionBattleTeam_TypeDefinitionIndex = 51384;

	class ChimeraDuelGameSessionBattleTeam : public ::System::Object
	{
	public:
		::System::String* _PlayerIcon_k__BackingField; // 0x10
		::System::String* RankIcon; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _Chimeras_k__BackingField; // 0x20
		::System::String* _PlayerName_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _SummonQueue_k__BackingField; // 0x30
		::RPG::Client::TextID RankName; // 0x38
		::System::UInt32 _RankID_k__BackingField; // 0x48
		::System::Int32 _WinCount_k__BackingField; // 0x4C
		::RPG::GameCore::ChimeraDuelTeamType _TeamType_k__BackingField; // 0x50
		::System::UInt32 _MasterID_k__BackingField; // 0x54
		::System::Int32 _HPRemain_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_Chimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_CHIMERAS_OFFSET))(this);
		}

		::System::Void set_Chimeras(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_CHIMERAS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_SummonQueue()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_SUMMONQUEUE_OFFSET))(this);
		}

		::System::Void set_SummonQueue(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_SUMMONQUEUE_OFFSET))(this, value);
		}

		::RPG::GameCore::ChimeraDuelTeamType get_TeamType()
		{
			return ((::RPG::GameCore::ChimeraDuelTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_TEAMTYPE_OFFSET))(this);
		}

		::System::Void set_TeamType(::RPG::GameCore::ChimeraDuelTeamType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_TEAMTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_MASTERID_OFFSET))(this);
		}

		::System::Void set_MasterID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_MASTERID_OFFSET))(this, value);
		}

		::System::UInt32 get_RankID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_RANKID_OFFSET))(this);
		}

		::System::Void set_RankID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_RANKID_OFFSET))(this, value);
		}

		::System::String* get_PlayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_PLAYERNAME_OFFSET))(this);
		}

		::System::Void set_PlayerName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_PLAYERNAME_OFFSET))(this, value);
		}

		::System::String* get_PlayerIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_PLAYERICON_OFFSET))(this);
		}

		::System::Void set_PlayerIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_PLAYERICON_OFFSET))(this, value);
		}

		::System::Int32 get_WinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_WINCOUNT_OFFSET))(this);
		}

		::System::Void set_WinCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_WINCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_HPRemain()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_GET_HPREMAIN_OFFSET))(this);
		}

		::System::Void set_HPRemain(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_SET_HPREMAIN_OFFSET))(this, value);
		}

		static ::RPG::Client::ChimeraDuelGameSessionBattleTeam* CreateAllyTeam(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* chimeras, ::System::UInt32 masterID)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattleTeam*(*)(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_CREATEALLYTEAM_OFFSET))(chimeras, masterID);
		}

		static ::RPG::Client::ChimeraDuelGameSessionBattleTeam* CreateAIEnemyTeam(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* chimeras, ::System::UInt32 masterID)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattleTeam*(*)(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_CREATEAIENEMYTEAM_OFFSET))(chimeras, masterID);
		}

		static ::RPG::Client::ChimeraDuelGameSessionBattleTeam* CreateAIEnemyTeam_1(::RPG::Client::IChimeraDuelChallengeTeam* enemy)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattleTeam*(*)(::RPG::Client::IChimeraDuelChallengeTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLETEAM_CREATEAIENEMYTEAM_1_OFFSET))(enemy);
		}
	};
}
