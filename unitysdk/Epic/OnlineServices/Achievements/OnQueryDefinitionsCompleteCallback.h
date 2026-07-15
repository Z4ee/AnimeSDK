#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Achievements { class OnQueryDefinitionsCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BDB3910)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BDB3940)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BDAA4A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDB3820)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int OnQueryDefinitionsCompleteCallback_TypeDefinitionIndex = 44285;

	class OnQueryDefinitionsCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
