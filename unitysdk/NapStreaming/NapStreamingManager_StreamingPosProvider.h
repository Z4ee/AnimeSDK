#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NAPSTREAMING_NAPSTREAMINGMANAGER_STREAMINGPOSPROVIDER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17FB8950)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_STREAMINGPOSPROVIDER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17FB8980)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_STREAMINGPOSPROVIDER_INVOKE_OFFSET UNITYSDK_OFFSET(0x17FB8630)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_STREAMINGPOSPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB8610)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingManager_StreamingPosProvider_TypeDefinitionIndex = 76989;

	class NapStreamingManager_StreamingPosProvider : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_STREAMINGPOSPROVIDER__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::Vector3 Invoke()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_STREAMINGPOSPROVIDER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_STREAMINGPOSPROVIDER_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::UnityEngine::Vector3 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_STREAMINGPOSPROVIDER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
