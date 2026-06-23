#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectPageController; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_MATCHINGANIMPLAYER_UPDATEANIMSTATE_OFFSET UNITYSDK_OFFSET(0x16D8C760)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_MATCHINGANIMPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8C9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController_MatchingAnimPlayer_TypeDefinitionIndex = 79043;

	class UILineupSelectPageController_MatchingAnimPlayer : public ::System::Object
	{
	public:
		::System::Boolean _isPlaying; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_MATCHINGANIMPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateAnimState(::MoleMole::UILineupSelectPageController* controller, ::System::Boolean isMatching)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UILineupSelectPageController*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_MATCHINGANIMPLAYER_UPDATEANIMSTATE_OFFSET))(this, controller, isMatching);
		}
	};
}
