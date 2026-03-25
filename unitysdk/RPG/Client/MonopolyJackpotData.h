#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4549397855D7737D;
class Class_1_7C11C261870F1926_7;
namespace RPG::Client { class ScheduleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GETCURRENTREWARDS_OFFSET UNITYSDK_OFFSET(0x9D67F70)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GETTICKETRESULTINDEX_OFFSET UNITYSDK_OFFSET(0x9D68040)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_CLOSETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D688C0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_GOTTICKETID_OFFSET UNITYSDK_OFFSET(0x9D68E30)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_HASBONUS_OFFSET UNITYSDK_OFFSET(0x9D68920)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_HASRESULT_OFFSET UNITYSDK_OFFSET(0x9D68B70)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x9D68D20)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISDRAWN_OFFSET UNITYSDK_OFFSET(0x9D68D00)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETCASHED_OFFSET UNITYSDK_OFFSET(0x9D68E70)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETGOT_OFFSET UNITYSDK_OFFSET(0x9D680E0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETSHOWN_OFFSET UNITYSDK_OFFSET(0x9D68E50)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9D689E0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_POOLID_OFFSET UNITYSDK_OFFSET(0x9D686B0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_RESULTNUMBERS_OFFSET UNITYSDK_OFFSET(0x9D68E90)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_RESULTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D68830)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x9D686D0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_UNLOCKTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D687A0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SAFESYNC_OFFSET UNITYSDK_OFFSET(0x9D66EA0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SETTICKETCASHED_OFFSET UNITYSDK_OFFSET(0x9D67F30)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SETTICKETSHOWN_OFFSET UNITYSDK_OFFSET(0x9D67EF0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_GOTTICKETID_OFFSET UNITYSDK_OFFSET(0x9D68E40)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISDRAWN_OFFSET UNITYSDK_OFFSET(0x9D68D10)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISTICKETCASHED_OFFSET UNITYSDK_OFFSET(0x9D68E80)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISTICKETSHOWN_OFFSET UNITYSDK_OFFSET(0x9D68E60)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_POOLID_OFFSET UNITYSDK_OFFSET(0x9D686C0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_RESULTNUMBERS_OFFSET UNITYSDK_OFFSET(0x9D68EA0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SYNCRESULT_OFFSET UNITYSDK_OFFSET(0x9D67BA0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SYNCTICKET_OFFSET UNITYSDK_OFFSET(0x9D67D60)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__ADDLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x9D68330)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__ADDRESULTNUMBER_OFFSET UNITYSDK_OFFSET(0x9D67E30)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D68EB0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__GETNUMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x9D68570)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__INITREWARD_OFFSET UNITYSDK_OFFSET(0x9D67020)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__INITSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9D66FB0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__ISTICKETMATCHED_OFFSET UNITYSDK_OFFSET(0x9D680F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyJackpotData_TypeDefinitionIndex = 53873;

	class MonopolyJackpotData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt64>* _ResultNumbers_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _LevelToCoinNums; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _ResultFigures; // 0x20
		::System::UInt32 _PoolID_k__BackingField; // 0x28
		::System::UInt64 _GotTicketID_k__BackingField; // 0x30
		::System::UInt32 _ActivityModuleID; // 0x38
		::System::UInt32 _ResultOffset; // 0x3C
		::System::UInt32 _UnlockOffset; // 0x40
		::System::Boolean _IsTicketShown_k__BackingField; // 0x44
		::System::Boolean _IsDrawn_k__BackingField; // 0x45
		::System::Boolean _IsTicketCashed_k__BackingField; // 0x46

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__CTOR_OFFSET))(this);
		}

		::System::Void SafeSync(::Class_1_7C11C261870F1926_7* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SAFESYNC_OFFSET))(this, info);
		}

		::System::Void SyncResult(::Class_1_7C11C261870F1926_7* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SYNCRESULT_OFFSET))(this, info);
		}

		::System::Void SyncTicket(::System::Collections::Generic::List_1<::Class_1_4549397855D7737D*>* tickets, ::System::Boolean isReissued)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4549397855D7737D*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SYNCTICKET_OFFSET))(this, tickets, isReissued);
		}

		::System::Void SetTicketShown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SETTICKETSHOWN_OFFSET))(this);
		}

		::System::Void SetTicketCashed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SETTICKETCASHED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCurrentRewards(::System::UInt32 level)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GETCURRENTREWARDS_OFFSET))(this, level);
		}

		::System::Int32 GetTicketResultIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GETTICKETRESULTINDEX_OFFSET))(this);
		}

		::System::Void _InitSchedule(::Class_1_7C11C261870F1926_7* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__INITSCHEDULE_OFFSET))(this, info);
		}

		::System::Void _InitReward(::Class_1_7C11C261870F1926_7* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__INITREWARD_OFFSET))(this, info);
		}

		::System::Void _AddLevelReward(::System::UInt32 progress, ::System::UInt32 coinNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__ADDLEVELREWARD_OFFSET))(this, progress, coinNum);
		}

		::System::Boolean _IsTicketMatched(::System::UInt64 ticketNumber, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__ISTICKETMATCHED_OFFSET))(this, ticketNumber, index);
		}

		::System::Void _AddResultNumber(::System::String* numberString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__ADDRESULTNUMBER_OFFSET))(this, numberString);
		}

		::System::Int32 _GetNumberCount(::System::String* str)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__GETNUMBERCOUNT_OFFSET))(this, str);
		}

		::System::UInt32 get_PoolID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_POOLID_OFFSET))(this);
		}

		::System::Void set_PoolID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_POOLID_OFFSET))(this, value);
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

		::System::Void set_IsDrawn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISDRAWN_OFFSET))(this, value);
		}

		::System::Boolean get_IsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISCLOSED_OFFSET))(this);
		}

		::System::UInt64 get_GotTicketID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_GOTTICKETID_OFFSET))(this);
		}

		::System::Void set_GotTicketID(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_GOTTICKETID_OFFSET))(this, value);
		}

		::System::Boolean get_IsTicketGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETGOT_OFFSET))(this);
		}

		::System::Boolean get_IsTicketShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETSHOWN_OFFSET))(this);
		}

		::System::Void set_IsTicketShown(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISTICKETSHOWN_OFFSET))(this, value);
		}

		::System::Boolean get_IsTicketCashed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETCASHED_OFFSET))(this);
		}

		::System::Void set_IsTicketCashed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISTICKETCASHED_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt64>* get_ResultNumbers()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_RESULTNUMBERS_OFFSET))(this);
		}

		::System::Void set_ResultNumbers(::System::Collections::Generic::List_1<::System::UInt64>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_RESULTNUMBERS_OFFSET))(this, value);
		}
	};
}
