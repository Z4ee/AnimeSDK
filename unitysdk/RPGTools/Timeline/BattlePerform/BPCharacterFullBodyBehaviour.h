#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoFullBodyIK; }
namespace RPGTools::Timeline::BattlePerform { class BPCharacterFullBodyChainData; }
namespace RPGTools::Timeline::BattlePerform { class BPCharacterFullBodyClip; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D12BE70)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_METHOD_2_39A138F3E3645EFA_1_OFFSET UNITYSDK_OFFSET(0x1D12C620)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_METHOD_2_39A138F3E3645EFA_OFFSET UNITYSDK_OFFSET(0x1D12C910)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_METHOD_2_8232A81CBDCFFDA5_OFFSET UNITYSDK_OFFSET(0x1D12C5C0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_METHOD_2_C27A4721B2E846D0_OFFSET UNITYSDK_OFFSET(0x1D12C250)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_METHOD_2_F4EFBCB9BF29105D_OFFSET UNITYSDK_OFFSET(0x1D12C7A0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1D12BE90)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D12BE80)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D12CAC0)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterFullBodyBehaviour_TypeDefinitionIndex = 49255;

	class BPCharacterFullBodyBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyClip* get_Clip()
		{
			return ((::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_2_8232A81CBDCFFDA5(::UnityEngine::GameObject* a1, ::RPG::Client::MonoFullBodyIK* a2, ::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::MonoFullBodyIK*, ::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_METHOD_2_8232A81CBDCFFDA5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_2_C27A4721B2E846D0(::UnityEngine::GameObject* a1, ::RPG::Client::MonoFullBodyIK* a2, ::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::MonoFullBodyIK*, ::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_METHOD_2_C27A4721B2E846D0_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::AnimationCurve* Method_2_F4EFBCB9BF29105D(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_METHOD_2_F4EFBCB9BF29105D_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* Method_2_39A138F3E3645EFA(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::GameObject*, ::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_METHOD_2_39A138F3E3645EFA_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* Method_2_39A138F3E3645EFA_1(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::GameObject*, ::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_METHOD_2_39A138F3E3645EFA_1_OFFSET))(a1, a2);
		}
	};
}
