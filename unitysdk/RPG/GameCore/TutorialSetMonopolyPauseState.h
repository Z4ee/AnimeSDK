#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_METHOD_3_53610D296C27B10A_OFFSET UNITYSDK_OFFSET(0x1B070120)
#define RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_METHOD_3_5E458983D9C759C1_OFFSET UNITYSDK_OFFSET(0x1B0700E0)
#define RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87B3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialSetMonopolyPauseState_TypeDefinitionIndex = 23503;

	class TutorialSetMonopolyPauseState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5E458983D9C759C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialSetMonopolyPauseState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialSetMonopolyPauseState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_METHOD_3_5E458983D9C759C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_53610D296C27B10A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialSetMonopolyPauseState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialSetMonopolyPauseState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_METHOD_3_53610D296C27B10A_OFFSET))(a1, a2);
		}
	};
}
