#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONS_GET_ATTRINDEX_OFFSET UNITYSDK_OFFSET(0x1DCA81D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONS_SET_ATTRINDEX_OFFSET UNITYSDK_OFFSET(0x1DCA81E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA81F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsCopyAttributeByIndexOptions_TypeDefinitionIndex = 36312;

	class LobbyDetailsCopyAttributeByIndexOptions : public ::System::Object
	{
	public:
		::System::UInt32 _AttrIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AttrIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONS_GET_ATTRINDEX_OFFSET))(this);
		}

		::System::Void set_AttrIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYINDEXOPTIONS_SET_ATTRINDEX_OFFSET))(this, value);
		}
	};
}
