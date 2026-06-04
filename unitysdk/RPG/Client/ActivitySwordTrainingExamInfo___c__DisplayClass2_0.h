#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivitySwordTrainingExamData; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB208A20)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__DISPLAYCLASS2_0__GETEXAMDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB209AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingExamInfo___c__DisplayClass2_0_TypeDefinitionIndex = 57930;

	class ActivitySwordTrainingExamInfo___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 examID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetExamData_b__0(::RPG::Client::ActivitySwordTrainingExamData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivitySwordTrainingExamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__DISPLAYCLASS2_0__GETEXAMDATA_B__0_OFFSET))(this, a1);
		}
	};
}
