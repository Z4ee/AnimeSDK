#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/RPG/Client/BaseLobby.h"

namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client { class MatchThreeOpponentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2LOBBY_CHANGESELFBIRDANDPROPS_OFFSET UNITYSDK_OFFSET(0x1C99AE90)
#define RPG_CLIENT_MATCHTHREEV2LOBBY_CHANGESELFSTATE_OFFSET UNITYSDK_OFFSET(0x1C99B1D0)
#define RPG_CLIENT_MATCHTHREEV2LOBBY_GETCUROPPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C99BAC0)
#define RPG_CLIENT_MATCHTHREEV2LOBBY_GETOPPONENTDATABYUID_OFFSET UNITYSDK_OFFSET(0x1C99B3D0)
#define RPG_CLIENT_MATCHTHREEV2LOBBY_GET_OPPONENTS_OFFSET UNITYSDK_OFFSET(0x1C99C200)
#define RPG_CLIENT_MATCHTHREEV2LOBBY_GET_SELFOPPONENTDATA_OFFSET UNITYSDK_OFFSET(0x1C99B150)
#define RPG_CLIENT_MATCHTHREEV2LOBBY_ISTARGETEDBYINVITATION_OFFSET UNITYSDK_OFFSET(0x1C99BA50)
#define RPG_CLIENT_MATCHTHREEV2LOBBY_SAVECURUSEBIRD_OFFSET UNITYSDK_OFFSET(0x1C99B4D0)
#define RPG_CLIENT_MATCHTHREEV2LOBBY_SAVECURUSEPROPS_OFFSET UNITYSDK_OFFSET(0x1C99B680)
#define RPG_CLIENT_MATCHTHREEV2LOBBY_SET_OPPONENTS_OFFSET UNITYSDK_OFFSET(0x1C99C210)
#define RPG_CLIENT_MATCHTHREEV2LOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0x1C99AF50)
#define RPG_CLIENT_MATCHTHREEV2LOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C99C220)
#define RPG_CLIENT_MATCHTHREEV2LOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0x1C99C0D0)
#define RPG_CLIENT_MATCHTHREEV2LOBBY__ISINMATCHEDSTATE_OFFSET UNITYSDK_OFFSET(0x1C99C190)
#define RPG_CLIENT_MATCHTHREEV2LOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0x1C99BBE0)
#define RPG_CLIENT_MATCHTHREEV2LOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0x1C99C070)
#define RPG_CLIENT_MATCHTHREEV2LOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0x1C99BD90)
#define RPG_CLIENT_MATCHTHREEV2LOBBY__SYNCOPPONENTS_OFFSET UNITYSDK_OFFSET(0x1C99BDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2Lobby_TypeDefinitionIndex = 66085;

	class MatchThreeV2Lobby : public ::RPG::Client::BaseLobby
	{
	public:
		// static const ::System::String* _MAX_MEMBER_KEY; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* _Opponents_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY__CTOR_OFFSET))(this);
		}

		::System::Void ChangeSelfBirdAndProps(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY_CHANGESELFBIRDANDPROPS_OFFSET))(this, a1, a2);
		}

		::System::Void StartMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY_STARTMATCH_OFFSET))(this);
		}

		::System::Void ChangeSelfState(::Enum_3_63C076C405BE0674_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY_CHANGESELFSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeOpponentData* GetOpponentDataByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY_GETOPPONENTDATABYUID_OFFSET))(this, a1);
		}

		::System::Void SaveCurUseBird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY_SAVECURUSEBIRD_OFFSET))(this);
		}

		::System::Void SaveCurUseProps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY_SAVECURUSEPROPS_OFFSET))(this);
		}

		::System::Boolean IsTargetedByInvitation(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY_ISTARGETEDBYINVITATION_OFFSET))(this, a1);
		}

		::System::Int32 GetCurOpponentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY_GETCUROPPONENTCOUNT_OFFSET))(this);
		}

		::System::Void _OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _SyncOpponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY__SYNCOPPONENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _GetMembersByLobbyState()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET))(this);
		}

		::System::Boolean _IsInMatchedState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY__ISINMATCHEDSTATE_OFFSET))(this);
		}

		::RPG::Client::MatchThreeOpponentData* get_SelfOpponentData()
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY_GET_SELFOPPONENTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* get_Opponents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY_GET_OPPONENTS_OFFSET))(this);
		}

		::System::Void set_Opponents(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY_SET_OPPONENTS_OFFSET))(this, a1);
		}
	};
}
