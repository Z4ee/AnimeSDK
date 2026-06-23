#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_85E1FCC6DF9961D3;
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class AnimationApplyDynamicAdditiveConfig; }
namespace MoleMole::Photo { class AnimationModifyCurveConfig; }
namespace MoleMole::Photo { class AnimationSaveCachedPoseConfig; }
namespace MoleMole::Photo { class AnimationTwoBoneIKConfig; }
namespace MoleMole::Photo { class AnimationUseCachedPoseConfig; }
namespace MoleMole::Photo { class FrontCameraProcessEmotionPoseConfig; }
namespace MoleMole::Photo { class PlayableBlendSpace1DConfig; }
namespace MoleMole::Photo { class ScopedFrontCameraControlEmotionConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x12BDA770)
#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x12BDB7E0)
#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG_REQUEST_OFFSET UNITYSDK_OFFSET(0x12BDB970)
#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDCE10)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int ScopedFrontCameraControlAnimationBlendSpace1DConfig_TypeDefinitionIndex = 85121;

	class ScopedFrontCameraControlAnimationBlendSpace1DConfig : public ::System::Object
	{
	public:
		::MoleMole::Photo::PlayableBlendSpace1DConfig* blendSpace; // 0x10
		::MoleMole::Photo::AnimationSaveCachedPoseConfig* saveEmotionPose; // 0x18
		::MoleMole::Photo::FrontCameraProcessEmotionPoseConfig* prepareData; // 0x20
		::MoleMole::Photo::AnimationUseCachedPoseConfig* useEmotionPose; // 0x28
		::MoleMole::Photo::AnimationTwoBoneIKConfig* armIk; // 0x30
		::MoleMole::Photo::AnimationModifyCurveConfig* curve; // 0x38
		::MoleMole::Photo::AnimationApplyDynamicAdditiveConfig* applyAdditive; // 0x40
		::MoleMole::Photo::AnimationUseCachedPoseConfig* useCachedPose; // 0x48
		::System::Single blendIn; // 0x50
		::System::Single blendOut; // 0x54
		::MoleMole::Photo::ScopedFrontCameraControlEmotionConfig* emotionClip; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animator* a2, ::Struct_2_ACD0EF80A5330786& a3, ::Foundation::NativeMemory* a4, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> a5, ::Class_1_85E1FCC6DF9961D3* a6)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>, ::Class_1_85E1FCC6DF9961D3*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG_CREATE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void Request(::UnityEngine::Animator* a1, ::MoleMole::Photo::Skeleton* a2, ::Foundation::NativeMemoryBuilder* a3, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG_REQUEST_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
