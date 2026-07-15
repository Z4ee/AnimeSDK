#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class Emo2DAtlasClip; }

#define RPGTOOLS_TIMELINE_EMO2DATLASBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x19A3C160)
#define RPGTOOLS_TIMELINE_EMO2DATLASBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x19A3C180)
#define RPGTOOLS_TIMELINE_EMO2DATLASBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x19A3C170)
#define RPGTOOLS_TIMELINE_EMO2DATLASBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3C280)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int Emo2DAtlasBehaviour_TypeDefinitionIndex = 46313;

	class Emo2DAtlasBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::Emo2DAtlasClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMO2DATLASBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Emo2DAtlasClip* get_Clip()
		{
			return ((::RPGTools::Timeline::Emo2DAtlasClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMO2DATLASBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::Emo2DAtlasClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emo2DAtlasClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMO2DATLASBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMO2DATLASBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
