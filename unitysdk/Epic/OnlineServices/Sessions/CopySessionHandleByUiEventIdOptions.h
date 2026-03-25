#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONS_GET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x839C4E0)
#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONS_SET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x839C4F0)
#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x839C500)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int CopySessionHandleByUiEventIdOptions_TypeDefinitionIndex = 35423;

	class CopySessionHandleByUiEventIdOptions : public ::System::Object
	{
	public:
		::System::UInt64 _UiEventId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt64 get_UiEventId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONS_GET_UIEVENTID_OFFSET))(this);
		}

		::System::Void set_UiEventId(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONS_SET_UIEVENTID_OFFSET))(this, value);
		}
	};
}
