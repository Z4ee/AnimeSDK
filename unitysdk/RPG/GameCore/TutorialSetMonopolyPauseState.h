#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_METHOD_3_53610D296C27B10A_OFFSET UNITYSDK_OFFSET(0x190DDB60)
#define RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_METHOD_3_8D88FC75419F5053_OFFSET UNITYSDK_OFFSET(0x190DDAE0)
#define RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x190DDB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialSetMonopolyPauseState_TypeDefinitionIndex = 23378;

	class TutorialSetMonopolyPauseState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D88FC75419F5053(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialSetMonopolyPauseState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialSetMonopolyPauseState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_METHOD_3_8D88FC75419F5053_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_53610D296C27B10A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialSetMonopolyPauseState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialSetMonopolyPauseState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_METHOD_3_53610D296C27B10A_OFFSET))(a1, a2);
		}
	};
}
