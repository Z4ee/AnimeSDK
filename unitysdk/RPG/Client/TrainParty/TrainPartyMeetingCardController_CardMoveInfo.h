#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO_ISFINISH_OFFSET UNITYSDK_OFFSET(0xA5FFE20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO_TICK_OFFSET UNITYSDK_OFFSET(0xA5FFCF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA5FFA30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO__FINISHCURRENTMOVE_OFFSET UNITYSDK_OFFSET(0xA5FFED0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingCardController_CardMoveInfo_TypeDefinitionIndex = 61085;

	class TrainPartyMeetingCardController_CardMoveInfo : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* Target; // 0x10
		::UnityEngine::Vector2 _SourcePos; // 0x18
		::UnityEngine::Vector2 _FinalPos; // 0x20
		::System::Single _CumulativeTime; // 0x28
		::System::Boolean _IsFinish; // 0x2C
		::System::Single _Duration; // 0x30

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
