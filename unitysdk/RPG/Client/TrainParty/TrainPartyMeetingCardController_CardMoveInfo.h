#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB354F40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO_TICK_OFFSET UNITYSDK_OFFSET(0xB354E10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB354B50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO__FINISHCURRENTMOVE_OFFSET UNITYSDK_OFFSET(0xB354FF0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingCardController_CardMoveInfo_TypeDefinitionIndex = 68547;

	class TrainPartyMeetingCardController_CardMoveInfo : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* Target; // 0x10
		::System::Single _Duration; // 0x18
		::UnityEngine::Vector2 _FinalPos; // 0x1C
		::UnityEngine::Vector2 _SourcePos; // 0x24
		::System::Boolean _IsFinish; // 0x2C
		::System::Single _CumulativeTime; // 0x30

		::System::Void _ctor(::UnityEngine::RectTransform* sourceRoot, ::UnityEngine::RectTransform* finalRoot, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO__CTOR_OFFSET))(this, sourceRoot, finalRoot, duration);
		}

		::System::Void Tick(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO_TICK_OFFSET))(this, time);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO_ISFINISH_OFFSET))(this);
		}

		::System::Void _FinishCurrentMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO__FINISHCURRENTMOVE_OFFSET))(this);
		}
	};
}
