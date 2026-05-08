#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Stats { class OnQueryStatsCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A4F4AB0)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A4F4AE0)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A4F45B0)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F45A0)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int OnQueryStatsCompleteCallback_TypeDefinitionIndex = 33436;

	class OnQueryStatsCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
