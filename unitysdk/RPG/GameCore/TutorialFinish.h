#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALFINISH_METHOD_3_BF72193C4C640A49_OFFSET UNITYSDK_OFFSET(0x1B069A90)
#define RPG_GAMECORE_TUTORIALFINISH_METHOD_3_D36B521798A3224A_OFFSET UNITYSDK_OFFSET(0x1B069A50)
#define RPG_GAMECORE_TUTORIALFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B069A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialFinish_TypeDefinitionIndex = 23495;

	class TutorialFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TutorialID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D36B521798A3224A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALFINISH_METHOD_3_D36B521798A3224A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF72193C4C640A49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALFINISH_METHOD_3_BF72193C4C640A49_OFFSET))(a1, a2);
		}
	};
}
