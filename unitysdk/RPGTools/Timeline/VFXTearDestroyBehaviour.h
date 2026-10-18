#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_4B703F2764047929;
namespace RPGTools::Timeline { class VFXTearDestroyClip; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFXTEARDESTROYBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE94FF00)
#define RPGTOOLS_TIMELINE_VFXTEARDESTROYBEHAVIOUR_METHOD_2_939B0A8FB671683E_OFFSET UNITYSDK_OFFSET(0xE950000)
#define RPGTOOLS_TIMELINE_VFXTEARDESTROYBEHAVIOUR_METHOD_2_F6C7E9EFFF4F7C6C_OFFSET UNITYSDK_OFFSET(0xE9501C0)
#define RPGTOOLS_TIMELINE_VFXTEARDESTROYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE94FF20)
#define RPGTOOLS_TIMELINE_VFXTEARDESTROYBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE94FF10)
#define RPGTOOLS_TIMELINE_VFXTEARDESTROYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE950300)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VFXTearDestroyBehaviour_TypeDefinitionIndex = 48083;

	class VFXTearDestroyBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::VFXTearDestroyClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARDESTROYBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::VFXTearDestroyClip* get_Clip()
		{
			return ((::RPGTools::Timeline::VFXTearDestroyClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARDESTROYBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::VFXTearDestroyClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFXTearDestroyClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARDESTROYBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARDESTROYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::Class_1_4B703F2764047929* Method_2_939B0A8FB671683E()
		{
			return ((::Class_1_4B703F2764047929*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARDESTROYBEHAVIOUR_METHOD_2_939B0A8FB671683E_OFFSET))(this);
		}

		::System::Void Method_2_F6C7E9EFFF4F7C6C(::Class_1_4B703F2764047929* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4B703F2764047929*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARDESTROYBEHAVIOUR_METHOD_2_F6C7E9EFFF4F7C6C_OFFSET))(this, a1, a2);
		}
	};
}
