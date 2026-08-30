#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAdmin { class SetParticipantHardMuteCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB3E5130)
#define EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB3E5160)
#define EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB3E5120)
#define EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E5030)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int OnSetParticipantHardMuteCompleteCallback_TypeDefinitionIndex = 45351;

	class OnSetParticipantHardMuteCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
