#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class UpdateSessionModificationOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AAA0)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1A980)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1A8B0)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1A800)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int UpdateSessionModificationOptionsInternal_TypeDefinitionIndex = 35567;

	struct alignas(8) UpdateSessionModificationOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionName; // 0x18

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
