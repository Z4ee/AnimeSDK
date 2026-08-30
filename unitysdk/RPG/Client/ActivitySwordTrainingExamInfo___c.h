#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x196321F0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19632230)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__STARTEXAM_B__4_0_OFFSET UNITYSDK_OFFSET(0x19632240)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingExamInfo___c_TypeDefinitionIndex = 62030;

	class ActivitySwordTrainingExamInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivitySwordTrainingExamInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ActivitySwordTrainingExamInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ActivitySwordTrainingExamInfo___c_TypeDefinitionIndex)->GetStaticField(0x63350);
		}
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivitySwordTrainingExamInfo___c_TypeDefinitionIndex)->GetStaticField(0x63358);
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
