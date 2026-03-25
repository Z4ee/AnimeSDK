#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ONSWIPEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11A7F4E0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickSwipe_OnSwipeAction_TypeDefinitionIndex = 31286;

	class QuickSwipe_OnSwipeAction : public ::UnityEngine::Events::UnityEvent_1<::HedgehogTeam::EasyTouch::Gesture*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ONSWIPEACTION__CTOR_OFFSET))(this);
		}
	};
}
