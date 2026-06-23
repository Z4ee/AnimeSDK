#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Leaderboards { class OnQueryLeaderboardRanksCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CE71E00)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CE71E30)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CE718E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE71DE0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int OnQueryLeaderboardRanksCompleteCallback_TypeDefinitionIndex = 35816;

	class OnQueryLeaderboardRanksCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
