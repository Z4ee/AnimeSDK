#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Connect { class UserLoginInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x38D70)
#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x38B30)
#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x38D60)
#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x38BE0)
#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x38C90)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int UserLoginInfoInternal_TypeDefinitionIndex = 43150;

	struct alignas(8) UserLoginInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_DisplayName; // 0x18

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_SET_DISPLAYNAME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::UserLoginInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::UserLoginInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
