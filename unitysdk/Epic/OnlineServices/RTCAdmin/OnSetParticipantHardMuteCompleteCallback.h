#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAdmin { class SetParticipantHardMuteCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8F1CD80)
#define EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8F1CDB0)
#define EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8F1C830)
#define EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8F1C810)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int OnSetParticipantHardMuteCompleteCallback_TypeDefinitionIndex = 41505;

	class OnSetParticipantHardMuteCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
