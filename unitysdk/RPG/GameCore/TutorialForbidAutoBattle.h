#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALFORBIDAUTOBATTLE_METHOD_3_82179E11888F8BA8_OFFSET UNITYSDK_OFFSET(0x1D2A31E0)
#define RPG_GAMECORE_TUTORIALFORBIDAUTOBATTLE_METHOD_3_AE04DC23BE757C7B_OFFSET UNITYSDK_OFFSET(0x1D2A3220)
#define RPG_GAMECORE_TUTORIALFORBIDAUTOBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A3210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialForbidAutoBattle_TypeDefinitionIndex = 24043;

	class TutorialForbidAutoBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsForbid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALFORBIDAUTOBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_82179E11888F8BA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialForbidAutoBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialForbidAutoBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALFORBIDAUTOBATTLE_METHOD_3_82179E11888F8BA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE04DC23BE757C7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialForbidAutoBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialForbidAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALFORBIDAUTOBATTLE_METHOD_3_AE04DC23BE757C7B_OFFSET))(a1, a2);
		}
	};
}
