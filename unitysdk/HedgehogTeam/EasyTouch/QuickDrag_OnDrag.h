#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDRAG__CTOR_OFFSET UNITYSDK_OFFSET(0x12C4BB50)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickDrag_OnDrag_TypeDefinitionIndex = 36992;

	class QuickDrag_OnDrag : public ::UnityEngine::Events::UnityEvent_1<::HedgehogTeam::EasyTouch::Gesture*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDRAG__CTOR_OFFSET))(this);
		}
	};
}
