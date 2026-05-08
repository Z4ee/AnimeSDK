#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Stats { class IngestStatCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1942BB10)
#define EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1942BB40)
#define EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1942B610)
#define EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1942B600)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int OnIngestStatCompleteCallback_TypeDefinitionIndex = 33434;

	class OnIngestStatCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Stats::IngestStatCompleteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::IngestStatCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Stats::IngestStatCompleteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Stats::IngestStatCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
