#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_APPENDSCROLL_OFFSET UNITYSDK_OFFSET(0x9B2ADB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_GET_ISSCROLLING_OFFSET UNITYSDK_OFFSET(0x9B2ACB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_INIT_OFFSET UNITYSDK_OFFSET(0x9B2ACC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9B2B050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_STARTSCROLL_OFFSET UNITYSDK_OFFSET(0x9B2AD30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_STOPSCROLL_OFFSET UNITYSDK_OFFSET(0x9B2AE30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x9B2AE80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9B2B0A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int GiftThankScrollAnimator_TypeDefinitionIndex = 69228;

	class GiftThankScrollAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _Content; // 0x18
		::System::Single _ScrollDuration; // 0x20
		::System::Single _ScrollElapsed; // 0x24
		::System::Single _ScrollTotalDistance; // 0x28
		::System::Single _ScrollStartY; // 0x2C
		::System::Boolean _IsScrolling; // 0x30
		::System::Action* _OnScrollStepComplete; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsScrolling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_GET_ISSCROLLING_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::RectTransform* content, ::System::Single scrollDuration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_INIT_OFFSET))(this, content, scrollDuration);
		}

		::System::Void StartScroll(::System::Single startY, ::System::Single totalDistance, ::System::Action* onStepComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_STARTSCROLL_OFFSET))(this, startY, totalDistance, onStepComplete);
		}

		::System::Void AppendScroll(::System::Single newStartY, ::System::Single newTotalDistance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_APPENDSCROLL_OFFSET))(this, newStartY, newTotalDistance);
		}

		::System::Void StopScroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_STOPSCROLL_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_ONDESTROY_OFFSET))(this);
		}
	};
}
