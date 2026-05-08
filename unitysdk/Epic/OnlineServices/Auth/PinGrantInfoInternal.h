#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class PinGrantInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x932240)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x319030)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_USERCODE_OFFSET UNITYSDK_OFFSET(0x931DA0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_VERIFICATIONURICOMPLETE_OFFSET UNITYSDK_OFFSET(0x932060)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0x931F00)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9321D0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x319040)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9321C0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_USERCODE_OFFSET UNITYSDK_OFFSET(0x931E50)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_VERIFICATIONURICOMPLETE_OFFSET UNITYSDK_OFFSET(0x932110)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0x931FB0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int PinGrantInfoInternal_TypeDefinitionIndex = 34623;

	struct alignas(8) PinGrantInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserCode; // 0x18
		::System::IntPtr m_VerificationURI; // 0x20
		::System::Int32 m_ExpiresIn; // 0x28
		::System::IntPtr m_VerificationURIComplete; // 0x30

		::System::String* get_UserCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_USERCODE_OFFSET))(this);
		}

		::System::Void set_UserCode(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_USERCODE_OFFSET))(this, value);
		}

		::System::String* get_VerificationURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_VERIFICATIONURI_OFFSET))(this);
		}

		::System::Void set_VerificationURI(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_VERIFICATIONURI_OFFSET))(this, value);
		}

		::System::Int32 get_ExpiresIn()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_EXPIRESIN_OFFSET))(this);
		}

		::System::Void set_ExpiresIn(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_EXPIRESIN_OFFSET))(this, value);
		}

		::System::String* get_VerificationURIComplete()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_VERIFICATIONURICOMPLETE_OFFSET))(this);
		}

		::System::Void set_VerificationURIComplete(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_VERIFICATIONURICOMPLETE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::PinGrantInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::PinGrantInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
