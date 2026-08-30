#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_3_7E850DDB8FBC5CC5;
namespace RPGTools::Timeline { class CumulativeScoreBoardClipData; }
namespace RPGTools::Timeline { class ShowCumulativeScoreBoardClip; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B0C1850)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_METHOD_2_700EA064073BB2CC_OFFSET UNITYSDK_OFFSET(0x1B0C1A60)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B0C1870)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B0C1860)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0C1C00)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C1BF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowCumulativeScoreBoardBehaviour_TypeDefinitionIndex = 48736;

	class ShowCumulativeScoreBoardBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::String** StaticGet_UI_LUA_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShowCumulativeScoreBoardBehaviour_TypeDefinitionIndex)->GetStaticField(0x46300);
		}
		::RPGTools::Timeline::ShowCumulativeScoreBoardClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR__CCTOR_OFFSET))();
		}

		::RPGTools::Timeline::ShowCumulativeScoreBoardClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ShowCumulativeScoreBoardClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ShowCumulativeScoreBoardClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ShowCumulativeScoreBoardClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::Class_3_7E850DDB8FBC5CC5* Method_2_700EA064073BB2CC(::RPGTools::Timeline::CumulativeScoreBoardClipData* a1)
		{
			return ((::Class_3_7E850DDB8FBC5CC5*(*)(::PVOID, ::RPGTools::Timeline::CumulativeScoreBoardClipData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_METHOD_2_700EA064073BB2CC_OFFSET))(this, a1);
		}
	};
}
