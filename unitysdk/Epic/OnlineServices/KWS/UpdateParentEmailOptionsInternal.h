#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::KWS { class UpdateParentEmailOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C4ACD0)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C4AC50)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3C4AAD0)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C4AC40)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONSINTERNAL_SET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x3C4AB90)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int UpdateParentEmailOptionsInternal_TypeDefinitionIndex = 45941;

	struct alignas(8) UpdateParentEmailOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_ParentEmail; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_ParentEmail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONSINTERNAL_SET_PARENTEMAIL_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::KWS::UpdateParentEmailOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::UpdateParentEmailOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
