#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Achievements { class OnAchievementsUnlockedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8374FD0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8375000)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x836B780)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8374FB0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int OnAchievementsUnlockedCallback_TypeDefinitionIndex = 36787;

	class OnAchievementsUnlockedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONACHIEVEMENTSUNLOCKEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
