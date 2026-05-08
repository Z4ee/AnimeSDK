#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionModification; }
namespace Epic::OnlineServices::Sessions { class UpdateSessionOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D5BC0)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8D5A90)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8D59C0)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONSINTERNAL_SET_SESSIONMODIFICATIONHANDLE_OFFSET UNITYSDK_OFFSET(0x8D5900)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int UpdateSessionOptionsInternal_TypeDefinitionIndex = 33614;

	struct alignas(8) UpdateSessionOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionModificationHandle; // 0x18

		::System::Void set_SessionModificationHandle(::Epic::OnlineServices::Sessions::SessionModification* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModification*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONSINTERNAL_SET_SESSIONMODIFICATIONHANDLE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::UpdateSessionOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::UpdateSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
