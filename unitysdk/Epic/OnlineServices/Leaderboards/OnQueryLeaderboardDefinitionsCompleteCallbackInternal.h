#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2DB090)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2DB0E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2DB080)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DB010)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int OnQueryLeaderboardDefinitionsCompleteCallbackInternal_TypeDefinitionIndex = 42834;

	class OnQueryLeaderboardDefinitionsCompleteCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
