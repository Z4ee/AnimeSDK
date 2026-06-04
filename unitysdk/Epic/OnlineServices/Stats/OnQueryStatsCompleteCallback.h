#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Stats { class OnQueryStatsCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA0F5F10)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA0F5F40)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA0F5F00)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F5E10)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int OnQueryStatsCompleteCallback_TypeDefinitionIndex = 42020;

	class OnQueryStatsCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
