#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::ProgressionSnapshot { class DeleteSnapshotCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DD8CB40)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DD8CB70)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DD8CB30)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD8CA40)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int OnDeleteSnapshotCallback_TypeDefinitionIndex = 45413;

	class OnDeleteSnapshotCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
