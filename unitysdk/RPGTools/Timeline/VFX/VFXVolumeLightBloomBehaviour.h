#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/VFX/VFXVolumeLightBloomBehaviour_VolumeLightBloomParam.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1342B57709FD7AC5;
class Class_2_75F60582405E4330_1;
namespace RPGTools::Timeline::VFX { class VFXVolumeLightBloomClip; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE902CC0)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_METHOD_2_1E866EA42109D73D_OFFSET UNITYSDK_OFFSET(0xE902AF0)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xE9022E0)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_METHOD_2_41B039A4E2A7F091_OFFSET UNITYSDK_OFFSET(0xE902C10)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xE902180)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_METHOD_2_E029264C30E5920C_OFFSET UNITYSDK_OFFSET(0xE902720)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE9025F0)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE902000)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE9026D0)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE902240)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE902CD0)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE902CE0)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXVolumeLightBloomBehaviour_TypeDefinitionIndex = 49148;

	class VFXVolumeLightBloomBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		// static const ::System::String* VolumeLightBloomEffectPath; // 0x0
		// static const ::System::String* VolumeLightBloomEffectRendererNodeName; // 0x0
		// static const ::System::String* VolumeLightBloomEffectUniqueName; // 0x0
		::RPGTools::Timeline::VFX::VFXVolumeLightBloomBehaviour_VolumeLightBloomParam Parameter; // 0x10
		::RPGTools::Timeline::VFX::VFXVolumeLightBloomClip* _Clip_k__BackingField; // 0x30
		::Class_2_75F60582405E4330_1* _volumeLightBloomEffect; // 0x38
		::Class_1_1342B57709FD7AC5* _rendererCache; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void Method_2_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_METHOD_2_7744894CEC41BF06_OFFSET))(this);
		}

		::System::Void Method_2_289F28027FF47717()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_METHOD_2_289F28027FF47717_OFFSET))(this);
		}

		::System::Boolean Method_2_E029264C30E5920C(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_METHOD_2_E029264C30E5920C_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_2_41B039A4E2A7F091(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_METHOD_2_41B039A4E2A7F091_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3 Method_2_1E866EA42109D73D(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_METHOD_2_1E866EA42109D73D_OFFSET))(a1, a2, a3);
		}

		::RPGTools::Timeline::VFX::VFXVolumeLightBloomClip* get_Clip()
		{
			return ((::RPGTools::Timeline::VFX::VFXVolumeLightBloomClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::VFX::VFXVolumeLightBloomClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::VFXVolumeLightBloomClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}
	};
}
