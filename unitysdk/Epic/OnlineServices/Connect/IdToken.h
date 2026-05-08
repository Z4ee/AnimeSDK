#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/IdTokenInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN_GET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x1A1D1590)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN_GET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x1A1D1570)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_1_OFFSET UNITYSDK_OFFSET(0x1A1D17E0)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x1A1D15A0)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_OFFSET UNITYSDK_OFFSET(0x1A1D15B0)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x1A1D1580)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1D1AB0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int IdToken_TypeDefinitionIndex = 34513;

	class IdToken : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _ProductUserId_k__BackingField; // 0x10
		::System::String* _JsonWebToken_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_ProductUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN_GET_PRODUCTUSERID_OFFSET))(this);
		}

		::System::Void set_ProductUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_PRODUCTUSERID_OFFSET))(this, value);
		}

		::System::String* get_JsonWebToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN_GET_JSONWEBTOKEN_OFFSET))(this);
		}

		::System::Void set_JsonWebToken(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_JSONWEBTOKEN_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::IdTokenInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::IdTokenInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKEN_SET_1_OFFSET))(this, other);
		}
	};
}
