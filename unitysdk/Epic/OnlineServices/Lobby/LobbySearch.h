#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Lobby { class LobbyDetails; }
namespace Epic::OnlineServices::Lobby { class LobbySearchCopySearchResultByIndexOptions; }
namespace Epic::OnlineServices::Lobby { class LobbySearchFindOptions; }
namespace Epic::OnlineServices::Lobby { class LobbySearchGetSearchResultCountOptions; }
namespace Epic::OnlineServices::Lobby { class LobbySearchOnFindCallback; }
namespace Epic::OnlineServices::Lobby { class LobbySearchRemoveParameterOptions; }
namespace Epic::OnlineServices::Lobby { class LobbySearchSetLobbyIdOptions; }
namespace Epic::OnlineServices::Lobby { class LobbySearchSetMaxResultsOptions; }
namespace Epic::OnlineServices::Lobby { class LobbySearchSetParameterOptions; }
namespace Epic::OnlineServices::Lobby { class LobbySearchSetTargetUserIdOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_COPYSEARCHRESULTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1DCDF210)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_FIND_OFFSET UNITYSDK_OFFSET(0x1DCDF3A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_GETSEARCHRESULTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DCDF600)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_ONFINDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DCDF150)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_RELEASE_OFFSET UNITYSDK_OFFSET(0x1DCDF840)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_REMOVEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1DCDF8C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETLOBBYID_OFFSET UNITYSDK_OFFSET(0x1DCDFAF0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETMAXRESULTS_OFFSET UNITYSDK_OFFSET(0x1DCDFCF0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETPARAMETER_OFFSET UNITYSDK_OFFSET(0x1DCDFE50)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETTARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DCE0080)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DCDF200)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCDF1F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearch_TypeDefinitionIndex = 45767;

	class LobbySearch : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 LobbysearchCopysearchresultbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbysearchFindApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbysearchGetsearchresultcountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbysearchRemoveparameterApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbysearchSetlobbyidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbysearchSetmaxresultsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbysearchSetparameterApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbysearchSettargetuseridApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CopySearchResultByIndex(::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions* a1, ::Epic::OnlineServices::Lobby::LobbyDetails*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions*, ::Epic::OnlineServices::Lobby::LobbyDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_COPYSEARCHRESULTBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void Find(::Epic::OnlineServices::Lobby::LobbySearchFindOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchFindOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_FIND_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSearchResultCount(::Epic::OnlineServices::Lobby::LobbySearchGetSearchResultCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchGetSearchResultCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_GETSEARCHRESULTCOUNT_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_RELEASE_OFFSET))(this);
		}

		::Epic::OnlineServices::Result RemoveParameter(::Epic::OnlineServices::Lobby::LobbySearchRemoveParameterOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchRemoveParameterOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_REMOVEPARAMETER_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetLobbyId(::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETLOBBYID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetMaxResults(::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETMAXRESULTS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetParameter(::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETPARAMETER_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetTargetUserId(::Epic::OnlineServices::Lobby::LobbySearchSetTargetUserIdOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetTargetUserIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETTARGETUSERID_OFFSET))(this, a1);
		}

		static ::System::Void OnFindCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_ONFINDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
