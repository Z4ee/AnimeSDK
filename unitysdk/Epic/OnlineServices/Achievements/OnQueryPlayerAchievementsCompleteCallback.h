#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Achievements { class OnQueryPlayerAchievementsCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8377020)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8377050)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x836C770)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8377000)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int OnQueryPlayerAchievementsCompleteCallback_TypeDefinitionIndex = 36799;

	class OnQueryPlayerAchievementsCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
