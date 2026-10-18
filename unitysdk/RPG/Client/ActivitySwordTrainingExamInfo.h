#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivitySwordTrainingExamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5ACD60)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_GETEXAMDATA_OFFSET UNITYSDK_OFFSET(0xC5ACDF0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_GET_ACTIVEEXAMDATA_OFFSET UNITYSDK_OFFSET(0xC5AD820)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_GET_ACTIVEEXAMID_OFFSET UNITYSDK_OFFSET(0xC5ADDC0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC5ACA30)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_ISINSWORDTRAININGBATTLE_OFFSET UNITYSDK_OFFSET(0xC5AD870)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_ONEXAMBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0xC5AD280)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_SET_ACTIVEEXAMID_OFFSET UNITYSDK_OFFSET(0xC5ADDD0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_STARTEXAM_OFFSET UNITYSDK_OFFSET(0xC5ACEF0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_UPDATEEXAMPERFORMANCECONTEXT_OFFSET UNITYSDK_OFFSET(0xC5AD3F0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC5ADDE0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO__INITEXAMDATALIST_OFFSET UNITYSDK_OFFSET(0xC5ACA80)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO__ONEXAMPERFORMANCEFINISH_OFFSET UNITYSDK_OFFSET(0xC5ADA20)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingExamInfo_TypeDefinitionIndex = 61945;

	class ActivitySwordTrainingExamInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivitySwordTrainingExamData*>* ExamDataList; // 0x10
		::System::Boolean IsBattleWin; // 0x18
		::System::UInt32 _ActiveExamID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivitySwordTrainingExamData* GetExamData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivitySwordTrainingExamData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_GETEXAMDATA_OFFSET))(this, a1);
		}

		::System::Void _InitExamDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO__INITEXAMDATALIST_OFFSET))(this);
		}

		::System::Void StartExam(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_STARTEXAM_OFFSET))(this, a1);
		}

		::System::Void OnExamBattleFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_ONEXAMBATTLEFINISH_OFFSET))(this, a1);
		}

		::System::Void UpdateExamPerformanceContext(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_UPDATEEXAMPERFORMANCECONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean IsInSwordTrainingBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_ISINSWORDTRAININGBATTLE_OFFSET))(this);
		}

		::System::Void _OnExamPerformanceFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO__ONEXAMPERFORMANCEFINISH_OFFSET))(this);
		}

		::RPG::Client::ActivitySwordTrainingExamData* get_ActiveExamData()
		{
			return ((::RPG::Client::ActivitySwordTrainingExamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_GET_ACTIVEEXAMDATA_OFFSET))(this);
		}

		::System::UInt32 get_ActiveExamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_GET_ACTIVEEXAMID_OFFSET))(this);
		}

		::System::Void set_ActiveExamID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_SET_ACTIVEEXAMID_OFFSET))(this, a1);
		}
	};
}
