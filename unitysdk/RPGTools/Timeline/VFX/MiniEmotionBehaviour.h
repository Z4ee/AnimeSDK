#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_4B703F2764047929;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginMiniEmotion; }
namespace RPGTools { class MonoTimelineEffect; }
namespace RPGTools::Timeline::VFX { class MiniEmotionClip; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8FAC50)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_0B52F2DF5119EE9C_OFFSET UNITYSDK_OFFSET(0xE8FC1B0)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_12970AA1C6E8D55E_OFFSET UNITYSDK_OFFSET(0xE8FB300)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_1CC4F6DB6780B6F9_OFFSET UNITYSDK_OFFSET(0xE8FC9E0)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_26BB0ACC0529E465_OFFSET UNITYSDK_OFFSET(0xE8FC110)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_6092608CF92684DE_OFFSET UNITYSDK_OFFSET(0xE8FC8E0)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_7A3332CA5E4D024F_OFFSET UNITYSDK_OFFSET(0xE8FC280)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_7A4DA50406643EC6_OFFSET UNITYSDK_OFFSET(0xE8FAF30)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0xE8FB100)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_E1A071FA52BCFDC6_OFFSET UNITYSDK_OFFSET(0xE8FC6F0)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_EC0E3C91F79E1953_OFFSET UNITYSDK_OFFSET(0xE8FC7F0)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE8FBE20)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8FAC70)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8FBEF0)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8FAC60)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8FCB50)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int MiniEmotionBehaviour_TypeDefinitionIndex = 49111;

	class MiniEmotionBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::VFX::MiniEmotionClip* _Clip_k__BackingField; // 0x10
		::UnityEngine::Object* _PrefabAsset; // 0x18
		::RPGTools::MonoTimelineEffect* _TimelineEffect; // 0x20
		::RPG::Client::MonoEffect* _MonoEffect; // 0x28
		::RPG::Client::MonoEffectPluginMiniEmotion* _MiniEmoPlugin; // 0x30
		::UnityEngine::Transform* _TimelineOrigin; // 0x38
		::System::Boolean _MiniEmoStopped; // 0x40
		::Class_1_4B703F2764047929* _EffectMgr; // 0x48
		::System::Single _playableTime; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::VFX::MiniEmotionClip* get_Clip()
		{
			return ((::RPGTools::Timeline::VFX::MiniEmotionClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::VFX::MiniEmotionClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::MiniEmotionClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_ABE7715DB28B2DD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_ABE7715DB28B2DD1_OFFSET))(this);
		}

		::System::Boolean Method_2_7A4DA50406643EC6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_7A4DA50406643EC6_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_2_26BB0ACC0529E465(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_26BB0ACC0529E465_OFFSET))(this, a1);
		}

		::System::Void Method_2_0B52F2DF5119EE9C(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_0B52F2DF5119EE9C_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_1CC4F6DB6780B6F9(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_1CC4F6DB6780B6F9_OFFSET))(this, a1);
		}

		::System::Void Method_2_E1A071FA52BCFDC6(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_E1A071FA52BCFDC6_OFFSET))(this, a1);
		}

		::System::Void Method_2_7A3332CA5E4D024F(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_7A3332CA5E4D024F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_EC0E3C91F79E1953(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_EC0E3C91F79E1953_OFFSET))(this, a1);
		}

		::System::Void Method_2_6092608CF92684DE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_6092608CF92684DE_OFFSET))(this);
		}

		::System::Void Method_2_12970AA1C6E8D55E(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_METHOD_2_12970AA1C6E8D55E_OFFSET))(this, a1);
		}
	};
}
