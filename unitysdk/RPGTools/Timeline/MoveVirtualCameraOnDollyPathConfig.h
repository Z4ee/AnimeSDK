#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD030A80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MoveVirtualCameraOnDollyPathConfig_TypeDefinitionIndex = 45137;

	class MoveVirtualCameraOnDollyPathConfig : public ::System::Object
	{
	public:
		::System::String* AreaName; // 0x10
		::System::String* AnchorName; // 0x18
		::System::Single StartPoint; // 0x20
		::System::Single EndPoint; // 0x24
		::System::Boolean UseCustomCurve; // 0x28
		::System::String* CurveName; // 0x30
		::UnityEngine::AnimationCurve* CustomCurve; // 0x38
		::System::Boolean ControlFov; // 0x40
		::System::Single StartFov; // 0x44
		::System::Single EndFov; // 0x48
		::UnityEngine::AnimationCurve* FovLerpCurve; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
