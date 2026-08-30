#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::VFX { class VFXPageTearFadeClip; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE901290)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR_METHOD_2_CBB16AE705BCA424_OFFSET UNITYSDK_OFFSET(0xE9015C0)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE901640)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE9012B0)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE9013E0)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE9012A0)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE9016D0)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXPageTearFadeBehaviour_TypeDefinitionIndex = 49137;

	class VFXPageTearFadeBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::VFX::VFXPageTearFadeClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::VFX::VFXPageTearFadeClip* get_Clip()
		{
			return ((::RPGTools::Timeline::VFX::VFXPageTearFadeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::VFX::VFXPageTearFadeClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::VFXPageTearFadeClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_CBB16AE705BCA424(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARFADEBEHAVIOUR_METHOD_2_CBB16AE705BCA424_OFFSET))(this, a1);
		}
	};
}
