#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_GET_DATEOFBIRTH_OFFSET UNITYSDK_OFFSET(0x1BAB4200)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BAB41E0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_GET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1BAB4220)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_SET_DATEOFBIRTH_OFFSET UNITYSDK_OFFSET(0x1BAB4210)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BAB41F0)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_SET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1BAB4230)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB4240)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int CreateUserOptions_TypeDefinitionIndex = 43720;

	class CreateUserOptions : public ::System::Object
	{
	public:
		::System::String* _DateOfBirth_k__BackingField; // 0x10
		::System::String* _ParentEmail_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_DateOfBirth()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_GET_DATEOFBIRTH_OFFSET))(this);
		}

		::System::Void set_DateOfBirth(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_SET_DATEOFBIRTH_OFFSET))(this, a1);
		}

		::System::String* get_ParentEmail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_GET_PARENTEMAIL_OFFSET))(this);
		}

		::System::Void set_ParentEmail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_SET_PARENTEMAIL_OFFSET))(this, a1);
		}
	};
}
