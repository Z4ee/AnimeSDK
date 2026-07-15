#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class PinGrantInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A4D220)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x7A7FB0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_USERCODE_OFFSET UNITYSDK_OFFSET(0x3A4CD70)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_VERIFICATIONURICOMPLETE_OFFSET UNITYSDK_OFFSET(0x3A4D030)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0x3A4CED0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A4D1A0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x38ECC60)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A4D190)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_USERCODE_OFFSET UNITYSDK_OFFSET(0x3A4CE20)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_VERIFICATIONURICOMPLETE_OFFSET UNITYSDK_OFFSET(0x3A4D0E0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0x3A4CF80)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int PinGrantInfoInternal_TypeDefinitionIndex = 44068;

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

		::System::Void set_UserCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_USERCODE_OFFSET))(this, a1);
		}

		::System::String* get_VerificationURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_VERIFICATIONURI_OFFSET))(this);
		}

		::System::Void set_VerificationURI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_VERIFICATIONURI_OFFSET))(this, a1);
		}

		::System::Int32 get_ExpiresIn()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_EXPIRESIN_OFFSET))(this);
		}

		::System::Void set_ExpiresIn(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_EXPIRESIN_OFFSET))(this, a1);
		}

		::System::String* get_VerificationURIComplete()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_VERIFICATIONURICOMPLETE_OFFSET))(this);
		}

		::System::Void set_VerificationURIComplete(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_VERIFICATIONURICOMPLETE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::PinGrantInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::PinGrantInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
