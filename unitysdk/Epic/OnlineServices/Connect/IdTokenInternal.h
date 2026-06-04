#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class IdToken; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x36AB0)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_GET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x368C0)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_GET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x36790)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x36A30)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x36970)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x36A20)
#define EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x36800)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int IdTokenInternal_TypeDefinitionIndex = 43098;

	struct alignas(8) IdTokenInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ProductUserId; // 0x18
		::System::IntPtr m_JsonWebToken; // 0x20

		::Epic::OnlineServices::ProductUserId* get_ProductUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_GET_PRODUCTUSERID_OFFSET))(this);
		}

		::System::Void set_ProductUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_PRODUCTUSERID_OFFSET))(this, a1);
		}

		::System::String* get_JsonWebToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_GET_JSONWEBTOKEN_OFFSET))(this);
		}

		::System::Void set_JsonWebToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_JSONWEBTOKEN_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::IdToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::IdToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_IDTOKENINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
