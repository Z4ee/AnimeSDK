#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E5AF200)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E5AF250)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E5AEEF0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AEED0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int OnQueryLeaderboardDefinitionsCompleteCallbackInternal_TypeDefinitionIndex = 36472;

	class OnQueryLeaderboardDefinitionsCompleteCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
