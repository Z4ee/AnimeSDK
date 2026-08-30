#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine { class Event; }
namespace Spine { class TrackEntry; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E5D2830)
#define SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E5D2870)
#define SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E5CBC90)
#define SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D2740)

namespace Spine
{
	inline static constexpr unsigned int AnimationState_TrackEntryEventDelegate_TypeDefinitionIndex = 38333;

	class AnimationState_TrackEntryEventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Spine::TrackEntry* a1, ::Spine::Event* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::TrackEntry* a1, ::Spine::Event* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TRACKENTRYEVENTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
