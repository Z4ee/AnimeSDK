#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine { class TrackEntry; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C2911F0)
#define SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C291220)
#define SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C290CF0)
#define SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C290CE0)

namespace Spine
{
	inline static constexpr unsigned int AnimationState_TrackEntryDelegate_TypeDefinitionIndex = 31283;

	class AnimationState_TrackEntryDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::TrackEntry* trackEntry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE_INVOKE_OFFSET))(this, trackEntry);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::TrackEntry* trackEntry, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::TrackEntry*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE_BEGININVOKE_OFFSET))(this, trackEntry, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
