#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONS_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x8BC6490)
#define EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONS_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x8BC64A0)
#define EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8BC64B0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int EndSessionOptions_TypeDefinitionIndex = 41265;

	class EndSessionOptions : public ::System::Object
	{
	public:
		::System::String* _SessionName_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_SessionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONS_GET_SESSIONNAME_OFFSET))(this);
		}

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONS_SET_SESSIONNAME_OFFSET))(this, value);
		}
	};
}
