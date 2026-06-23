#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_GET_DATEOFBIRTH_OFFSET UNITYSDK_OFFSET(0x1CE6F950)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CE6F930)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_GET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1CE6F970)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_SET_DATEOFBIRTH_OFFSET UNITYSDK_OFFSET(0x1CE6F960)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CE6F940)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_SET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1CE6F980)
#define EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6F990)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int CreateUserOptions_TypeDefinitionIndex = 35838;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_DateOfBirth()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_GET_DATEOFBIRTH_OFFSET))(this);
		}

		::System::Void set_DateOfBirth(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_SET_DATEOFBIRTH_OFFSET))(this, value);
		}

		::System::String* get_ParentEmail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_GET_PARENTEMAIL_OFFSET))(this);
		}

		::System::Void set_ParentEmail(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_CREATEUSEROPTIONS_SET_PARENTEMAIL_OFFSET))(this, value);
		}
	};
}
