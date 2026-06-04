#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALBLOCKANDWAIT_METHOD_3_C4BAD00CA5B3E883_OFFSET UNITYSDK_OFFSET(0x19E25F80)
#define RPG_GAMECORE_TUTORIALBLOCKANDWAIT_METHOD_3_DC54E1276EF1A4A7_OFFSET UNITYSDK_OFFSET(0x19E26020)
#define RPG_GAMECORE_TUTORIALBLOCKANDWAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E25FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialBlockAndWait_TypeDefinitionIndex = 23052;

	class TutorialBlockAndWait : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single WaitSecond; // 0x18
		::System::Single MaxAdvencePerTick; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALBLOCKANDWAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4BAD00CA5B3E883(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialBlockAndWait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialBlockAndWait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALBLOCKANDWAIT_METHOD_3_C4BAD00CA5B3E883_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC54E1276EF1A4A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialBlockAndWait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialBlockAndWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALBLOCKANDWAIT_METHOD_3_DC54E1276EF1A4A7_OFFSET))(a1, a2);
		}
	};
}
