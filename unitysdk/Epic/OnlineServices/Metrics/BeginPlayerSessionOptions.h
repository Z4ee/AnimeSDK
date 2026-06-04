#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Metrics/UserControllerType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Metrics { class BeginPlayerSessionOptionsAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA3003F0)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_GET_CONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0xA300430)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA300410)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_GET_GAMESESSIONID_OFFSET UNITYSDK_OFFSET(0xA300470)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_GET_SERVERIP_OFFSET UNITYSDK_OFFSET(0xA300450)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA300400)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_SET_CONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0xA300440)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA300420)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_SET_GAMESESSIONID_OFFSET UNITYSDK_OFFSET(0xA300480)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_SET_SERVERIP_OFFSET UNITYSDK_OFFSET(0xA300460)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA300490)

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int BeginPlayerSessionOptions_TypeDefinitionIndex = 42596;

	class BeginPlayerSessionOptions : public ::System::Object
	{
	public:
		::System::String* _GameSessionId_k__BackingField; // 0x10
		::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId* _AccountId_k__BackingField; // 0x18
		::System::String* _DisplayName_k__BackingField; // 0x20
		::System::String* _ServerIp_k__BackingField; // 0x28
		::Epic::OnlineServices::Metrics::UserControllerType _ControllerType_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId* get_AccountId()
		{
			return ((::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_SET_ACCOUNTID_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_SET_DISPLAYNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Metrics::UserControllerType get_ControllerType()
		{
			return ((::Epic::OnlineServices::Metrics::UserControllerType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_GET_CONTROLLERTYPE_OFFSET))(this);
		}

		::System::Void set_ControllerType(::Epic::OnlineServices::Metrics::UserControllerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::UserControllerType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_SET_CONTROLLERTYPE_OFFSET))(this, a1);
		}

		::System::String* get_ServerIp()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_GET_SERVERIP_OFFSET))(this);
		}

		::System::Void set_ServerIp(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_SET_SERVERIP_OFFSET))(this, a1);
		}

		::System::String* get_GameSessionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_GET_GAMESESSIONID_OFFSET))(this);
		}

		::System::Void set_GameSessionId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONS_SET_GAMESESSIONID_OFFSET))(this, a1);
		}
	};
}
