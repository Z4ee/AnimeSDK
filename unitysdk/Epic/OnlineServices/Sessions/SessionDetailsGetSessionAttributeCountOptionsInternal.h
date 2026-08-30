#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionDetailsGetSessionAttributeCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSGETSESSIONATTRIBUTECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSGETSESSIONATTRIBUTECOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x16120)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSGETSESSIONATTRIBUTECOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1EC0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsGetSessionAttributeCountOptionsInternal_TypeDefinitionIndex = 45180;

	struct alignas(4) SessionDetailsGetSessionAttributeCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionDetailsGetSessionAttributeCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsGetSessionAttributeCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSGETSESSIONATTRIBUTECOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSGETSESSIONATTRIBUTECOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSGETSESSIONATTRIBUTECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
