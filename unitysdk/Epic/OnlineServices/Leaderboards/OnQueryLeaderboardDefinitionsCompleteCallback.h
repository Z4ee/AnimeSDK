#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Leaderboards { class OnQueryLeaderboardDefinitionsCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A1D4E20)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A1D4E50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A1D4920)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1D4910)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int OnQueryLeaderboardDefinitionsCompleteCallback_TypeDefinitionIndex = 34249;

	class OnQueryLeaderboardDefinitionsCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
