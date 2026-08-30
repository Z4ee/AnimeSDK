#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::ProgressionSnapshot { class SubmitSnapshotCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DD8CD60)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DD8CD90)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DD8CD50)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD8CC60)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int OnSubmitSnapshotCallback_TypeDefinitionIndex = 45415;

	class OnSubmitSnapshotCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONSUBMITSNAPSHOTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
