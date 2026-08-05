#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTC { class BlockParticipantCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CC446C0)
#define EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CC446F0)
#define EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC441A0)
#define EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC44180)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int OnBlockParticipantCallback_TypeDefinitionIndex = 35978;

	class OnBlockParticipantCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
