#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientPlatform.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA0D4270)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0xA0D4210)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_GET_CLIENTPLATFORM_OFFSET UNITYSDK_OFFSET(0xA0D4250)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_GET_CLIENTTYPE_OFFSET UNITYSDK_OFFSET(0xA0D4230)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_GET_IPADDRESS_OFFSET UNITYSDK_OFFSET(0xA0D4290)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA0D4280)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0xA0D4220)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_SET_CLIENTPLATFORM_OFFSET UNITYSDK_OFFSET(0xA0D4260)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_SET_CLIENTTYPE_OFFSET UNITYSDK_OFFSET(0xA0D4240)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_SET_IPADDRESS_OFFSET UNITYSDK_OFFSET(0xA0D42A0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D42B0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int RegisterClientOptions_TypeDefinitionIndex = 43251;

	class RegisterClientOptions : public ::System::Object
	{
	public:
		::System::String* _AccountId_k__BackingField; // 0x10
		::System::String* _IpAddress_k__BackingField; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform _ClientPlatform_k__BackingField; // 0x20
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType _ClientType_k__BackingField; // 0x24
		::System::IntPtr _ClientHandle_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_SET_CLIENTHANDLE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType get_ClientType()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_GET_CLIENTTYPE_OFFSET))(this);
		}

		::System::Void set_ClientType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_SET_CLIENTTYPE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform get_ClientPlatform()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_GET_CLIENTPLATFORM_OFFSET))(this);
		}

		::System::Void set_ClientPlatform(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_SET_CLIENTPLATFORM_OFFSET))(this, a1);
		}

		::System::String* get_AccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_SET_ACCOUNTID_OFFSET))(this, a1);
		}

		::System::String* get_IpAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_GET_IPADDRESS_OFFSET))(this);
		}

		::System::Void set_IpAddress(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONS_SET_IPADDRESS_OFFSET))(this, a1);
		}
	};
}
