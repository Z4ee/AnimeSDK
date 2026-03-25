#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class CopySessionHandleByUiEventIdOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x11B50)
#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9650)
#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONSINTERNAL_SET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x8D10)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int CopySessionHandleByUiEventIdOptionsInternal_TypeDefinitionIndex = 35424;

	struct alignas(8) CopySessionHandleByUiEventIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt64 m_UiEventId; // 0x18

		::System::Void set_UiEventId(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONSINTERNAL_SET_UIEVENTID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYUIEVENTIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
