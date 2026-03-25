#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDRAGEND__CTOR_OFFSET UNITYSDK_OFFSET(0x11A7CD90)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickDrag_OnDragEnd_TypeDefinitionIndex = 31273;

	class QuickDrag_OnDragEnd : public ::UnityEngine::Events::UnityEvent_1<::HedgehogTeam::EasyTouch::Gesture*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDRAGEND__CTOR_OFFSET))(this);
		}
	};
}
