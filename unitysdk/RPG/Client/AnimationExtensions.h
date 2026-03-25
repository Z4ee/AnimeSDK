#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_ANIMATIONEXTENSIONS_RESETCLIPS_OFFSET UNITYSDK_OFFSET(0x90C2BF0)
#define RPG_CLIENT_ANIMATIONEXTENSIONS_WAITANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x90C29D0)
#define RPG_CLIENT_ANIMATIONEXTENSIONS_WAITANIMENDCOROUTINE_OFFSET UNITYSDK_OFFSET(0x90C2B50)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimationExtensions_TypeDefinitionIndex = 59635;

	class AnimationExtensions : public ::System::Object
	{
	public:
		static ::System::Void WaitAnimationEnd(::UnityEngine::Animation* animation, ::System::Action_1<::System::Object*>* callback, ::System::Object* callbackParam)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONEXTENSIONS_WAITANIMATIONEND_OFFSET))(animation, callback, callbackParam);
		}

		static ::System::Collections::IEnumerator* WaitAnimEndCoroutine(::UnityEngine::Animation* animation, ::System::Action_1<::System::Object*>* callback, ::System::Object* callbackParam)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Animation*, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONEXTENSIONS_WAITANIMENDCOROUTINE_OFFSET))(animation, callback, callbackParam);
		}

		static ::System::Void ResetClips(::UnityEngine::Animation* animation)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONEXTENSIONS_RESETCLIPS_OFFSET))(animation);
		}
	};
}
