#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/ScheduleData_ScheduleDataUniqueKey.h"
#include "unitysdk/Struct_2_4D3F8674ABF7F9DE.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SCHEDULEDATA_APPENDCANDIDATE_OFFSET UNITYSDK_OFFSET(0x1AF688B0)
#define RPG_CLIENT_SCHEDULEDATA_BETWEEN_OFFSET UNITYSDK_OFFSET(0x1AF685F0)
#define RPG_CLIENT_SCHEDULEDATA_CANDIDATECOMPARISON_OFFSET UNITYSDK_OFFSET(0x1AF68D70)
#define RPG_CLIENT_SCHEDULEDATA_CONTAINSSCHEDULEDATACANDIDATE_OFFSET UNITYSDK_OFFSET(0x1AF68650)
#define RPG_CLIENT_SCHEDULEDATA_GETSCHEDULEDATACANDIDATE_OFFSET UNITYSDK_OFFSET(0x1AF68750)
#define RPG_CLIENT_SCHEDULEDATA_GETWEEKCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF67E70)
#define RPG_CLIENT_SCHEDULEDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1AF68330)
#define RPG_CLIENT_SCHEDULEDATA_GET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1AF67AF0)
#define RPG_CLIENT_SCHEDULEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AF67A50)
#define RPG_CLIENT_SCHEDULEDATA_GET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1AF67C30)
#define RPG_CLIENT_SCHEDULEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AF67B90)
#define RPG_CLIENT_SCHEDULEDATA_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0x1AF68310)
#define RPG_CLIENT_SCHEDULEDATA_GET_UNIQUEKEY_OFFSET UNITYSDK_OFFSET(0x1AF68570)
#define RPG_CLIENT_SCHEDULEDATA_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1AF68520)
#define RPG_CLIENT_SCHEDULEDATA_SET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1AF67B40)
#define RPG_CLIENT_SCHEDULEDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AF67AA0)
#define RPG_CLIENT_SCHEDULEDATA_SET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1AF67C80)
#define RPG_CLIENT_SCHEDULEDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AF67BE0)
#define RPG_CLIENT_SCHEDULEDATA_SET_MODULEID_OFFSET UNITYSDK_OFFSET(0x1AF68320)
#define RPG_CLIENT_SCHEDULEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF677F0)
#define RPG_CLIENT_SCHEDULEDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AF67CD0)
#define RPG_CLIENT_SCHEDULEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF677E0)
#define RPG_CLIENT_SCHEDULEDATA__FILLDATAWITHCANDIDATE_OFFSET UNITYSDK_OFFSET(0x1AF68BB0)
#define RPG_CLIENT_SCHEDULEDATA__GETAVAILABLECANDIDATE_OFFSET UNITYSDK_OFFSET(0x1AF68DF0)
#define RPG_CLIENT_SCHEDULEDATA__REFRESHSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1AF68380)

namespace RPG::Client
{
	inline static constexpr unsigned int ScheduleData_TypeDefinitionIndex = 67893;

	class ScheduleData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_4D3F8674ABF7F9DE>* _Candidates; // 0x10
		::System::UInt32 _ModuleID_k__BackingField; // 0x18
		::System::UInt32 _ActiviyID; // 0x1C
		::RPG::Client::DateTimePro _EndTimeDate; // 0x20
		::RPG::Client::DateTimePro _BeginTimeDate; // 0x28
		::System::UInt32 _EndTimeStamp; // 0x30
		::RPG::Client::ScheduleData_ScheduleDataUniqueKey _UniqueKey; // 0x34
		::System::UInt32 _BeginTimeStamp; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetWeekCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GETWEEKCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_ModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_MODULEID_OFFSET))(this);
		}

		::System::Void set_ModuleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_MODULEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_ACTIVITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_BEGINTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_BeginTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_BEGINTIMEDATE_OFFSET))(this);
		}

		::System::Void set_BeginTimeDate(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_BEGINTIMEDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_ENDTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_EndTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_ENDTIMEDATE_OFFSET))(this);
		}

		::System::Void set_EndTimeDate(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_ENDTIMEDATE_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData_ScheduleDataUniqueKey get_UniqueKey()
		{
			return ((::RPG::Client::ScheduleData_ScheduleDataUniqueKey(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_UNIQUEKEY_OFFSET))(this);
		}

		static ::System::Boolean Between(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_BETWEEN_OFFSET))(a1, a2, a3);
		}

		::System::Boolean ContainsScheduleDataCandidate(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_CONTAINSSCHEDULEDATACANDIDATE_OFFSET))(this, a1);
		}

		::Struct_2_4D3F8674ABF7F9DE GetScheduleDataCandidate(::System::UInt32 a1)
		{
			return ((::Struct_2_4D3F8674ABF7F9DE(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GETSCHEDULEDATACANDIDATE_OFFSET))(this, a1);
		}

		::System::Void AppendCandidate(::Struct_2_4D3F8674ABF7F9DE a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_4D3F8674ABF7F9DE))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_APPENDCANDIDATE_OFFSET))(this, a1);
		}

		static ::System::Int32 CandidateComparison(::Struct_2_4D3F8674ABF7F9DE a1, ::Struct_2_4D3F8674ABF7F9DE a2)
		{
			return ((::System::Int32(*)(::Struct_2_4D3F8674ABF7F9DE, ::Struct_2_4D3F8674ABF7F9DE))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_CANDIDATECOMPARISON_OFFSET))(a1, a2);
		}

		::System::Void _RefreshScheduleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__REFRESHSCHEDULEDATA_OFFSET))(this);
		}

		::System::Boolean _GetAvailableCandidate(::Struct_2_4D3F8674ABF7F9DE& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_4D3F8674ABF7F9DE&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__GETAVAILABLECANDIDATE_OFFSET))(this, a1);
		}

		::System::Void _FillDataWithCandidate(::Struct_2_4D3F8674ABF7F9DE a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_4D3F8674ABF7F9DE))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__FILLDATAWITHCANDIDATE_OFFSET))(this, a1);
		}
	};
}
