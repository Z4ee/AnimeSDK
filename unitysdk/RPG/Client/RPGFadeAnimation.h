#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UITransitionAnimType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class CustomTransitionFadeIn; }
namespace RPG::Client { class CustomTransitionFadeOut; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_RPGFADEANIMATION_GETANIMTYPE_OFFSET UNITYSDK_OFFSET(0xA255760)
#define RPG_CLIENT_RPGFADEANIMATION_GETFADEINANIM_OFFSET UNITYSDK_OFFSET(0xA255420)
#define RPG_CLIENT_RPGFADEANIMATION_GETFADEINCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0xA2553A0)
#define RPG_CLIENT_RPGFADEANIMATION_GETFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0xA2555B0)
#define RPG_CLIENT_RPGFADEANIMATION_GETFADEOUTCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0xA255530)
#define RPG_CLIENT_RPGFADEANIMATION_INIT_OFFSET UNITYSDK_OFFSET(0xA255840)
#define RPG_CLIENT_RPGFADEANIMATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA255880)
#define RPG_CLIENT_RPGFADEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xA2558D0)
#define RPG_CLIENT_RPGFADEANIMATION__DEFAULTFADEINANIM_OFFSET UNITYSDK_OFFSET(0xA2556D0)
#define RPG_CLIENT_RPGFADEANIMATION__DEFAULTFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0xA255720)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGFadeAnimation_TypeDefinitionIndex = 59689;

	class RPGFadeAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationClip* EntranceAnimationClip; // 0x18
		::UnityEngine::AnimationClip* ExitAnimationClip; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::CustomTransitionFadeIn*>* CustomEntranceAnimationClips; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::CustomTransitionFadeOut*>* CustomExitAnimationClips; // 0x30
		::System::Single OverrideEntranceTime; // 0x38
		::System::Single OverrideExitTime; // 0x3C
		::System::Single FullScreenBlockTime; // 0x40
		::System::Boolean DoNotBlockOnExit; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION__CTOR_OFFSET))(this);
		}

		::System::Single GetFadeInClipLength(::System::String* srcControllerName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_GETFADEINCLIPLENGTH_OFFSET))(this, srcControllerName);
		}

		::System::Single GetFadeOutClipLength(::System::String* dstControllerName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_GETFADEOUTCLIPLENGTH_OFFSET))(this, dstControllerName);
		}

		::UnityEngine::AnimationClip* GetFadeInAnim(::System::String* srcControllerName)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_GETFADEINANIM_OFFSET))(this, srcControllerName);
		}

		::UnityEngine::AnimationClip* GetFadeOutAnim(::System::String* dstControllerName)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_GETFADEOUTANIM_OFFSET))(this, dstControllerName);
		}

		::RPG::Client::UITransitionAnimType GetAnimType(::System::String* dstControllerName)
		{
			return ((::RPG::Client::UITransitionAnimType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_GETANIMTYPE_OFFSET))(this, dstControllerName);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* _DefaultFadeInAnim()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION__DEFAULTFADEINANIM_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* _DefaultFadeOutAnim()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION__DEFAULTFADEOUTANIM_OFFSET))(this);
		}
	};
}
