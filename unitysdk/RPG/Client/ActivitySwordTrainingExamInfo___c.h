#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB209A40)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB209A80)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__STARTEXAM_B__4_0_OFFSET UNITYSDK_OFFSET(0xB209A90)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingExamInfo___c_TypeDefinitionIndex = 57929;

	class ActivitySwordTrainingExamInfo___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivitySwordTrainingExamInfo___c_TypeDefinitionIndex)->GetStaticField(0x5B720);
		}
		static ::RPG::Client::ActivitySwordTrainingExamInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ActivitySwordTrainingExamInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ActivitySwordTrainingExamInfo___c_TypeDefinitionIndex)->GetStaticField(0x5B728);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__CTOR_OFFSET))(this);
		}

		::System::Void _StartExam_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__STARTEXAM_B__4_0_OFFSET))(this);
		}
	};
}
