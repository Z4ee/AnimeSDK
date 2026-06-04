#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/IdTokenInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN_GET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0xA2A0870)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN_GET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0xA2A0850)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_1_OFFSET UNITYSDK_OFFSET(0xA2A0BE0)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0xA2A0880)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_OFFSET UNITYSDK_OFFSET(0xA2A0890)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0xA2A0860)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A0D00)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int IdToken_TypeDefinitionIndex = 43097;

	class IdToken : public ::System::Object
	{
	public:
		::System::String* _JsonWebToken_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _ProductUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_ProductUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN_GET_PRODUCTUSERID_OFFSET))(this);
		}

		::System::Void set_ProductUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_PRODUCTUSERID_OFFSET))(this, a1);
		}

		::System::String* get_JsonWebToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN_GET_JSONWEBTOKEN_OFFSET))(this);
		}

		::System::Void set_JsonWebToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_JSONWEBTOKEN_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::IdTokenInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::IdTokenInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_1_OFFSET))(this, a1);
		}
	};
}
