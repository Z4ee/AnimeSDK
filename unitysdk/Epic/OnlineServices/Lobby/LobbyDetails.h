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

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYATTRIBUTEBYINDEX_OFFSET UNITYSDK_OFFSET(0x1D82D180)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYATTRIBUTEBYKEY_OFFSET UNITYSDK_OFFSET(0x1D82D380)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYINFO_OFFSET UNITYSDK_OFFSET(0x1D82D600)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYMEMBERATTRIBUTEBYINDEX_OFFSET UNITYSDK_OFFSET(0x1D82D8A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYMEMBERATTRIBUTEBYKEY_OFFSET UNITYSDK_OFFSET(0x1D82DB50)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1D82DD50)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETLOBBYOWNER_OFFSET UNITYSDK_OFFSET(0x1D82DF70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETMEMBERATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1D82E190)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETMEMBERBYINDEX_OFFSET UNITYSDK_OFFSET(0x1D82E390)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D82E4F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D82E710)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D82D170)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D82D160)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetails_TypeDefinitionIndex = 36311;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopyAttributeByIndex(::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions* options, ::Epic::OnlineServices::Lobby::Attribute*& outAttribute)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions*, ::Epic::OnlineServices::Lobby::Attribute*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYATTRIBUTEBYINDEX_OFFSET))(this, options, outAttribute);
		}

		::Epic::OnlineServices::Result CopyAttributeByKey(::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions* options, ::Epic::OnlineServices::Lobby::Attribute*& outAttribute)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions*, ::Epic::OnlineServices::Lobby::Attribute*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYATTRIBUTEBYKEY_OFFSET))(this, options, outAttribute);
		}

		::Epic::OnlineServices::Result CopyInfo(::Epic::OnlineServices::Lobby::LobbyDetailsCopyInfoOptions* options, ::Epic::OnlineServices::Lobby::LobbyDetailsInfo*& outLobbyDetailsInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyInfoOptions*, ::Epic::OnlineServices::Lobby::LobbyDetailsInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYINFO_OFFSET))(this, options, outLobbyDetailsInfo);
		}

		::Epic::OnlineServices::Result CopyMemberAttributeByIndex(::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions* options, ::Epic::OnlineServices::Lobby::Attribute*& outAttribute)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions*, ::Epic::OnlineServices::Lobby::Attribute*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYMEMBERATTRIBUTEBYINDEX_OFFSET))(this, options, outAttribute);
		}

		::Epic::OnlineServices::Result CopyMemberAttributeByKey(::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByKeyOptions* options, ::Epic::OnlineServices::Lobby::Attribute*& outAttribute)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByKeyOptions*, ::Epic::OnlineServices::Lobby::Attribute*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_COPYMEMBERATTRIBUTEBYKEY_OFFSET))(this, options, outAttribute);
		}

		::System::UInt32 GetAttributeCount(::Epic::OnlineServices::Lobby::LobbyDetailsGetAttributeCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetAttributeCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETATTRIBUTECOUNT_OFFSET))(this, options);
		}

		::Epic::OnlineServices::ProductUserId* GetLobbyOwner(::Epic::OnlineServices::Lobby::LobbyDetailsGetLobbyOwnerOptions* options)
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetLobbyOwnerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETLOBBYOWNER_OFFSET))(this, options);
		}

		::System::UInt32 GetMemberAttributeCount(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETMEMBERATTRIBUTECOUNT_OFFSET))(this, options);
		}

		::Epic::OnlineServices::ProductUserId* GetMemberByIndex(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions* options)
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETMEMBERBYINDEX_OFFSET))(this, options);
		}

		::System::UInt32 GetMemberCount(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_GETMEMBERCOUNT_OFFSET))(this, options);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILS_RELEASE_OFFSET))(this);
		}
	};
}
