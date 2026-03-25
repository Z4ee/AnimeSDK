#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/UserLoginInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x862F380)
#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFO_SET_1_OFFSET UNITYSDK_OFFSET(0x862F590)
#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFO_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x862F390)
#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFO_SET_OFFSET UNITYSDK_OFFSET(0x862F3A0)
#define EPIC_ONLINESERVICES_CONNECT_USERLOGININFO__CTOR_OFFSET UNITYSDK_OFFSET(0x862F7A0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int UserLoginInfo_TypeDefinitionIndex = 36520;

	class UserLoginInfo : public ::System::Object
	{
	public:
		::System::String* _DisplayName_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFO__CTOR_OFFSET))(this);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFO_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFO_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_USERLOGININFO_SET_1_OFFSET))(this, other);
		}
	};
}
