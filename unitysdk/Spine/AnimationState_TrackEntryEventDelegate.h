#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine { class Event; }
namespace Spine { class TrackEntry; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E7D50B0)
#define SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E7D50F0)
#define SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7D4B30)
#define SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D4B10)

namespace Spine
{
	inline static constexpr unsigned int AnimationState_TrackEntryEventDelegate_TypeDefinitionIndex = 32835;

	class AnimationState_TrackEntryEventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::TrackEntry* trackEntry, ::Spine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE_INVOKE_OFFSET))(this, trackEntry, e);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::TrackEntry* trackEntry, ::Spine::Event* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE_BEGININVOKE_OFFSET))(this, trackEntry, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
