#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class PinGrantInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA22000)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x352810)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_USERCODE_OFFSET UNITYSDK_OFFSET(0xA21B60)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_VERIFICATIONURICOMPLETE_OFFSET UNITYSDK_OFFSET(0xA21E20)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_GET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0xA21CC0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA21F90)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x36CDA0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xA21F80)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_USERCODE_OFFSET UNITYSDK_OFFSET(0xA21C10)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_VERIFICATIONURICOMPLETE_OFFSET UNITYSDK_OFFSET(0xA21ED0)
#define EPIC_ONLINESERVICES_AUTH_PINGRANTINFOINTERNAL_SET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0xA21D70)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int PinGrantInfoInternal_TypeDefinitionIndex = 36845;

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
