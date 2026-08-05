#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonRootMotionBase.h"
#include "unitysdk/Spine/Unity/SkeletonRootMotionBase_RootMotionInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Spine { class AnimationState; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonGraphic; }

#define SPINE_UNITY_SKELETONROOTMOTION_APPLYMIXALPHATODELTA_1_OFFSET UNITYSDK_OFFSET(0x1C1928B0)
#define SPINE_UNITY_SKELETONROOTMOTION_APPLYMIXALPHATODELTA_OFFSET UNITYSDK_OFFSET(0x1C192520)
#define SPINE_UNITY_SKELETONROOTMOTION_CALCULATEANIMATIONSMOVEMENTDELTA_OFFSET UNITYSDK_OFFSET(0x1C192210)
#define SPINE_UNITY_SKELETONROOTMOTION_CALCULATEANIMATIONSROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0x1C192600)
#define SPINE_UNITY_SKELETONROOTMOTION_GETMIXALPHA_OFFSET UNITYSDK_OFFSET(0x1C192970)
#define SPINE_UNITY_SKELETONROOTMOTION_GETREMAININGROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1C191CA0)
#define SPINE_UNITY_SKELETONROOTMOTION_GETROOTMOTIONINFO_OFFSET UNITYSDK_OFFSET(0x1C191DD0)
#define SPINE_UNITY_SKELETONROOTMOTION_GET_ADDITIONALSCALE_OFFSET UNITYSDK_OFFSET(0x1C191F20)
#define SPINE_UNITY_SKELETONROOTMOTION_RESET_OFFSET UNITYSDK_OFFSET(0x1C192090)
#define SPINE_UNITY_SKELETONROOTMOTION_START_OFFSET UNITYSDK_OFFSET(0x1C1920B0)
#define SPINE_UNITY_SKELETONROOTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C192A40)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRootMotion_TypeDefinitionIndex = 40113;

	class SkeletonRootMotion : public ::Spine::Unity::SkeletonRootMotionBase
	{
	public:
		// static const ::System::Int32 DefaultAnimationTrackFlags = 0xFFFFFFFF; // 0x0
		::System::Int32 animationTrackFlags; // 0xF0
		::Spine::AnimationState* animationState; // 0xF8
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetRemainingRootMotion(::System::Int32 trackIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_GETREMAININGROOTMOTION_OFFSET))(this, trackIndex);
		}

		::Spine::Unity::SkeletonRootMotionBase_RootMotionInfo GetRootMotionInfo(::System::Int32 trackIndex)
		{
			return ((::Spine::Unity::SkeletonRootMotionBase_RootMotionInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_GETROOTMOTIONINFO_OFFSET))(this, trackIndex);
		}

		::System::Single get_AdditionalScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_GET_ADDITIONALSCALE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_RESET_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_START_OFFSET))(this);
		}

		::UnityEngine::Vector2 CalculateAnimationsMovementDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_CALCULATEANIMATIONSMOVEMENTDELTA_OFFSET))(this);
		}

		::System::Single CalculateAnimationsRotationDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_CALCULATEANIMATIONSROTATIONDELTA_OFFSET))(this);
		}

		::System::Void ApplyMixAlphaToDelta(::UnityEngine::Vector2& currentDelta, ::Spine::TrackEntry* next, ::Spine::TrackEntry* track)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::Spine::TrackEntry*, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_APPLYMIXALPHATODELTA_OFFSET))(this, currentDelta, next, track);
		}

		::System::Void ApplyMixAlphaToDelta_1(::System::Single& currentDelta, ::Spine::TrackEntry* next, ::Spine::TrackEntry* track)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::Spine::TrackEntry*, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_APPLYMIXALPHATODELTA_1_OFFSET))(this, currentDelta, next, track);
		}

		::System::Void GetMixAlpha(::System::Single& cumulatedMixAlpha, ::Spine::TrackEntry* next, ::Spine::TrackEntry* track)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::Spine::TrackEntry*, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_GETMIXALPHA_OFFSET))(this, cumulatedMixAlpha, next, track);
		}
	};
}
