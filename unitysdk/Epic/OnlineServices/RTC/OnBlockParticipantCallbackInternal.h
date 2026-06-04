#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA33C7E0)
#define EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA33C830)
#define EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0xA33C7D0)
#define EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xA33C760)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int OnBlockParticipantCallbackInternal_TypeDefinitionIndex = 42341;

	class OnBlockParticipantCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACKINTERNAL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACKINTERNAL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONBLOCKPARTICIPANTCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
