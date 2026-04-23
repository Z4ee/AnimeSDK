#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONS_GET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x8BC1A80)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONS_SET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x8BC1A90)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8BC1AA0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int DeletePersistentAuthOptions_TypeDefinitionIndex = 42367;

	class DeletePersistentAuthOptions : public ::System::Object
	{
	public:
		::System::String* _RefreshToken_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_RefreshToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONS_GET_REFRESHTOKEN_OFFSET))(this);
		}

		::System::Void set_RefreshToken(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONS_SET_REFRESHTOKEN_OFFSET))(this, value);
		}
	};
}
