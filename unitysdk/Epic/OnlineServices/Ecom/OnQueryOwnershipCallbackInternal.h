#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB363E20)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB363E70)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0xB363E10)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xB363DA0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int OnQueryOwnershipCallbackInternal_TypeDefinitionIndex = 46047;

	class OnQueryOwnershipCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACKINTERNAL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACKINTERNAL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
