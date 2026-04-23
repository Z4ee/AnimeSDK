#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivitySwordTrainingExamData; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9C689C0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__DISPLAYCLASS2_0__GETEXAMDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9C689D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingExamInfo___c__DisplayClass2_0_TypeDefinitionIndex = 57140;

	class ActivitySwordTrainingExamInfo___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 examID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetExamData_b__0(::RPG::Client::ActivitySwordTrainingExamData* examData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivitySwordTrainingExamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__DISPLAYCLASS2_0__GETEXAMDATA_B__0_OFFSET))(this, examData);
		}
	};
}
