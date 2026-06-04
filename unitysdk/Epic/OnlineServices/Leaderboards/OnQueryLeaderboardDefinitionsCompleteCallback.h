#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Leaderboards { class OnQueryLeaderboardDefinitionsCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2DABA0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2DABD0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2DAA80)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DAAB0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int OnQueryLeaderboardDefinitionsCompleteCallback_TypeDefinitionIndex = 42833;

	class OnQueryLeaderboardDefinitionsCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
