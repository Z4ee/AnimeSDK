#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWGROUPCHALLENGESELECTPAGE_METHOD_3_1AF782787197DF13_OFFSET UNITYSDK_OFFSET(0x1BE3FF70)
#define RPG_GAMECORE_SHOWGROUPCHALLENGESELECTPAGE_METHOD_3_69FC58A14733B930_OFFSET UNITYSDK_OFFSET(0x1BE3FF20)
#define RPG_GAMECORE_SHOWGROUPCHALLENGESELECTPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3FF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGroupChallengeSelectPage_TypeDefinitionIndex = 20816;

	class ShowGroupChallengeSelectPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::Boolean IsScheduleChallenge; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGROUPCHALLENGESELECTPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69FC58A14733B930(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGroupChallengeSelectPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGroupChallengeSelectPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGROUPCHALLENGESELECTPAGE_METHOD_3_69FC58A14733B930_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1AF782787197DF13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGroupChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGroupChallengeSelectPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGROUPCHALLENGESELECTPAGE_METHOD_3_1AF782787197DF13_OFFSET))(a1, a2);
		}
	};
}
