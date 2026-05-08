#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Achievements { class OnQueryDefinitionsCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A4E3350)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A4E3380)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A4E2E50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E2E40)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int OnQueryDefinitionsCompleteCallback_TypeDefinitionIndex = 34840;

	class OnQueryDefinitionsCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYDEFINITIONSCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
