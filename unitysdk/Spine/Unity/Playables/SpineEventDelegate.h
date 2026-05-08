#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine { class Event; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C3698F0)
#define SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C369920)
#define SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C3693F0)
#define SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3693E0)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineEventDelegate_TypeDefinitionIndex = 85888;

	class SpineEventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_INVOKE_OFFSET))(this, e);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Event* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Event*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_BEGININVOKE_OFFSET))(this, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
