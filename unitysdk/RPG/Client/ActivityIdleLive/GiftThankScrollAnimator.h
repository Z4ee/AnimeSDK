#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_APPENDSCROLL_OFFSET UNITYSDK_OFFSET(0x19D25D00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_GET_ISSCROLLING_OFFSET UNITYSDK_OFFSET(0x19D25BD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_INIT_OFFSET UNITYSDK_OFFSET(0x19D25C10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19D25FA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_STARTSCROLL_OFFSET UNITYSDK_OFFSET(0x19D25C80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_STOPSCROLL_OFFSET UNITYSDK_OFFSET(0x19D25D80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x19D25DD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19D25FF0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int GiftThankScrollAnimator_TypeDefinitionIndex = 71563;

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

		::System::Void Init(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void StartScroll(::System::Single a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_STARTSCROLL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AppendScroll(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_APPENDSCROLL_OFFSET))(this, a1, a2);
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
