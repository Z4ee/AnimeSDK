#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP_ONLONGTAP__CTOR_OFFSET UNITYSDK_OFFSET(0x12C4CC00)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickLongTap_OnLongTap_TypeDefinitionIndex = 36999;

	class QuickLongTap_OnLongTap : public ::UnityEngine::Events::UnityEvent_1<::HedgehogTeam::EasyTouch::Gesture*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP_ONLONGTAP__CTOR_OFFSET))(this);
		}
	};
}
