#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::ProgressionSnapshot { class DeleteSnapshotCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B7BBAA0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B7BBAD0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B7BB5A0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BB580)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int OnDeleteSnapshotCallback_TypeDefinitionIndex = 35349;

	class OnDeleteSnapshotCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
