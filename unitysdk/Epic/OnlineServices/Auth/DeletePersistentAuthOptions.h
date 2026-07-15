#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONS_GET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x1C221520)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONS_SET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x1C221530)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C221540)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int DeletePersistentAuthOptions_TypeDefinitionIndex = 44031;

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

		::System::Void set_RefreshToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONS_SET_REFRESHTOKEN_OFFSET))(this, a1);
		}
	};
}
