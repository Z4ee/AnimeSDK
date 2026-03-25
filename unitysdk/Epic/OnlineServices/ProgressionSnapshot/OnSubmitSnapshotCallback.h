#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::ProgressionSnapshot { class SubmitSnapshotCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x86DAFC0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x86DAFF0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x86DAA70)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x86DAA50)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int OnSubmitSnapshotCallback_TypeDefinitionIndex = 35743;

	class OnSubmitSnapshotCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
