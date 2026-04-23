#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH_ONTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x12C4ECA0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickTouch_OnTouch_TypeDefinitionIndex = 37013;

	class QuickTouch_OnTouch : public ::UnityEngine::Events::UnityEvent_1<::HedgehogTeam::EasyTouch::Gesture*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH_ONTOUCH__CTOR_OFFSET))(this);
		}
	};
}
