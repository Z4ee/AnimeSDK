#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ComparisonOp.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionSearchRemoveParameterOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x185D0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x26F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x18450)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x18500)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchRemoveParameterOptionsInternal_TypeDefinitionIndex = 41372;

	struct alignas(8) SessionSearchRemoveParameterOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18
		::Epic::OnlineServices::ComparisonOp m_ComparisonOp; // 0x20

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_KEY_OFFSET))(this, value);
		}

		::System::Void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ComparisonOp))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_COMPARISONOP_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
