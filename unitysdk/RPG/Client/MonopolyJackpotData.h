#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_126415C60CEDDA17;
class Class_1_21DCD4640D389503_32;
namespace RPG::Client { class ScheduleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GETCURRENTREWARDS_OFFSET UNITYSDK_OFFSET(0xC17AFB0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GETTICKETRESULTINDEX_OFFSET UNITYSDK_OFFSET(0xC17B0B0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_CLOSETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC17B840)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_GOTTICKETID_OFFSET UNITYSDK_OFFSET(0xC17BE40)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_HASBONUS_OFFSET UNITYSDK_OFFSET(0xC17B8A0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_HASRESULT_OFFSET UNITYSDK_OFFSET(0xC17BB80)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0xC17BD30)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISDRAWN_OFFSET UNITYSDK_OFFSET(0xC17BD10)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETCASHED_OFFSET UNITYSDK_OFFSET(0xC17BE80)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETGOT_OFFSET UNITYSDK_OFFSET(0xC17B150)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETSHOWN_OFFSET UNITYSDK_OFFSET(0xC17BE60)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC17B9F0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_POOLID_OFFSET UNITYSDK_OFFSET(0xC17B630)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_RESULTNUMBERS_OFFSET UNITYSDK_OFFSET(0xC17BEA0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_RESULTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC17B7B0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xC17B650)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_UNLOCKTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC17B720)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SAFESYNC_OFFSET UNITYSDK_OFFSET(0xC179F10)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SETTICKETCASHED_OFFSET UNITYSDK_OFFSET(0xC17AF70)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SETTICKETSHOWN_OFFSET UNITYSDK_OFFSET(0xC17AF30)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_GOTTICKETID_OFFSET UNITYSDK_OFFSET(0xC17BE50)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISDRAWN_OFFSET UNITYSDK_OFFSET(0xC17BD20)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISTICKETCASHED_OFFSET UNITYSDK_OFFSET(0xC17BE90)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISTICKETSHOWN_OFFSET UNITYSDK_OFFSET(0xC17BE70)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_POOLID_OFFSET UNITYSDK_OFFSET(0xC17B640)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_RESULTNUMBERS_OFFSET UNITYSDK_OFFSET(0xC17BEB0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SYNCRESULT_OFFSET UNITYSDK_OFFSET(0xC17ABF0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SYNCTICKET_OFFSET UNITYSDK_OFFSET(0xC17AD50)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__ADDLEVELREWARD_OFFSET UNITYSDK_OFFSET(0xC17B370)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__ADDRESULTNUMBER_OFFSET UNITYSDK_OFFSET(0xC17AE10)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC17BEC0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__GETNUMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xC17B4F0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__INITREWARD_OFFSET UNITYSDK_OFFSET(0xC17A090)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__INITSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC17A020)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__ISTICKETMATCHED_OFFSET UNITYSDK_OFFSET(0xC17B160)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyJackpotData_TypeDefinitionIndex = 61951;

	class MonopolyJackpotData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _ResultFigures; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _LevelToCoinNums; // 0x18
		::System::Collections::Generic::List_1<::System::UInt64>* _ResultNumbers_k__BackingField; // 0x20
		::System::UInt32 _ActivityModuleID; // 0x28
		::System::UInt32 _ResultOffset; // 0x2C
		::System::UInt64 _GotTicketID_k__BackingField; // 0x30
		::System::UInt32 _PoolID_k__BackingField; // 0x38
		::System::Boolean _IsTicketShown_k__BackingField; // 0x3C
		::System::Boolean _IsTicketCashed_k__BackingField; // 0x3D
		::System::Boolean _IsDrawn_k__BackingField; // 0x3E
		::System::UInt32 _UnlockOffset; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__CTOR_OFFSET))(this);
		}

		::System::Void SafeSync(::Class_1_21DCD4640D389503_32* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SAFESYNC_OFFSET))(this, a1);
		}

		::System::Void SyncResult(::Class_1_21DCD4640D389503_32* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SYNCRESULT_OFFSET))(this, a1);
		}

		::System::Void SyncTicket(::System::Collections::Generic::List_1<::Class_1_126415C60CEDDA17*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_126415C60CEDDA17*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SYNCTICKET_OFFSET))(this, a1, a2);
		}

		::System::Void SetTicketShown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SETTICKETSHOWN_OFFSET))(this);
		}

		::System::Void SetTicketCashed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SETTICKETCASHED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCurrentRewards(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GETCURRENTREWARDS_OFFSET))(this, a1);
		}

		::System::Int32 GetTicketResultIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GETTICKETRESULTINDEX_OFFSET))(this);
		}

		::System::Void _InitSchedule(::Class_1_21DCD4640D389503_32* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__INITSCHEDULE_OFFSET))(this, a1);
		}

		::System::Void _InitReward(::Class_1_21DCD4640D389503_32* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__INITREWARD_OFFSET))(this, a1);
		}

		::System::Void _AddLevelReward(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__ADDLEVELREWARD_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsTicketMatched(::System::UInt64 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__ISTICKETMATCHED_OFFSET))(this, a1, a2);
		}

		::System::Void _AddResultNumber(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__ADDRESULTNUMBER_OFFSET))(this, a1);
		}

		::System::Int32 _GetNumberCount(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__GETNUMBERCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_PoolID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_POOLID_OFFSET))(this);
		}

		::System::Void set_PoolID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_POOLID_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* get_Schedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_SCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_UnlockTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_UNLOCKTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_ResultTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_RESULTTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_CloseTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_CLOSETIMESTAMP_OFFSET))(this);
		}

		::System::Boolean get_HasBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_HASBONUS_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_HasResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_HASRESULT_OFFSET))(this);
		}

		::System::Boolean get_IsDrawn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISDRAWN_OFFSET))(this);
		}

		::System::Void set_IsDrawn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISDRAWN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISCLOSED_OFFSET))(this);
		}

		::System::UInt64 get_GotTicketID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_GOTTICKETID_OFFSET))(this);
		}

		::System::Void set_GotTicketID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_GOTTICKETID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTicketGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETGOT_OFFSET))(this);
		}

		::System::Boolean get_IsTicketShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETSHOWN_OFFSET))(this);
		}

		::System::Void set_IsTicketShown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISTICKETSHOWN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTicketCashed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETCASHED_OFFSET))(this);
		}

		::System::Void set_IsTicketCashed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISTICKETCASHED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt64>* get_ResultNumbers()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_RESULTNUMBERS_OFFSET))(this);
		}

		::System::Void set_ResultNumbers(::System::Collections::Generic::List_1<::System::UInt64>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_RESULTNUMBERS_OFFSET))(this, a1);
		}
	};
}
