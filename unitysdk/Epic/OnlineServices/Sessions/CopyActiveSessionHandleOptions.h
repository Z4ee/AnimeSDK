#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONS_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1E5B33F0)
#define EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONS_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1E5B3400)
#define EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B3410)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int CopyActiveSessionHandleOptions_TypeDefinitionIndex = 35686;

	class CopyActiveSessionHandleOptions : public ::System::Object
	{
	public:
		::System::String* _SessionName_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_SessionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONS_GET_SESSIONNAME_OFFSET))(this);
		}

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONS_SET_SESSIONNAME_OFFSET))(this, value);
		}
	};
}
