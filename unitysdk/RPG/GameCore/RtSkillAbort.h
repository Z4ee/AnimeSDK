#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTSKILLABORT_METHOD_3_F5464CA47C0C26F1_OFFSET UNITYSDK_OFFSET(0x1B768F40)
#define RPG_GAMECORE_RTSKILLABORT_METHOD_3_F83638D41561432D_OFFSET UNITYSDK_OFFSET(0x1B768FE0)
#define RPG_GAMECORE_RTSKILLABORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B768FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillAbort_TypeDefinitionIndex = 23362;

	class RtSkillAbort : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AbortTargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLABORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F5464CA47C0C26F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillAbort*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillAbort*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLABORT_METHOD_3_F5464CA47C0C26F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F83638D41561432D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillAbort* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillAbort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLABORT_METHOD_3_F83638D41561432D_OFFSET))(a1, a2);
		}
	};
}
