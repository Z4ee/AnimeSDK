#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D707BE2AC47F299A;
namespace RPG::Client::Challenge { class ChallengeAvatarLineupSlotControl; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTCONTROL___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC607A0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTCONTROL___C__DISPLAYCLASS14_0___BINDLACKEQUIP_B__0_OFFSET UNITYSDK_OFFSET(0x1AC60860)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeAvatarLineupSlotControl___c__DisplayClass14_0_TypeDefinitionIndex = 76452;

	class ChallengeAvatarLineupSlotControl___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::ChallengeAvatarLineupSlotControl* __4__this; // 0x10
		::Class_1_D707BE2AC47F299A* vm; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTCONTROL___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void __BindLackEquip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTCONTROL___C__DISPLAYCLASS14_0___BINDLACKEQUIP_B__0_OFFSET))(this);
		}
	};
}
