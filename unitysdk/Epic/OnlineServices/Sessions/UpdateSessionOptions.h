#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Sessions { class SessionModification; }

#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONS_GET_SESSIONMODIFICATIONHANDLE_OFFSET UNITYSDK_OFFSET(0x1C4CA980)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONS_SET_SESSIONMODIFICATIONHANDLE_OFFSET UNITYSDK_OFFSET(0x1C4CA990)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CA9A0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int UpdateSessionOptions_TypeDefinitionIndex = 35176;

	class UpdateSessionOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Sessions::SessionModification* _SessionModificationHandle_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Sessions::SessionModification* get_SessionModificationHandle()
		{
			return ((::Epic::OnlineServices::Sessions::SessionModification*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONS_GET_SESSIONMODIFICATIONHANDLE_OFFSET))(this);
		}

		::System::Void set_SessionModificationHandle(::Epic::OnlineServices::Sessions::SessionModification* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModification*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONOPTIONS_SET_SESSIONMODIFICATIONHANDLE_OFFSET))(this, value);
		}
	};
}
