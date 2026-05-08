#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Achievements { class OnUnlockAchievementsCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CCFA20)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CCFA50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CCF4B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCFA10)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int OnUnlockAchievementsCompleteCallback_TypeDefinitionIndex = 34848;

	class OnUnlockAchievementsCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
