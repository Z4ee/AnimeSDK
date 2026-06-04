#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C27C9F2BD1AB8E7E;
namespace RPG::Client { class ChimeraBattleRecordData; }
namespace RPG::Client { class ChimeraTeamWorkSettleData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADOINGROUNDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB672830)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB672DB0)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_GETDEADCHIMERACNT_OFFSET UNITYSDK_OFFSET(0xB673090)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_GETFINISHEDWORKVALUE_OFFSET UNITYSDK_OFFSET(0xB672EA0)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_ALLWORKIDS_OFFSET UNITYSDK_OFFSET(0xB670570)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_BEFOREBATTLEFINISHEDWORKVAL_OFFSET UNITYSDK_OFFSET(0xB6727D0)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_CHIMERAIDS_OFFSET UNITYSDK_OFFSET(0xB672750)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_CHIMERAINBATTLEATTRIBUTEDICT_OFFSET UNITYSDK_OFFSET(0xB672810)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_CHIMERATEAMWORKSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xB6730F0)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_FINISHEDWORKIDS_OFFSET UNITYSDK_OFFSET(0xB6727F0)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_LEADERCHIMERAID_OFFSET UNITYSDK_OFFSET(0xB672770)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_NEWWORKINDEX_OFFSET UNITYSDK_OFFSET(0xB6727B0)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_RECORD_OFFSET UNITYSDK_OFFSET(0xB673110)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_WORKROUNDID_OFFSET UNITYSDK_OFFSET(0xB672790)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_BEFOREBATTLEFINISHEDWORKVAL_OFFSET UNITYSDK_OFFSET(0xB6727E0)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_CHIMERAIDS_OFFSET UNITYSDK_OFFSET(0xB672760)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_CHIMERAINBATTLEATTRIBUTEDICT_OFFSET UNITYSDK_OFFSET(0xB672820)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_CHIMERATEAMWORKSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xB673100)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_FINISHEDWORKIDS_OFFSET UNITYSDK_OFFSET(0xB672800)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_LEADERCHIMERAID_OFFSET UNITYSDK_OFFSET(0xB672780)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_NEWWORKINDEX_OFFSET UNITYSDK_OFFSET(0xB6727C0)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_RECORD_OFFSET UNITYSDK_OFFSET(0xB673120)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_WORKROUNDID_OFFSET UNITYSDK_OFFSET(0xB6727A0)
#define RPG_CLIENT_CHIMERADOINGROUNDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB6728F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDoingRoundData_TypeDefinitionIndex = 59442;

	class ChimeraDoingRoundData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedWorkIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ChimeraIDs_k__BackingField; // 0x18
		::RPG::Client::ChimeraTeamWorkSettleData* _ChimeraTeamWorkSettleData_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C27C9F2BD1AB8E7E*>* _ChimeraInBattleAttributeDict_k__BackingField; // 0x28
		::RPG::Client::ChimeraBattleRecordData* _Record_k__BackingField; // 0x30
		::System::UInt32 _BeforeBattleFinishedWorkVal_k__BackingField; // 0x38
		::System::Int32 _NewWorkIndex_k__BackingField; // 0x3C
		::System::UInt32 _LeaderChimeraID_k__BackingField; // 0x40
		::System::UInt32 _WorkRoundID_k__BackingField; // 0x44

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ChimeraIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_CHIMERAIDS_OFFSET))(this);
		}

		::System::Void set_ChimeraIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_CHIMERAIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeaderChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_LEADERCHIMERAID_OFFSET))(this);
		}

		::System::Void set_LeaderChimeraID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_LEADERCHIMERAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorkRoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_WORKROUNDID_OFFSET))(this);
		}

		::System::Void set_WorkRoundID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_WORKROUNDID_OFFSET))(this, a1);
		}

		::System::Int32 get_NewWorkIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_NEWWORKINDEX_OFFSET))(this);
		}

		::System::Void set_NewWorkIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_NEWWORKINDEX_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_AllWorkIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_ALLWORKIDS_OFFSET))(this);
		}

		::System::UInt32 get_BeforeBattleFinishedWorkVal()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_BEFOREBATTLEFINISHEDWORKVAL_OFFSET))(this);
		}

		::System::Void set_BeforeBattleFinishedWorkVal(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_BEFOREBATTLEFINISHEDWORKVAL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedWorkIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_FINISHEDWORKIDS_OFFSET))(this);
		}

		::System::Void set_FinishedWorkIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_FINISHEDWORKIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C27C9F2BD1AB8E7E*>* get_ChimeraInBattleAttributeDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C27C9F2BD1AB8E7E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_CHIMERAINBATTLEATTRIBUTEDICT_OFFSET))(this);
		}

		::System::Void set_ChimeraInBattleAttributeDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C27C9F2BD1AB8E7E*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C27C9F2BD1AB8E7E*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_CHIMERAINBATTLEATTRIBUTEDICT_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChimeraDoingRoundData* Create(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::ChimeraDoingRoundData*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 GetFinishedWorkValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_GETFINISHEDWORKVALUE_OFFSET))(this);
		}

		::System::Int32 GetDeadChimeraCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_GETDEADCHIMERACNT_OFFSET))(this);
		}

		::RPG::Client::ChimeraTeamWorkSettleData* get_ChimeraTeamWorkSettleData()
		{
			return ((::RPG::Client::ChimeraTeamWorkSettleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_CHIMERATEAMWORKSETTLEDATA_OFFSET))(this);
		}

		::System::Void set_ChimeraTeamWorkSettleData(::RPG::Client::ChimeraTeamWorkSettleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraTeamWorkSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_CHIMERATEAMWORKSETTLEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraBattleRecordData* get_Record()
		{
			return ((::RPG::Client::ChimeraBattleRecordData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_GET_RECORD_OFFSET))(this);
		}

		::System::Void set_Record(::RPG::Client::ChimeraBattleRecordData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraBattleRecordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADOINGROUNDDATA_SET_RECORD_OFFSET))(this, a1);
		}
	};
}
