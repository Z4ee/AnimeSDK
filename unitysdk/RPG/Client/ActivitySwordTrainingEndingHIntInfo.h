#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_91;
namespace RPG::GameCore { class SwordTrainingStoryLineRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x8FBA6F0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_GET_EXAMDAYLIST_OFFSET UNITYSDK_OFFSET(0x8FBA970)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x8FBA950)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_GET__ROW_OFFSET UNITYSDK_OFFSET(0x8FBA990)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_SET_EXAMDAYLIST_OFFSET UNITYSDK_OFFSET(0x8FBA980)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x8FBA960)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8FBA790)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO__INITEXAMDAYS_OFFSET UNITYSDK_OFFSET(0x8FBA7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingEndingHIntInfo_TypeDefinitionIndex = 50276;

	class ActivitySwordTrainingEndingHIntInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ExamDayList_k__BackingField; // 0x10
		::System::UInt32 _StoryLineID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivitySwordTrainingEndingHIntInfo* Create(::Class_1_735612C94F558EAE_91* endingHintInfo)
		{
			return ((::RPG::Client::ActivitySwordTrainingEndingHIntInfo*(*)(::Class_1_735612C94F558EAE_91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_CREATE_OFFSET))(endingHintInfo);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_SET_STORYLINEID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ExamDayList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_GET_EXAMDAYLIST_OFFSET))(this);
		}

		::System::Void set_ExamDayList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_SET_EXAMDAYLIST_OFFSET))(this, value);
		}

		::RPG::GameCore::SwordTrainingStoryLineRow* get__Row()
		{
			return ((::RPG::GameCore::SwordTrainingStoryLineRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_GET__ROW_OFFSET))(this);
		}

		::System::Void _InitExamDays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO__INITEXAMDAYS_OFFSET))(this);
		}
	};
}
