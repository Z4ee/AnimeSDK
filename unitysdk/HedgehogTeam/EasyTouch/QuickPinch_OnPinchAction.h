#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ONPINCHACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16B370)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickPinch_OnPinchAction_TypeDefinitionIndex = 38969;

	class QuickPinch_OnPinchAction : public ::UnityEngine::Events::UnityEvent_1<::HedgehogTeam::EasyTouch::Gesture*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ONPINCHACTION__CTOR_OFFSET))(this);
		}
	};
}
