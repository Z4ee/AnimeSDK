#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D8C9ED8919282E9_3;
namespace RPG::GameCore { class MazeBuffData; }

#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3822E0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C__DISPLAYCLASS1_0___BUILDINFO_B__2_OFFSET UNITYSDK_OFFSET(0x1A382650)

namespace RPG::Client::FateRin::Challenge
{
	inline static constexpr unsigned int FateRinBattlePauseChallengeViewModel___c__DisplayClass1_0_TypeDefinitionIndex = 76071;

	class FateRinBattlePauseChallengeViewModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Class_1_0D8C9ED8919282E9_3* buffModel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __BuildInfo_b__2(::RPG::GameCore::MazeBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C__DISPLAYCLASS1_0___BUILDINFO_B__2_OFFSET))(this, a1);
		}
	};
}
