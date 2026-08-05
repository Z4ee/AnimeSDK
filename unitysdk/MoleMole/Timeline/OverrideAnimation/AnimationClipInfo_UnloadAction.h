#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_UNLOADACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F98FB20)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_UNLOADACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F98FB50)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_UNLOADACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F98F600)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_UNLOADACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F98F5E0)

namespace MoleMole::Timeline::OverrideAnimation
{
	inline static constexpr unsigned int AnimationClipInfo_UnloadAction_TypeDefinitionIndex = 32863;

	class AnimationClipInfo_UnloadAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_UNLOADACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* animationClipPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_UNLOADACTION_INVOKE_OFFSET))(this, animationClipPath);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* animationClipPath, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_UNLOADACTION_BEGININVOKE_OFFSET))(this, animationClipPath, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_UNLOADACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
