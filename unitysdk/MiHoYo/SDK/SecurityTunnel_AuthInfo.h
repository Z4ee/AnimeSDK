#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x770220)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_APP_ID_OFFSET UNITYSDK_OFFSET(0x7163D0)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x28E6B0)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_GAME_OFFSET UNITYSDK_OFFSET(0x3AA080)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_JSONSTRING_OFFSET UNITYSDK_OFFSET(0x88FA50)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x2EF960)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_REGION_OFFSET UNITYSDK_OFFSET(0x3A4CE0)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x381840)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x787C70)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_APP_ID_OFFSET UNITYSDK_OFFSET(0x7163C0)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x50A4B0)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x6D5350)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_GAME_OFFSET UNITYSDK_OFFSET(0x686700)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x485B70)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_REGION_OFFSET UNITYSDK_OFFSET(0x7163F0)
#define MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x381850)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_AuthInfo_TypeDefinitionIndex = 35195;

	struct alignas(8) SecurityTunnel_AuthInfo
	{
		::System::String* _account_id_k__BackingField; // 0x10
		::System::Int32 _channel_id_k__BackingField; // 0x18
		::System::String* _token_k__BackingField; // 0x20
		::System::String* _device_id_k__BackingField; // 0x28
		::System::String* _game_k__BackingField; // 0x30
		::System::Int32 _platform_k__BackingField; // 0x38
		::System::String* _region_k__BackingField; // 0x40
		::System::Int32 _app_id_k__BackingField; // 0x48
		::System::Int32 _accountType_k__BackingField; // 0x4C

		::System::String* get_account_id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_ACCOUNT_ID_OFFSET))(this);
		}

		::System::Void set_account_id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_ACCOUNT_ID_OFFSET))(this, value);
		}

		::System::Int32 get_channel_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_CHANNEL_ID_OFFSET))(this);
		}

		::System::Void set_channel_id(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_CHANNEL_ID_OFFSET))(this, value);
		}

		::System::String* get_token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_token(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_TOKEN_OFFSET))(this, value);
		}

		::System::String* get_device_id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_DEVICE_ID_OFFSET))(this);
		}

		::System::Void set_device_id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_DEVICE_ID_OFFSET))(this, value);
		}

		::System::String* get_game()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_GAME_OFFSET))(this);
		}

		::System::Void set_game(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_GAME_OFFSET))(this, value);
		}

		::System::Int32 get_platform()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_PLATFORM_OFFSET))(this);
		}

		::System::Void set_platform(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_PLATFORM_OFFSET))(this, value);
		}

		::System::String* get_region()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_REGION_OFFSET))(this);
		}

		::System::Void set_region(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_REGION_OFFSET))(this, value);
		}

		::System::Int32 get_app_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_APP_ID_OFFSET))(this);
		}

		::System::Void set_app_id(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_APP_ID_OFFSET))(this, value);
		}

		::System::Int32 get_accountType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_ACCOUNTTYPE_OFFSET))(this);
		}

		::System::Void set_accountType(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_SET_ACCOUNTTYPE_OFFSET))(this, value);
		}

		::System::String* get_JSONString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_AUTHINFO_GET_JSONSTRING_OFFSET))(this);
		}
	};
}
