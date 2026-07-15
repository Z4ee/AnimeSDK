#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONS_GET_PLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1C0C2780)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONS_SET_PLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1C0C2790)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C27A0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int ActiveSessionGetRegisteredPlayerByIndexOptions_TypeDefinitionIndex = 42893;

	class ActiveSessionGetRegisteredPlayerByIndexOptions : public ::System::Object
	{
	public:
		::System::UInt32 _PlayerIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PlayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONS_GET_PLAYERINDEX_OFFSET))(this);
		}

		::System::Void set_PlayerIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONS_SET_PLAYERINDEX_OFFSET))(this, a1);
		}
	};
}
