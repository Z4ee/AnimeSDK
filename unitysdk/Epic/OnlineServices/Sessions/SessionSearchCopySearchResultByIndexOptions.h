#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONS_GET_SESSIONINDEX_OFFSET UNITYSDK_OFFSET(0x1C18D7D0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONS_SET_SESSIONINDEX_OFFSET UNITYSDK_OFFSET(0x1C18D7E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C18D7F0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchCopySearchResultByIndexOptions_TypeDefinitionIndex = 43025;

	class SessionSearchCopySearchResultByIndexOptions : public ::System::Object
	{
	public:
		::System::UInt32 _SessionIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SessionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONS_GET_SESSIONINDEX_OFFSET))(this);
		}

		::System::Void set_SessionIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONS_SET_SESSIONINDEX_OFFSET))(this, a1);
		}
	};
}
