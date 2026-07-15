#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_5FF2340E88CFFA8C;
namespace RPGTools::Timeline { class CharacterDitherClip; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B355860)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_METHOD_2_4DAE53B8419F40B2_OFFSET UNITYSDK_OFFSET(0x1B355D20)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_METHOD_2_681F6715D9F8296E_OFFSET UNITYSDK_OFFSET(0x1B355950)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B355880)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B355BA0)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B355870)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B355DF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterDitherBehaviour_TypeDefinitionIndex = 46172;

	class CharacterDitherBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterDitherClip* _Clip_k__BackingField; // 0x10
		::System::Single DirectlyDitherValue; // 0x18
		::Class_2_5FF2340E88CFFA8C* _VisibleCmpt; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CharacterDitherClip* get_Clip()
		{
			return ((::RPGTools::Timeline::CharacterDitherClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::CharacterDitherClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterDitherClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_681F6715D9F8296E(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_METHOD_2_681F6715D9F8296E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_4DAE53B8419F40B2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_METHOD_2_4DAE53B8419F40B2_OFFSET))(this, a1, a2, a3);
		}
	};
}
