#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_ONTAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16C490)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickTap_OnTap_TypeDefinitionIndex = 38977;

	class QuickTap_OnTap : public ::UnityEngine::Events::UnityEvent_1<::HedgehogTeam::EasyTouch::Gesture*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_ONTAP__CTOR_OFFSET))(this);
		}
	};
}
