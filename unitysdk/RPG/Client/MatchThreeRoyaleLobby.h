#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/RPG/Client/BaseLobby.h"

namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client { class MatchThreeOpponentData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEROYALELOBBY_CHANGESELFBIRD_OFFSET UNITYSDK_OFFSET(0xA846FE0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_CHANGESELFSTATE_OFFSET UNITYSDK_OFFSET(0xA8473B0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GETCUROPPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0xA847800)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GETOPPONENTDATABYUID_OFFSET UNITYSDK_OFFSET(0xA8475C0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GETPROCESSEDOPPONENTS_OFFSET UNITYSDK_OFFSET(0xA847950)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GET_OPPONENTS_OFFSET UNITYSDK_OFFSET(0xA848070)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GET_SELFOPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xA847330)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_SAVECURUSEBIRD_OFFSET UNITYSDK_OFFSET(0xA8476A0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_SET_OPPONENTS_OFFSET UNITYSDK_OFFSET(0xA848080)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0xA847120)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0xA848090)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0xA847F70)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__ISINMATCHEDSTATE_OFFSET UNITYSDK_OFFSET(0xA848020)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0xA847BD0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xA847F20)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xA847C90)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__SYNCOPPONENTS_OFFSET UNITYSDK_OFFSET(0xA847CE0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0xA8480F0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY___IFIXBASEPROXY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xA8481C0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY___IFIXBASEPROXY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xA848160)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeRoyaleLobby_TypeDefinitionIndex = 60831;

	class MatchThreeRoyaleLobby : public ::RPG::Client::BaseLobby
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* _Opponents_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__CTOR_OFFSET))(this);
		}

		::System::Void ChangeSelfBird(::System::UInt32 birdID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_CHANGESELFBIRD_OFFSET))(this, birdID);
		}

		::System::Void StartMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_STARTMATCH_OFFSET))(this);
		}

		::System::Void ChangeSelfState(::Enum_3_63C076C405BE0674_1 type)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_CHANGESELFSTATE_OFFSET))(this, type);
		}

		::RPG::Client::MatchThreeOpponentData* GetOpponentDataByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_GETOPPONENTDATABYUID_OFFSET))(this, uid);
		}

		::System::Void SaveCurUseBird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_SAVECURUSEBIRD_OFFSET))(this);
		}

		::System::Int32 GetCurOpponentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_GETCUROPPONENTCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* GetProcessedOpponents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_GETPROCESSEDOPPONENTS_OFFSET))(this);
		}

		::System::Void _OnInit(::System::UInt32 createParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__ONINIT_OFFSET))(this, createParam);
		}

		::System::Void _OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _SyncOpponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__SYNCOPPONENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _GetMembersByLobbyState()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET))(this);
		}

		::System::Boolean _IsInMatchedState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__ISINMATCHEDSTATE_OFFSET))(this);
		}

		::RPG::Client::MatchThreeOpponentData* get_SelfOpponentData()
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_GET_SELFOPPONENTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* get_Opponents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_GET_OPPONENTS_OFFSET))(this);
		}

		::System::Void set_Opponents(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_SET_OPPONENTS_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__OnInit(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY___IFIXBASEPROXY__ONINIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY___IFIXBASEPROXY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY___IFIXBASEPROXY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}
	};
}
