#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Connect { class UserLoginInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x35780)
#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x35430)
#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x35660)
#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x354E0)
#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x35590)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int UserLoginInfoInternal_TypeDefinitionIndex = 42347;

	struct alignas(8) UserLoginInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_DisplayName; // 0x18

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::UserLoginInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::UserLoginInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
