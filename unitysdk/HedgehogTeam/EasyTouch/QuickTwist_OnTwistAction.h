#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ONTWISTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16D420)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickTwist_OnTwistAction_TypeDefinitionIndex = 38984;

	class QuickTwist_OnTwistAction : public ::UnityEngine::Events::UnityEvent_1<::HedgehogTeam::EasyTouch::Gesture*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ONTWISTACTION__CTOR_OFFSET))(this);
		}
	};
}
