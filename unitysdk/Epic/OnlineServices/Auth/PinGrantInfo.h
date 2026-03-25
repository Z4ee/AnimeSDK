#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/PinGrantInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_GET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x85FD2C0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_GET_USERCODE_OFFSET UNITYSDK_OFFSET(0x85FD280)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_GET_VERIFICATIONURICOMPLETE_OFFSET UNITYSDK_OFFSET(0x85FD2E0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_GET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0x85FD2A0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x85FD900)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_SET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x85FD2D0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_SET_OFFSET UNITYSDK_OFFSET(0x85FD300)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_SET_USERCODE_OFFSET UNITYSDK_OFFSET(0x85FD290)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_SET_VERIFICATIONURICOMPLETE_OFFSET UNITYSDK_OFFSET(0x85FD2F0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_SET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0x85FD2B0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x85FDA30)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int PinGrantInfo_TypeDefinitionIndex = 36577;

	class PinGrantInfo : public ::System::Object
	{
	public:
		::System::String* _UserCode_k__BackingField; // 0x10
		::System::String* _VerificationURIComplete_k__BackingField; // 0x18
		::System::String* _VerificationURI_k__BackingField; // 0x20
		::System::Int32 _ExpiresIn_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_UserCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_GET_USERCODE_OFFSET))(this);
		}

		::System::Void set_UserCode(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_SET_USERCODE_OFFSET))(this, value);
		}

		::System::String* get_VerificationURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_GET_VERIFICATIONURI_OFFSET))(this);
		}

		::System::Void set_VerificationURI(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_SET_VERIFICATIONURI_OFFSET))(this, value);
		}

		::System::Int32 get_ExpiresIn()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_GET_EXPIRESIN_OFFSET))(this);
		}

		::System::Void set_ExpiresIn(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_SET_EXPIRESIN_OFFSET))(this, value);
		}

		::System::String* get_VerificationURIComplete()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_GET_VERIFICATIONURICOMPLETE_OFFSET))(this);
		}

		::System::Void set_VerificationURIComplete(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_SET_VERIFICATIONURICOMPLETE_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFO_SET_1_OFFSET))(this, other);
		}
	};
}
