#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Achievements { class OnUnlockAchievementsCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DB71420)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DB71450)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DB671D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB71330)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int OnUnlockAchievementsCompleteCallback_TypeDefinitionIndex = 46475;

	class OnUnlockAchievementsCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
