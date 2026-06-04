#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class UnlinkAccountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x38A80)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x38A70)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x388E0)
#define EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x389A0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int UnlinkAccountOptionsInternal_TypeDefinitionIndex = 43148;

	struct alignas(8) UnlinkAccountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::UnlinkAccountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::UnlinkAccountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_UNLINKACCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
