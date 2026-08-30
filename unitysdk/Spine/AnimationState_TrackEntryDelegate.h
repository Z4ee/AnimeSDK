#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine { class TrackEntry; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1604D0C0)
#define SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1604D0F0)
#define SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x160465A0)
#define SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1604CFD0)

namespace Spine
{
	inline static constexpr unsigned int AnimationState_TrackEntryDelegate_TypeDefinitionIndex = 38332;

	class AnimationState_TrackEntryDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::TrackEntry* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::TrackEntry*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
