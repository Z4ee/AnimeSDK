#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Leaderboards { class OnQueryLeaderboardUserScoresCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB37E690)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB37E6C0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB37D910)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB37E5A0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int OnQueryLeaderboardUserScoresCompleteCallback_TypeDefinitionIndex = 45884;

	class OnQueryLeaderboardUserScoresCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
