#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::KWS { class QueryPermissionsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2D19A0)
#define EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2D19D0)
#define EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2D1250)
#define EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2D18B0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int OnQueryPermissionsCallback_TypeDefinitionIndex = 42873;

	class OnQueryPermissionsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
