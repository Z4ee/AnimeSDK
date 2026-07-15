#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge { class ChallengeAvatarLineupSlotControl; }
namespace UnityEngine::Events { class UnityAction; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC60DD0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL___C__DISPLAYCLASS9_0___REFRESH_B__3_OFFSET UNITYSDK_OFFSET(0x1AC60E00)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeAvatarLineupSlotsControl___c__DisplayClass9_0_TypeDefinitionIndex = 76454;

	class ChallengeAvatarLineupSlotsControl___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction* clickHandler; // 0x10
		::RPG::Client::Challenge::ChallengeAvatarLineupSlotControl* control; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL___C__DISPLAYCLASS9_0___REFRESH_B__3_OFFSET))(this);
		}
	};
}
