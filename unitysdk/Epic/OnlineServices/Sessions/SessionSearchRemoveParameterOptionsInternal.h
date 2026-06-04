#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ComparisonOp.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionSearchRemoveParameterOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186A0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x18690)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x2A90)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x18510)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x185C0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchRemoveParameterOptionsInternal_TypeDefinitionIndex = 42175;

	struct alignas(8) SessionSearchRemoveParameterOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18
		::Epic::OnlineServices::ComparisonOp m_ComparisonOp; // 0x20

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_KEY_OFFSET))(this, a1);
		}

		::System::Void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ComparisonOp))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_COMPARISONOP_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
