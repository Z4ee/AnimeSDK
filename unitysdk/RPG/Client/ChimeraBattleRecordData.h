#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_696E1EF98B970E06;
namespace RPG::Client { class ChimeraBattleChimeraRecordData; }
namespace RPG::Client { class ChimeraBattleWorkRecordData; }
namespace RPG::Client { class ChimeraDoingRoundData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERABATTLERECORDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x938A7B0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GETCHIMERACHIMERARECORD_OFFSET UNITYSDK_OFFSET(0x938ACC0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GETCHIMERAWORKRECORD_OFFSET UNITYSDK_OFFSET(0x938AE10)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_CHIMERARECORDS_OFFSET UNITYSDK_OFFSET(0x938B290)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_COSTTIMEINSECONDS_OFFSET UNITYSDK_OFFSET(0x938B2D0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_STARTBATTLETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x938B390)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALAUTOTURNS_OFFSET UNITYSDK_OFFSET(0x938B330)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALDAMAGETOWORK_OFFSET UNITYSDK_OFFSET(0x938B350)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALQUICKERAUTOTURNS_OFFSET UNITYSDK_OFFSET(0x938B310)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALQUICKERTURNS_OFFSET UNITYSDK_OFFSET(0x938B2F0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALTURNS_OFFSET UNITYSDK_OFFSET(0x938B370)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_WORKRECORDS_OFFSET UNITYSDK_OFFSET(0x938B2B0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_CHIMERARECORDS_OFFSET UNITYSDK_OFFSET(0x938B2A0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_COSTTIMEINSECONDS_OFFSET UNITYSDK_OFFSET(0x938B2E0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_STARTBATTLETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x938B3A0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALAUTOTURNS_OFFSET UNITYSDK_OFFSET(0x938B340)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALDAMAGETOWORK_OFFSET UNITYSDK_OFFSET(0x938B360)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALQUICKERAUTOTURNS_OFFSET UNITYSDK_OFFSET(0x938B320)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALQUICKERTURNS_OFFSET UNITYSDK_OFFSET(0x938B300)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALTURNS_OFFSET UNITYSDK_OFFSET(0x938B380)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_WORKRECORDS_OFFSET UNITYSDK_OFFSET(0x938B2C0)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_TURNUPDATE_OFFSET UNITYSDK_OFFSET(0x938AF60)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_UPDATEDAMAGETOWORK_OFFSET UNITYSDK_OFFSET(0x938B240)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA_WRITETOREQ_OFFSET UNITYSDK_OFFSET(0x938AC70)
#define RPG_CLIENT_CHIMERABATTLERECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x938AA60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraBattleRecordData_TypeDefinitionIndex = 51520;

	class ChimeraBattleRecordData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleChimeraRecordData*>* _ChimeraRecords_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleWorkRecordData*>* _WorkRecords_k__BackingField; // 0x18
		::System::UInt32 _TotalQuickerTurns_k__BackingField; // 0x20
		::System::UInt32 _CostTimeInSeconds_k__BackingField; // 0x24
		::System::UInt32 _TotalTurns_k__BackingField; // 0x28
		::System::UInt32 _TotalQuickerAutoTurns_k__BackingField; // 0x2C
		::System::UInt32 _TotalAutoTurns_k__BackingField; // 0x30
		::System::UInt32 _TotalDamageToWork_k__BackingField; // 0x34
		::System::Single _StartBattleTimeStamp_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraBattleRecordData* Create(::RPG::Client::ChimeraDoingRoundData* doingRoundData)
		{
			return ((::RPG::Client::ChimeraBattleRecordData*(*)(::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_CREATE_OFFSET))(doingRoundData);
		}

		::System::Void WriteToReq(::Class_1_696E1EF98B970E06* sttRef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_696E1EF98B970E06*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_WRITETOREQ_OFFSET))(this, sttRef);
		}

		::RPG::Client::ChimeraBattleChimeraRecordData* GetChimeraChimeraRecord(::System::UInt32 chimeraID)
		{
			return ((::RPG::Client::ChimeraBattleChimeraRecordData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GETCHIMERACHIMERARECORD_OFFSET))(this, chimeraID);
		}

		::RPG::Client::ChimeraBattleWorkRecordData* GetChimeraWorkRecord(::System::UInt32 workID)
		{
			return ((::RPG::Client::ChimeraBattleWorkRecordData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GETCHIMERAWORKRECORD_OFFSET))(this, workID);
		}

		::System::Void TurnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_TURNUPDATE_OFFSET))(this);
		}

		::System::Void UpdateDamageToWork(::System::UInt32 damage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_UPDATEDAMAGETOWORK_OFFSET))(this, damage);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleChimeraRecordData*>* get_ChimeraRecords()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleChimeraRecordData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_CHIMERARECORDS_OFFSET))(this);
		}

		::System::Void set_ChimeraRecords(::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleChimeraRecordData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleChimeraRecordData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_CHIMERARECORDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleWorkRecordData*>* get_WorkRecords()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleWorkRecordData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_WORKRECORDS_OFFSET))(this);
		}

		::System::Void set_WorkRecords(::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleWorkRecordData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattleWorkRecordData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_WORKRECORDS_OFFSET))(this, value);
		}

		::System::UInt32 get_CostTimeInSeconds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_COSTTIMEINSECONDS_OFFSET))(this);
		}

		::System::Void set_CostTimeInSeconds(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_COSTTIMEINSECONDS_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalQuickerTurns()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALQUICKERTURNS_OFFSET))(this);
		}

		::System::Void set_TotalQuickerTurns(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALQUICKERTURNS_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalQuickerAutoTurns()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALQUICKERAUTOTURNS_OFFSET))(this);
		}

		::System::Void set_TotalQuickerAutoTurns(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALQUICKERAUTOTURNS_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalAutoTurns()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALAUTOTURNS_OFFSET))(this);
		}

		::System::Void set_TotalAutoTurns(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALAUTOTURNS_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalDamageToWork()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALDAMAGETOWORK_OFFSET))(this);
		}

		::System::Void set_TotalDamageToWork(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALDAMAGETOWORK_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalTurns()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_TOTALTURNS_OFFSET))(this);
		}

		::System::Void set_TotalTurns(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_TOTALTURNS_OFFSET))(this, value);
		}

		::System::Single get_StartBattleTimeStamp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_GET_STARTBATTLETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_StartBattleTimeStamp(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLERECORDDATA_SET_STARTBATTLETIMESTAMP_OFFSET))(this, value);
		}
	};
}
