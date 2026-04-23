#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPGTools::Timeline { class CRPCameraClip; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB89F210)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_METHOD_2_196B667215CC6C04_OFFSET UNITYSDK_OFFSET(0xB89F7F0)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_METHOD_2_2487CF59EC1C5F04_OFFSET UNITYSDK_OFFSET(0xB89F720)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_METHOD_2_6BF81B6CD305D3E3_OFFSET UNITYSDK_OFFSET(0xB89F650)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_METHOD_2_729EA78A8E85039F_OFFSET UNITYSDK_OFFSET(0xB89F8C0)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_METHOD_2_959B5968D9A47AC1_OFFSET UNITYSDK_OFFSET(0xB89F5E0)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB89F230)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB89F220)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB89FAE0)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB89FAF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraBehaviour_TypeDefinitionIndex = 44643;

	class CRPCameraBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CRPCameraClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CRPCameraClip* get_Clip()
		{
			return ((::RPGTools::Timeline::CRPCameraClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::CRPCameraClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CRPCameraClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineVirtualCamera* Method_2_2487CF59EC1C5F04(::System::String* a1)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_METHOD_2_2487CF59EC1C5F04_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_2_196B667215CC6C04(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_METHOD_2_196B667215CC6C04_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_2_729EA78A8E85039F(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_METHOD_2_729EA78A8E85039F_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* Method_2_959B5968D9A47AC1()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_METHOD_2_959B5968D9A47AC1_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_2_6BF81B6CD305D3E3()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_METHOD_2_6BF81B6CD305D3E3_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
