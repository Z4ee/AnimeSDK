#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19F64390)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VirtualCameraSampleAnimationConfig_TypeDefinitionIndex = 46066;

	class VirtualCameraSampleAnimationConfig : public ::System::Object
	{
	public:
		::UnityEngine::AnimationClip* clip; // 0x10
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
