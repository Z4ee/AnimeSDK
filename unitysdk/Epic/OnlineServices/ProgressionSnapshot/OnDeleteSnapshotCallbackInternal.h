#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DD8CC00)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DD8CC50)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DD8CBF0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD8CB80)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int OnDeleteSnapshotCallbackInternal_TypeDefinitionIndex = 45414;

	class OnDeleteSnapshotCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACKINTERNAL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACKINTERNAL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ONDELETESNAPSHOTCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
