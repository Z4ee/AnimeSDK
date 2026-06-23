#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class IdToken; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x94A330)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_GET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x94A150)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_GET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x94A020)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x94A2C0)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x94A200)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x94A2B0)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x94A090)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int IdTokenInternal_TypeDefinitionIndex = 36077;

	struct alignas(8) IdTokenInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ProductUserId; // 0x18
		::System::IntPtr m_JsonWebToken; // 0x20

		::Epic::OnlineServices::ProductUserId* get_ProductUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_GET_PRODUCTUSERID_OFFSET))(this);
		}

		::System::Void set_ProductUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_PRODUCTUSERID_OFFSET))(this, value);
		}

		::System::String* get_JsonWebToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_GET_JSONWEBTOKEN_OFFSET))(this);
		}

		::System::Void set_JsonWebToken(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_JSONWEBTOKEN_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::IdToken* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::IdToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
