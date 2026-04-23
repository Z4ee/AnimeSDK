#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/ScheduleData_ScheduleDataUniqueKey.h"
#include "unitysdk/Struct_2_4D3F8674ABF7F9DE.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SCHEDULEDATA_APPENDCANDIDATE_OFFSET UNITYSDK_OFFSET(0xB152270)
#define RPG_CLIENT_SCHEDULEDATA_BETWEEN_OFFSET UNITYSDK_OFFSET(0xB151F50)
#define RPG_CLIENT_SCHEDULEDATA_CANDIDATECOMPARISON_OFFSET UNITYSDK_OFFSET(0xB1525B0)
#define RPG_CLIENT_SCHEDULEDATA_CONTAINSSCHEDULEDATACANDIDATE_OFFSET UNITYSDK_OFFSET(0xB151FB0)
#define RPG_CLIENT_SCHEDULEDATA_GETSCHEDULEDATACANDIDATE_OFFSET UNITYSDK_OFFSET(0xB1520F0)
#define RPG_CLIENT_SCHEDULEDATA_GETWEEKCOUNT_OFFSET UNITYSDK_OFFSET(0xB151760)
#define RPG_CLIENT_SCHEDULEDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xB151C20)
#define RPG_CLIENT_SCHEDULEDATA_GET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0xB1515E0)
#define RPG_CLIENT_SCHEDULEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB151590)
#define RPG_CLIENT_SCHEDULEDATA_GET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0xB151680)
#define RPG_CLIENT_SCHEDULEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB151630)
#define RPG_CLIENT_SCHEDULEDATA_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0xB151C00)
#define RPG_CLIENT_SCHEDULEDATA_GET_UNIQUEKEY_OFFSET UNITYSDK_OFFSET(0xB151ED0)
#define RPG_CLIENT_SCHEDULEDATA_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xB151E80)
#define RPG_CLIENT_SCHEDULEDATA_SET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0xB151EA0)
#define RPG_CLIENT_SCHEDULEDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB151E90)
#define RPG_CLIENT_SCHEDULEDATA_SET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0xB151EC0)
#define RPG_CLIENT_SCHEDULEDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB151EB0)
#define RPG_CLIENT_SCHEDULEDATA_SET_MODULEID_OFFSET UNITYSDK_OFFSET(0xB151C10)
#define RPG_CLIENT_SCHEDULEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB151450)
#define RPG_CLIENT_SCHEDULEDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0xB1516D0)
#define RPG_CLIENT_SCHEDULEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB151440)
#define RPG_CLIENT_SCHEDULEDATA__FILLDATAWITHCANDIDATE_OFFSET UNITYSDK_OFFSET(0xB152530)
#define RPG_CLIENT_SCHEDULEDATA__GETAVAILABLECANDIDATE_OFFSET UNITYSDK_OFFSET(0xB152630)
#define RPG_CLIENT_SCHEDULEDATA__REFRESHSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xB151C70)

namespace RPG::Client
{
	inline static constexpr unsigned int ScheduleData_TypeDefinitionIndex = 62586;

	class ScheduleData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_4D3F8674ABF7F9DE>* _Candidates; // 0x10
		::RPG::Client::DateTimePro _EndTimeDate; // 0x18
		::System::UInt32 _EndTimeStamp; // 0x20
		::System::UInt32 _ModuleID_k__BackingField; // 0x24
		::RPG::Client::DateTimePro _BeginTimeDate; // 0x28
		::System::UInt32 _ActiviyID; // 0x30
		::RPG::Client::ScheduleData_ScheduleDataUniqueKey _UniqueKey; // 0x34
		::System::UInt32 _BeginTimeStamp; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__CTOR_1_OFFSET))(this, data);
		}

		::System::Void _ctor_2(::System::UInt32 beginTimeStamp, ::System::UInt32 endTimeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__CTOR_2_OFFSET))(this, beginTimeStamp, endTimeStamp);
		}

		::System::Int32 GetWeekCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GETWEEKCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_ModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_MODULEID_OFFSET))(this);
		}

		::System::Void set_ModuleID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_MODULEID_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_ACTIVITYID_OFFSET))(this, value);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_BEGINTIMESTAMP_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro get_BeginTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_BEGINTIMEDATE_OFFSET))(this);
		}

		::System::Void set_BeginTimeDate(::RPG::Client::DateTimePro value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_BEGINTIMEDATE_OFFSET))(this, value);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_ENDTIMESTAMP_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro get_EndTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_ENDTIMEDATE_OFFSET))(this);
		}

		::System::Void set_EndTimeDate(::RPG::Client::DateTimePro value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_ENDTIMEDATE_OFFSET))(this, value);
		}

		::RPG::Client::ScheduleData_ScheduleDataUniqueKey get_UniqueKey()
		{
			return ((::RPG::Client::ScheduleData_ScheduleDataUniqueKey(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_UNIQUEKEY_OFFSET))(this);
		}

		static ::System::Boolean Between(::System::UInt32 value, ::System::UInt32 begin, ::System::UInt32 end)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_BETWEEN_OFFSET))(value, begin, end);
		}

		::System::Boolean ContainsScheduleDataCandidate(::System::UInt32 activityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_CONTAINSSCHEDULEDATACANDIDATE_OFFSET))(this, activityID);
		}

		::Struct_2_4D3F8674ABF7F9DE GetScheduleDataCandidate(::System::UInt32 activityID)
		{
			return ((::Struct_2_4D3F8674ABF7F9DE(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GETSCHEDULEDATACANDIDATE_OFFSET))(this, activityID);
		}

		::System::Void AppendCandidate(::Struct_2_4D3F8674ABF7F9DE candidate)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_4D3F8674ABF7F9DE))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_APPENDCANDIDATE_OFFSET))(this, candidate);
		}

		static ::System::Int32 CandidateComparison(::Struct_2_4D3F8674ABF7F9DE candidate1, ::Struct_2_4D3F8674ABF7F9DE candidate2)
		{
			return ((::System::Int32(*)(::Struct_2_4D3F8674ABF7F9DE, ::Struct_2_4D3F8674ABF7F9DE))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_CANDIDATECOMPARISON_OFFSET))(candidate1, candidate2);
		}

		::System::Void _RefreshScheduleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__REFRESHSCHEDULEDATA_OFFSET))(this);
		}

		::System::Boolean _GetAvailableCandidate(::Struct_2_4D3F8674ABF7F9DE& candidate)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_4D3F8674ABF7F9DE&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__GETAVAILABLECANDIDATE_OFFSET))(this, candidate);
		}

		::System::Void _FillDataWithCandidate(::Struct_2_4D3F8674ABF7F9DE candidate)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_4D3F8674ABF7F9DE))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__FILLDATAWITHCANDIDATE_OFFSET))(this, candidate);
		}
	};
}
