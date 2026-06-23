#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class GaussianBlurVolumeTimelineBehaviour;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define GAUSSIANBLURVOLUMETIMELINEMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x187AD9F0)
#define GAUSSIANBLURVOLUMETIMELINEMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x187AE4C0)
#define GAUSSIANBLURVOLUMETIMELINEMIXER___BASE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x187AE550)

inline static constexpr unsigned int GaussianBlurVolumeTimelineMixer_TypeDefinitionIndex = 67562;

class GaussianBlurVolumeTimelineMixer : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Rendering::Universal::GaussianBlur* VolComponent; // 0x10
	::UnityEngine::Playables::PlayableDirector* Director; // 0x18
	::UnityEngine::Timeline::TrackAsset* Track; // 0x20
	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* _allClips; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GaussianBlurVolumeTimelineBehaviour*>* ClipToBehaviourMap; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUSSIANBLURVOLUMETIMELINEMIXER__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GAUSSIANBLURVOLUMETIMELINEMIXER_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
	}

	::System::Void __base_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GAUSSIANBLURVOLUMETIMELINEMIXER___BASE_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}
};
