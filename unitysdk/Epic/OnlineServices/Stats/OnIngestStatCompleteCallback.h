#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Stats { class IngestStatCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB15C9C0)
#define EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB15C9F0)
#define EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB15C9B0)
#define EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB15C8C0)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int OnIngestStatCompleteCallback_TypeDefinitionIndex = 45061;

	class OnIngestStatCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Stats::IngestStatCompleteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::IngestStatCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Stats::IngestStatCompleteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Stats::IngestStatCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONINGESTSTATCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
