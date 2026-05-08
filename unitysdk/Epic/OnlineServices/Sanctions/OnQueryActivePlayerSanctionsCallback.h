#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sanctions { class QueryActivePlayerSanctionsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SANCTIONS_ONQUERYACTIVEPLAYERSANCTIONSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19FABDA0)
#define EPIC_ONLINESERVICES_SANCTIONS_ONQUERYACTIVEPLAYERSANCTIONSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19FABDD0)
#define EPIC_ONLINESERVICES_SANCTIONS_ONQUERYACTIVEPLAYERSANCTIONSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19FAB8A0)
#define EPIC_ONLINESERVICES_SANCTIONS_ONQUERYACTIVEPLAYERSANCTIONSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19FAB890)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int OnQueryActivePlayerSanctionsCallback_TypeDefinitionIndex = 33619;

	class OnQueryActivePlayerSanctionsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_ONQUERYACTIVEPLAYERSANCTIONSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_ONQUERYACTIVEPLAYERSANCTIONSCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_ONQUERYACTIVEPLAYERSANCTIONSCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_ONQUERYACTIVEPLAYERSANCTIONSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
