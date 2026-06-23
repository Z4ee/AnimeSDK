#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONS_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C829680)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONS_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1C829690)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8296A0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationRemoveAttributeOptions_TypeDefinitionIndex = 35128;

	class SessionModificationRemoveAttributeOptions : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONS_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONS_SET_KEY_OFFSET))(this, value);
		}
	};
}
