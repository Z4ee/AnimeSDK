#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::KWS { class CreateUserOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x47D50)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x47CD0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONSINTERNAL_SET_DATEOFBIRTH_OFFSET UNITYSDK_OFFSET(0x47B60)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x47AA0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x47CC0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONSINTERNAL_SET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x47C10)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int CreateUserOptionsInternal_TypeDefinitionIndex = 45903;

	struct alignas(8) CreateUserOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_DateOfBirth; // 0x20
		::System::IntPtr m_ParentEmail; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_DateOfBirth(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONSINTERNAL_SET_DATEOFBIRTH_OFFSET))(this, a1);
		}

		::System::Void set_ParentEmail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONSINTERNAL_SET_PARENTEMAIL_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::KWS::CreateUserOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::CreateUserOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
