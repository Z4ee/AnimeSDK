#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class GetProductUserExternalAccountCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x363A0)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x36390)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x362C0)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x36200)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int GetProductUserExternalAccountCountOptionsInternal_TypeDefinitionIndex = 43094;

	struct alignas(8) GetProductUserExternalAccountCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
