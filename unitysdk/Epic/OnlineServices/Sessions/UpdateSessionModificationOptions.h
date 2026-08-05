#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONS_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1C2C10F0)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONS_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1C2C1100)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C1110)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int UpdateSessionModificationOptions_TypeDefinitionIndex = 35833;

	class UpdateSessionModificationOptions : public ::System::Object
	{
	public:
		::System::String* _SessionName_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_SessionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONS_GET_SESSIONNAME_OFFSET))(this);
		}

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONMODIFICATIONOPTIONS_SET_SESSIONNAME_OFFSET))(this, value);
		}
	};
}
