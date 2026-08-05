#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_LOADASSETSYNCACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EF681A0)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_LOADASSETSYNCACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EF681D0)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_LOADASSETSYNCACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF67C80)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_LOADASSETSYNCACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF67C60)

namespace MoleMole::Timeline::OverrideAnimation
{
	inline static constexpr unsigned int AnimationClipInfo_LoadAssetSyncAction_TypeDefinitionIndex = 32862;

	class AnimationClipInfo_LoadAssetSyncAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_LOADASSETSYNCACTION__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::AnimationClip* Invoke(::System::String* animationClipPath)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_LOADASSETSYNCACTION_INVOKE_OFFSET))(this, animationClipPath);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* animationClipPath, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_LOADASSETSYNCACTION_BEGININVOKE_OFFSET))(this, animationClipPath, callback, object);
		}

		::UnityEngine::AnimationClip* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_LOADASSETSYNCACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
