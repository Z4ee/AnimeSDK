#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Metrics/BeginPlayerSessionOptionsAccountIdInternal.h"
#include "unitysdk/Epic/OnlineServices/Metrics/UserControllerType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Metrics { class BeginPlayerSessionOptions; }
namespace Epic::OnlineServices::Metrics { class BeginPlayerSessionOptionsAccountId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x537C0)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x53750)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x534C0)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_CONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0xBC50)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x53530)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_GAMESESSIONID_OFFSET UNITYSDK_OFFSET(0x53690)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x53740)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_SERVERIP_OFFSET UNITYSDK_OFFSET(0x535E0)

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int BeginPlayerSessionOptionsInternal_TypeDefinitionIndex = 41794;

	struct alignas(8) BeginPlayerSessionOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal m_AccountId; // 0x14
		::System::IntPtr m_DisplayName; // 0x20
		::Epic::OnlineServices::Metrics::UserControllerType m_ControllerType; // 0x28
		::System::IntPtr m_ServerIp; // 0x30
		::System::IntPtr m_GameSessionId; // 0x38

		::System::Void set_AccountId(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_ACCOUNTID_OFFSET))(this, value);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Void set_ControllerType(::Epic::OnlineServices::Metrics::UserControllerType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::UserControllerType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_CONTROLLERTYPE_OFFSET))(this, value);
		}

		::System::Void set_ServerIp(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_SERVERIP_OFFSET))(this, value);
		}

		::System::Void set_GameSessionId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_GAMESESSIONID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
