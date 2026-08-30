#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/CredentialsInternal.h"
#include "unitysdk/Epic/OnlineServices/ExternalCredentialType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALS_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0xB340C70)
#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB340C90)
#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALS_SET_1_OFFSET UNITYSDK_OFFSET(0xB340F10)
#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALS_SET_OFFSET UNITYSDK_OFFSET(0xB340CB0)
#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALS_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0xB340C80)
#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALS_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xB340CA0)
#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALS__CTOR_OFFSET UNITYSDK_OFFSET(0xB341030)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int Credentials_TypeDefinitionIndex = 46126;

	class Credentials : public ::System::Object
	{
	public:
		::System::String* _Token_k__BackingField; // 0x10
		::Epic::OnlineServices::ExternalCredentialType _Type_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALS__CTOR_OFFSET))(this);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALS_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALS_SET_TOKEN_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ExternalCredentialType get_Type()
		{
			return ((::Epic::OnlineServices::ExternalCredentialType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALS_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::ExternalCredentialType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalCredentialType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALS_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::CredentialsInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::CredentialsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALS_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALS_SET_1_OFFSET))(this, a1);
		}
	};
}
