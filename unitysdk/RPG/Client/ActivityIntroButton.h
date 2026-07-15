#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIntroButton_ActivityIntroButtonConfig.h"
#include "unitysdk/RPG/Client/AnimatorButton.h"

namespace RPG::Client { class ActivityPanelData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_ACTIVITYINTROBUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x19A731A0)
#define RPG_CLIENT_ACTIVITYINTROBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x19A73430)
#define RPG_CLIENT_ACTIVITYINTROBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x19A738C0)
#define RPG_CLIENT_ACTIVITYINTROBUTTON__GETAVAILABLEACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x19A73490)
#define RPG_CLIENT_ACTIVITYINTROBUTTON__SHOWINTRO_OFFSET UNITYSDK_OFFSET(0x19A73200)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIntroButton_TypeDefinitionIndex = 69222;

	class ActivityIntroButton : public ::RPG::Client::AnimatorButton
	{
	public:
		::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig Config; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINTROBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINTROBUTTON_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINTROBUTTON_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void _ShowIntro()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINTROBUTTON__SHOWINTRO_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* _GetAvailableActivityPanelData()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINTROBUTTON__GETAVAILABLEACTIVITYPANELDATA_OFFSET))(this);
		}
	};
}
