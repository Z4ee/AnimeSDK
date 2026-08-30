#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::VFX { class VFXPageTearClip; }
namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE900C50)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR_METHOD_2_CBB16AE705BCA424_OFFSET UNITYSDK_OFFSET(0xE900FD0)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE901050)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE900C70)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE900DF0)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE900C60)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE9010D0)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXPageTearBehaviour_TypeDefinitionIndex = 49133;

	class VFXPageTearBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		// static const ::System::String* PageTearEffectPath; // 0x0
		// static const ::System::String* PageTearEffectRendererNodeName; // 0x0
		// static const ::System::String* PageTearEffectUniqueName; // 0x0
		::RPGTools::Timeline::VFX::VFXPageTearClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::VFX::VFXPageTearClip* get_Clip()
		{
			return ((::RPGTools::Timeline::VFX::VFXPageTearClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::VFX::VFXPageTearClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::VFXPageTearClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_CBB16AE705BCA424(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARBEHAVIOUR_METHOD_2_CBB16AE705BCA424_OFFSET))(this, a1);
		}
	};
}
