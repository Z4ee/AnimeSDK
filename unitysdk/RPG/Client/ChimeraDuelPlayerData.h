#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0319A031DCA9B495_8;
class Class_1_1DC52A0BEDF50632_2;
class Class_1_6FC4D75D938BC053_1;
namespace RPG::Client { class ChimeraDuelPlayerRankData; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELPLAYERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB69D140)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_GETDEFENCETEAM_OFFSET UNITYSDK_OFFSET(0xB69DA20)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_GETFINISHEDTRIALCOUNT_OFFSET UNITYSDK_OFFSET(0xB69DB00)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_GETTOTALTRIALCOUNT_OFFSET UNITYSDK_OFFSET(0xB69DAB0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_GET_DEFENCESLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB69DDB0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_GET_NEXTGAMEID_OFFSET UNITYSDK_OFFSET(0xB69DD90)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xB69D4B0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_ISMASTERCHALLENGEFINISHED_OFFSET UNITYSDK_OFFSET(0xB695970)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SET_DEFENCESLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB69DDC0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SET_NEXTGAMEID_OFFSET UNITYSDK_OFFSET(0xB69DDA0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCDEFENCESLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB699640)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCFINISHEDMASTERCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xB699D50)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCNEXTGAMEID_OFFSET UNITYSDK_OFFSET(0xB69B3B0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCPVPTEAM_1_OFFSET UNITYSDK_OFFSET(0xB6999B0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCPVPTEAM_OFFSET UNITYSDK_OFFSET(0xB6995D0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB698A20)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB69CB60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelPlayerData_TypeDefinitionIndex = 59245;

	class ChimeraDuelPlayerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedMasterChallengeIDList; // 0x10
		::RPG::Client::ChimeraDuelPlayerRankData* _Rank_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* PlayerSaveTeams; // 0x20
		::System::Int32 _DefenceSlotIndex_k__BackingField; // 0x28
		::System::UInt32 _NextGameID_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelPlayerRankData* get_Rank()
		{
			return ((::RPG::Client::ChimeraDuelPlayerRankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_1DC52A0BEDF50632_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1DC52A0BEDF50632_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncNextGameID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCNEXTGAMEID_OFFSET))(this, a1);
		}

		::System::Void SyncPvpTeam(::Class_1_0319A031DCA9B495_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0319A031DCA9B495_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCPVPTEAM_OFFSET))(this, a1);
		}

		::System::Void SyncPvpTeam_1(::Class_1_6FC4D75D938BC053_1* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_1*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCPVPTEAM_1_OFFSET))(this, a1, a2);
		}

		::System::Void SyncDefenceSlotIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCDEFENCESLOTINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelPvpTeamSnapshot* GetDefenceTeam()
		{
			return ((::RPG::Client::ChimeraDuelPvpTeamSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_GETDEFENCETEAM_OFFSET))(this);
		}

		::System::Void SyncFinishedMasterChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCFINISHEDMASTERCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Boolean IsMasterChallengeFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_ISMASTERCHALLENGEFINISHED_OFFSET))(this, a1);
		}

		::System::Int32 GetTotalTrialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_GETTOTALTRIALCOUNT_OFFSET))(this);
		}

		::System::Int32 GetFinishedTrialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_GETFINISHEDTRIALCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_NextGameID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_GET_NEXTGAMEID_OFFSET))(this);
		}

		::System::Void set_NextGameID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SET_NEXTGAMEID_OFFSET))(this, a1);
		}

		::System::Int32 get_DefenceSlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_GET_DEFENCESLOTINDEX_OFFSET))(this);
		}

		::System::Void set_DefenceSlotIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SET_DEFENCESLOTINDEX_OFFSET))(this, a1);
		}
	};
}
