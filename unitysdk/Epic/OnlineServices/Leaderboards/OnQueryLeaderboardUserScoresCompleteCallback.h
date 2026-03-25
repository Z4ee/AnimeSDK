#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Leaderboards { class OnQueryLeaderboardUserScoresCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x866CB10)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x866CB40)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x866B600)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x866CAF0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int OnQueryLeaderboardUserScoresCompleteCallback_TypeDefinitionIndex = 36212;

	class OnQueryLeaderboardUserScoresCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
