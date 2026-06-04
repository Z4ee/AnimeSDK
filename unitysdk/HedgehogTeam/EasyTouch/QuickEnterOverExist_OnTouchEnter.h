#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONTOUCHENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x146FA9B0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickEnterOverExist_OnTouchEnter_TypeDefinitionIndex = 37295;

	class QuickEnterOverExist_OnTouchEnter : public ::UnityEngine::Events::UnityEvent_1<::HedgehogTeam::EasyTouch::Gesture*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONTOUCHENTER__CTOR_OFFSET))(this);
		}
	};
}
