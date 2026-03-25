#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8657470)
#define EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x86574C0)
#define EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x8657180)
#define EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x8653330)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int OnRejectInviteCallbackInternal_TypeDefinitionIndex = 36293;

	class OnRejectInviteCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACKINTERNAL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
