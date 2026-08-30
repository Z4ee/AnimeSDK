#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B019EAD7E127C874_1;
namespace RPG::Client { class ChimeraBattleChimeraRecordData; }
namespace RPG::Client { class ChimeraBattleWorkRecordData; }
namespace RPG::Client { class ChimeraDoingRoundData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERABATTLERECORDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C1B49F0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GETCHIMERACHIMERARECORD_OFFSET UNITYSDK_OFFSET(0x1C1B4F90)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GETCHIMERAWORKRECORD_OFFSET UNITYSDK_OFFSET(0x1C1B50B0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_CHIMERARECORDS_OFFSET UNITYSDK_OFFSET(0x1C1B5500)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_COSTTIMEINSECONDS_OFFSET UNITYSDK_OFFSET(0x1C1B5540)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_STARTBATTLETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C1B5600)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALAUTOTURNS_OFFSET UNITYSDK_OFFSET(0x1C1B55A0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALDAMAGETOWORK_OFFSET UNITYSDK_OFFSET(0x1C1B55C0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALQUICKERAUTOTURNS_OFFSET UNITYSDK_OFFSET(0x1C1B5580)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALQUICKERTURNS_OFFSET UNITYSDK_OFFSET(0x1C1B5560)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALTURNS_OFFSET UNITYSDK_OFFSET(0x1C1B55E0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_WORKRECORDS_OFFSET UNITYSDK_OFFSET(0x1C1B5520)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_CHIMERARECORDS_OFFSET UNITYSDK_OFFSET(0x1C1B5510)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_COSTTIMEINSECONDS_OFFSET UNITYSDK_OFFSET(0x1C1B5550)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_STARTBATTLETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C1B5610)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALAUTOTURNS_OFFSET UNITYSDK_OFFSET(0x1C1B55B0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALDAMAGETOWORK_OFFSET UNITYSDK_OFFSET(0x1C1B55D0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALQUICKERAUTOTURNS_OFFSET UNITYSDK_OFFSET(0x1C1B5590)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALQUICKERTURNS_OFFSET UNITYSDK_OFFSET(0x1C1B5570)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALTURNS_OFFSET UNITYSDK_OFFSET(0x1C1B55F0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_WORKRECORDS_OFFSET UNITYSDK_OFFSET(0x1C1B5530)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_TURNUPDATE_OFFSET UNITYSDK_OFFSET(0x1C1B51D0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_UPDATEDAMAGETOWORK_OFFSET UNITYSDK_OFFSET(0x1C1B54B0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_WRITETOREQ_OFFSET UNITYSDK_OFFSET(0x1C1B4F40)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B4D30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraBattleRecordData_TypeDefinitionIndex = 63512;

	class ChimeraBattleRecordData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleChimeraRecordData*>* _ChimeraRecords_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleWorkRecordData*>* _WorkRecords_k__BackingField; // 0x18
		::System::UInt32 _TotalDamageToWork_k__BackingField; // 0x20
		::System::UInt32 _CostTimeInSeconds_k__BackingField; // 0x24
		::System::Single _StartBattleTimeStamp_k__BackingField; // 0x28
		::System::UInt32 _TotalQuickerTurns_k__BackingField; // 0x2C
		::System::UInt32 _TotalQuickerAutoTurns_k__BackingField; // 0x30
		::System::UInt32 _TotalAutoTurns_k__BackingField; // 0x34
		::System::UInt32 _TotalTurns_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraBattleRecordData* Create(::RPG::Client::ChimeraDoingRoundData* a1)
		{
			return ((::RPG::Client::ChimeraBattleRecordData*(*)(::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_CREATE_OFFSET))(a1);
		}

		::System::Void WriteToReq(::Class_1_B019EAD7E127C874_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B019EAD7E127C874_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_WRITETOREQ_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraBattleChimeraRecordData* GetChimeraChimeraRecord(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraBattleChimeraRecordData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GETCHIMERACHIMERARECORD_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraBattleWorkRecordData* GetChimeraWorkRecord(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraBattleWorkRecordData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GETCHIMERAWORKRECORD_OFFSET))(this, a1);
		}

		::System::Void TurnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_TURNUPDATE_OFFSET))(this);
		}

		::System::Void UpdateDamageToWork(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_UPDATEDAMAGETOWORK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleChimeraRecordData*>* get_ChimeraRecords()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleChimeraRecordData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_CHIMERARECORDS_OFFSET))(this);
		}

		::System::Void set_ChimeraRecords(::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleChimeraRecordData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleChimeraRecordData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_CHIMERARECORDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleWorkRecordData*>* get_WorkRecords()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleWorkRecordData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_WORKRECORDS_OFFSET))(this);
		}

		::System::Void set_WorkRecords(::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleWorkRecordData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleWorkRecordData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_WORKRECORDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CostTimeInSeconds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_COSTTIMEINSECONDS_OFFSET))(this);
		}

		::System::Void set_CostTimeInSeconds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_COSTTIMEINSECONDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalQuickerTurns()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALQUICKERTURNS_OFFSET))(this);
		}

		::System::Void set_TotalQuickerTurns(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALQUICKERTURNS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalQuickerAutoTurns()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALQUICKERAUTOTURNS_OFFSET))(this);
		}

		::System::Void set_TotalQuickerAutoTurns(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALQUICKERAUTOTURNS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalAutoTurns()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALAUTOTURNS_OFFSET))(this);
		}

		::System::Void set_TotalAutoTurns(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALAUTOTURNS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalDamageToWork()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALDAMAGETOWORK_OFFSET))(this);
		}

		::System::Void set_TotalDamageToWork(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALDAMAGETOWORK_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalTurns()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALTURNS_OFFSET))(this);
		}

		::System::Void set_TotalTurns(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALTURNS_OFFSET))(this, a1);
		}

		::System::Single get_StartBattleTimeStamp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_STARTBATTLETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_StartBattleTimeStamp(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_STARTBATTLETIMESTAMP_OFFSET))(this, a1);
		}
	};
}
