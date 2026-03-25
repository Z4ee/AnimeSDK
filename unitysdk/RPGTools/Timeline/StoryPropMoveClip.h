#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/StoryPropMoveClip_ESpeedMode.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline { class CharacterStoryMoveData_BezierPathPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_STORYPROPMOVECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABA7BD0)
#define RPGTOOLS_TIMELINE_STORYPROPMOVECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xABA7BC0)
#define RPGTOOLS_TIMELINE_STORYPROPMOVECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xABA7D90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryPropMoveClip_TypeDefinitionIndex = 39173;

	class StoryPropMoveClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPGTools::Timeline::StoryPropMoveClip_ESpeedMode SpeedMode; // 0x20
		::System::Single Speed; // 0x24
		::System::Single Duration; // 0x28
		::System::Boolean MoveUseCustomCurve; // 0x2C
		::UnityEngine::AnimationCurve* MoveCustomCurve; // 0x30
		::System::Boolean UseBezierPath; // 0x38
		::System::Collections::Generic::List_1<::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*>* BezierPathPoints; // 0x40
		::System::Boolean OverrideRotationByBezierPath; // 0x48
		::System::String* TargetAreaName; // 0x50
		::System::String* TargetAnchorName; // 0x58
		::System::Boolean ChangeScale; // 0x60
		::UnityEngine::Vector3 TargetScale; // 0x64
		::System::Boolean ScaleUseCustomCurve; // 0x70
		::UnityEngine::AnimationCurve* ScaleCustomCurve; // 0x78
		::System::Boolean ChangeRotation; // 0x80
		::UnityEngine::Vector3 TargetRotation; // 0x84
		::System::Boolean RotationUseCustomCurve; // 0x90
		::UnityEngine::AnimationCurve* RotationCustomCurve; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
