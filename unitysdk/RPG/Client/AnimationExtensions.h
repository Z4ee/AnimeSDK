#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_ANIMATIONEXTENSIONS_RESETCLIPS_OFFSET UNITYSDK_OFFSET(0x19B135A0)
#define RPG_CLIENT_ANIMATIONEXTENSIONS_WAITANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x19B13380)
#define RPG_CLIENT_ANIMATIONEXTENSIONS_WAITANIMENDCOROUTINE_OFFSET UNITYSDK_OFFSET(0x19B13500)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimationExtensions_TypeDefinitionIndex = 69459;

	class AnimationExtensions : public ::System::Object
	{
	public:
		static ::System::Void WaitAnimationEnd(::UnityEngine::Animation* a1, ::System::Action_1<::System::Object*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONEXTENSIONS_WAITANIMATIONEND_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::IEnumerator* WaitAnimEndCoroutine(::UnityEngine::Animation* a1, ::System::Action_1<::System::Object*>* a2, ::System::Object* a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Animation*, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONEXTENSIONS_WAITANIMENDCOROUTINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ResetClips(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONEXTENSIONS_RESETCLIPS_OFFSET))(a1);
		}
	};
}
