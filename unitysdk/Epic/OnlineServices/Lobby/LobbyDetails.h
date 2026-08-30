#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class Attribute; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsCopyAttributeByIndexOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsCopyAttributeByKeyOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsCopyInfoOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsCopyMemberAttributeByIndexOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsCopyMemberAttributeByKeyOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsGetAttributeCountOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsGetLobbyOwnerOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsGetMemberAttributeCountOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsGetMemberByIndexOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsGetMemberCountOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsInfo; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYATTRIBUTEBYINDEX_OFFSET UNITYSDK_OFFSET(0xB38AA10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYATTRIBUTEBYKEY_OFFSET UNITYSDK_OFFSET(0xB38AC10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYINFO_OFFSET UNITYSDK_OFFSET(0xB38AEA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYMEMBERATTRIBUTEBYINDEX_OFFSET UNITYSDK_OFFSET(0xB38B160)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYMEMBERATTRIBUTEBYKEY_OFFSET UNITYSDK_OFFSET(0xB38B3F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0xB38B5F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETLOBBYOWNER_OFFSET UNITYSDK_OFFSET(0xB38B830)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETMEMBERATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0xB38BA70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETMEMBERBYINDEX_OFFSET UNITYSDK_OFFSET(0xB38BC60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB38BDC0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_RELEASE_OFFSET UNITYSDK_OFFSET(0xB38C000)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB38AA00)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS__CTOR_OFFSET UNITYSDK_OFFSET(0xB38A9F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetails_TypeDefinitionIndex = 45716;

	class LobbyDetails : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 LobbydetailsCopyattributebyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbydetailsCopyattributebykeyApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbydetailsCopyinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbydetailsCopymemberattributebyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbydetailsCopymemberattributebykeyApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbydetailsGetattributecountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbydetailsGetlobbyownerApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbydetailsGetmemberattributecountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbydetailsGetmemberbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbydetailsGetmembercountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbydetailsInfoApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CopyAttributeByIndex(::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions* a1, ::Epic::OnlineServices::Lobby::Attribute*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions*, ::Epic::OnlineServices::Lobby::Attribute*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYATTRIBUTEBYINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyAttributeByKey(::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions* a1, ::Epic::OnlineServices::Lobby::Attribute*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions*, ::Epic::OnlineServices::Lobby::Attribute*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYATTRIBUTEBYKEY_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyInfo(::Epic::OnlineServices::Lobby::LobbyDetailsCopyInfoOptions* a1, ::Epic::OnlineServices::Lobby::LobbyDetailsInfo*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyInfoOptions*, ::Epic::OnlineServices::Lobby::LobbyDetailsInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYINFO_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyMemberAttributeByIndex(::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions* a1, ::Epic::OnlineServices::Lobby::Attribute*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions*, ::Epic::OnlineServices::Lobby::Attribute*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYMEMBERATTRIBUTEBYINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyMemberAttributeByKey(::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByKeyOptions* a1, ::Epic::OnlineServices::Lobby::Attribute*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByKeyOptions*, ::Epic::OnlineServices::Lobby::Attribute*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYMEMBERATTRIBUTEBYKEY_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetAttributeCount(::Epic::OnlineServices::Lobby::LobbyDetailsGetAttributeCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetAttributeCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETATTRIBUTECOUNT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* GetLobbyOwner(::Epic::OnlineServices::Lobby::LobbyDetailsGetLobbyOwnerOptions* a1)
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetLobbyOwnerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETLOBBYOWNER_OFFSET))(this, a1);
		}

		::System::UInt32 GetMemberAttributeCount(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETMEMBERATTRIBUTECOUNT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* GetMemberByIndex(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions* a1)
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETMEMBERBYINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 GetMemberCount(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETMEMBERCOUNT_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_RELEASE_OFFSET))(this);
		}
	};
}
