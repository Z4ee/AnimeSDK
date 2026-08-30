#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonRootMotionBase.h"
#include "unitysdk/Spine/Unity/SkeletonRootMotionBase_RootMotionInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Spine { class Animation; }
namespace Spine::Unity { class SkeletonMecanim; }

#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_CALCULATEANIMATIONSMOVEMENTDELTA_OFFSET UNITYSDK_OFFSET(0x18331290)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_CALCULATEANIMATIONSROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0x183312B0)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_GETREMAININGROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1832F750)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_GETROOTMOTIONINFO_OFFSET UNITYSDK_OFFSET(0x18330050)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_GET_SKELETONMECANIM_OFFSET UNITYSDK_OFFSET(0x1832F6A0)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x18330AE0)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_RESET_OFFSET UNITYSDK_OFFSET(0x18330530)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_START_OFFSET UNITYSDK_OFFSET(0x18330560)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x183312D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanimRootMotion_TypeDefinitionIndex = 43828;

	class SkeletonMecanimRootMotion : public ::Spine::Unity::SkeletonRootMotionBase
	{
	public:
		// static const ::System::Int32 DefaultMecanimLayerFlags = 0xFFFFFFFF; // 0x0
		::System::Int32 mecanimLayerFlags; // 0xF0
		::UnityEngine::Vector2 movementDelta; // 0xF4
		::System::Single rotationDelta; // 0xFC
		::Spine::Unity::SkeletonMecanim* skeletonMecanim; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonMecanim* get_SkeletonMecanim()
		{
			return ((::Spine::Unity::SkeletonMecanim*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_GET_SKELETONMECANIM_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetRemainingRootMotion(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_GETREMAININGROOTMOTION_OFFSET))(this, a1);
		}

		::Spine::Unity::SkeletonRootMotionBase_RootMotionInfo GetRootMotionInfo(::System::Int32 a1)
		{
			return ((::Spine::Unity::SkeletonRootMotionBase_RootMotionInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_GETROOTMOTIONINFO_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_RESET_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_START_OFFSET))(this);
		}

		::System::Void OnClipApplied(::Spine::Animation* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_ONCLIPAPPLIED_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Vector2 CalculateAnimationsMovementDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_CALCULATEANIMATIONSMOVEMENTDELTA_OFFSET))(this);
		}

		::System::Single CalculateAnimationsRotationDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_CALCULATEANIMATIONSROTATIONDELTA_OFFSET))(this);
		}
	};
}
