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

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_COPYSEARCHRESULTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1DBD2C60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_FIND_OFFSET UNITYSDK_OFFSET(0x1DBD2DE0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_GETSEARCHRESULTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DBD3030)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_ONFINDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DBD2BB0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_RELEASE_OFFSET UNITYSDK_OFFSET(0x1DBD3250)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_REMOVEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1DBD32D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETLOBBYID_OFFSET UNITYSDK_OFFSET(0x1DBD3500)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETMAXRESULTS_OFFSET UNITYSDK_OFFSET(0x1DBD3700)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETPARAMETER_OFFSET UNITYSDK_OFFSET(0x1DBD3850)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETTARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DBD3A80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBD2C50)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD2C40)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearch_TypeDefinitionIndex = 36362;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopySearchResultByIndex(::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions* options, ::Epic::OnlineServices::Lobby::LobbyDetails*& outLobbyDetailsHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions*, ::Epic::OnlineServices::Lobby::LobbyDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_COPYSEARCHRESULTBYINDEX_OFFSET))(this, options, outLobbyDetailsHandle);
		}

		::System::Void Find(::Epic::OnlineServices::Lobby::LobbySearchFindOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchFindOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_FIND_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::UInt32 GetSearchResultCount(::Epic::OnlineServices::Lobby::LobbySearchGetSearchResultCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchGetSearchResultCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_GETSEARCHRESULTCOUNT_OFFSET))(this, options);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_RELEASE_OFFSET))(this);
		}

		::Epic::OnlineServices::Result RemoveParameter(::Epic::OnlineServices::Lobby::LobbySearchRemoveParameterOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchRemoveParameterOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_REMOVEPARAMETER_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetLobbyId(::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETLOBBYID_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetMaxResults(::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETMAXRESULTS_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetParameter(::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETPARAMETER_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetTargetUserId(::Epic::OnlineServices::Lobby::LobbySearchSetTargetUserIdOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetTargetUserIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_SETTARGETUSERID_OFFSET))(this, options);
		}

		static ::System::Void OnFindCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCH_ONFINDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
