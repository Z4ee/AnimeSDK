#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivitySwordTrainingExamCommentData; }
namespace RPG::GameCore { class SwordTrainingExamRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC5ABF30)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GETCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0xC5ABFC0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xC5AC6F0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_ENEMYIMAGE_OFFSET UNITYSDK_OFFSET(0xC5AC830)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_ENEMYNAME_OFFSET UNITYSDK_OFFSET(0xC5AC8D0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_FAILPERFORMANCEID_OFFSET UNITYSDK_OFFSET(0xC5AC5B0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_ISFINALEXAM_OFFSET UNITYSDK_OFFSET(0xC5AC990)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_POWERRANKID_OFFSET UNITYSDK_OFFSET(0xC5AC790)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_PREPERFORMID_OFFSET UNITYSDK_OFFSET(0xC5AC420)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xC5AC650)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_SUCCESSPERFORMANCEID_OFFSET UNITYSDK_OFFSET(0xC5AC4C0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC5AC3C0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC5ABFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingExamData_TypeDefinitionIndex = 61944;

	class ActivitySwordTrainingExamData : public ::System::Object
	{
	public:
		::System::UInt32 ExamID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivitySwordTrainingExamData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivitySwordTrainingExamData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_CREATE_OFFSET))(a1);
		}

		::RPG::Client::ActivitySwordTrainingExamCommentData* GetCommentData(::System::Boolean a1)
		{
			return ((::RPG::Client::ActivitySwordTrainingExamCommentData*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GETCOMMENTDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_PrePerformID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_PREPERFORMID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SuccessPerformanceID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_SUCCESSPERFORMANCEID_OFFSET))(this);
		}

		::System::UInt32 get_FailPerformanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_FAILPERFORMANCEID_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_STAGEID_OFFSET))(this);
		}

		::System::UInt32 get_BattleAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_BATTLEAREAID_OFFSET))(this);
		}

		::System::UInt32 get_PowerRankID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_POWERRANKID_OFFSET))(this);
		}

		::System::String* get_EnemyImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_ENEMYIMAGE_OFFSET))(this);
		}

		::RPG::Client::TextID get_EnemyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_ENEMYNAME_OFFSET))(this);
		}

		::System::Boolean get_IsFinalExam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET_ISFINALEXAM_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingExamRow* get__Row()
		{
			return ((::RPG::GameCore::SwordTrainingExamRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMDATA_GET__ROW_OFFSET))(this);
		}
	};
}
