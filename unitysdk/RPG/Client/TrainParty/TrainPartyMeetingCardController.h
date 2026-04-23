#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::TrainParty { class TrainPartyMeetingCardController_CardMoveInfo; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_GET__ISMOVING_OFFSET UNITYSDK_OFFSET(0xB354750)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_PLAYCARD_OFFSET UNITYSDK_OFFSET(0xB354A20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_SETFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xB3549D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB3546C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB354FE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER__ONMOVEFINISH_OFFSET UNITYSDK_OFFSET(0xB354F80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER__TICKMOVING_OFFSET UNITYSDK_OFFSET(0xB3547B0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingCardController_TypeDefinitionIndex = 68546;

	class TrainPartyMeetingCardController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* MoveCurve; // 0x18
		::System::Single Duration; // 0x20
		::System::Action* _FinishCallback; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingCardController_CardMoveInfo*>* _CurMoveInfoList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetFinishCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_SETFINISHCALLBACK_OFFSET))(this, callback);
		}

		::System::Void PlayCard(::UnityEngine::RectTransform* sourceRoot, ::UnityEngine::RectTransform* finalRoot, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_PLAYCARD_OFFSET))(this, sourceRoot, finalRoot, duration);
		}

		::System::Void _TickMoving(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER__TICKMOVING_OFFSET))(this, time);
		}

		::System::Void _OnMoveFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER__ONMOVEFINISH_OFFSET))(this);
		}

		::System::Boolean get__IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCARDCONTROLLER_GET__ISMOVING_OFFSET))(this);
		}
	};
}
