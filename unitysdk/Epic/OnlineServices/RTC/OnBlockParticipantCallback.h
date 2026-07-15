#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTC { class BlockParticipantCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C012490)
#define EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0124C0)
#define EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C012480)
#define EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C012390)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int OnBlockParticipantCallback_TypeDefinitionIndex = 43201;

	class OnBlockParticipantCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
