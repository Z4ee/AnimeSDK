#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO_ISFINISH_OFFSET UNITYSDK_OFFSET(0xCAAECF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO_TICK_OFFSET UNITYSDK_OFFSET(0xCAAEBC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCAAE900)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO__FINISHCURRENTMOVE_OFFSET UNITYSDK_OFFSET(0xCAAEDB0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingCardController_CardMoveInfo_TypeDefinitionIndex = 69359;

	class TrainPartyMeetingCardController_CardMoveInfo : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* Target; // 0x10
		::System::Single _CumulativeTime; // 0x18
		::System::Boolean _IsFinish; // 0x1C
		::System::Single _Duration; // 0x20
		::UnityEngine::Vector2 _FinalPos; // 0x24
		::UnityEngine::Vector2 _SourcePos; // 0x2C

		::System::Void _ctor(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_CARDMOVEINFO_TICK_OFFSET))(this, a1);
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
