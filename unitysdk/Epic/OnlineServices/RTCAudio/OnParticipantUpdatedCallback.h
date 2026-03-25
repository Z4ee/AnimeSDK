#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAudio { class ParticipantUpdatedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONPARTICIPANTUPDATEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x86F65C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONPARTICIPANTUPDATEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x86F65F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONPARTICIPANTUPDATEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x86F6070)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONPARTICIPANTUPDATEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x86F6050)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnParticipantUpdatedCallback_TypeDefinitionIndex = 35637;

	class OnParticipantUpdatedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONPARTICIPANTUPDATEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONPARTICIPANTUPDATEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONPARTICIPANTUPDATEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONPARTICIPANTUPDATEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
