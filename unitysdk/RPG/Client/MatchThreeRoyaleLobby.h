#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/RPG/Client/BaseLobby.h"

namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client { class MatchThreeOpponentData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEROYALELOBBY_CHANGESELFBIRD_OFFSET UNITYSDK_OFFSET(0xBF90BB0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_CHANGESELFSTATE_OFFSET UNITYSDK_OFFSET(0xBF90F80)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GETCUROPPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0xBF913E0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GETOPPONENTDATABYUID_OFFSET UNITYSDK_OFFSET(0xBF91190)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GETPROCESSEDOPPONENTS_OFFSET UNITYSDK_OFFSET(0xBF91500)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GET_OPPONENTS_OFFSET UNITYSDK_OFFSET(0xBF91CD0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GET_SELFOPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xBF90F00)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_SAVECURUSEBIRD_OFFSET UNITYSDK_OFFSET(0xBF91290)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_SET_OPPONENTS_OFFSET UNITYSDK_OFFSET(0xBF91CE0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0xBF90CF0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0xBF91CF0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0xBF91BD0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__ISINMATCHEDSTATE_OFFSET UNITYSDK_OFFSET(0xBF91C80)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0xBF91820)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xBF91B80)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xBF918E0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__SYNCOPPONENTS_OFFSET UNITYSDK_OFFSET(0xBF91930)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0xBF91D50)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY___IFIXBASEPROXY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xBF91E10)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY___IFIXBASEPROXY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xBF91DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeRoyaleLobby_TypeDefinitionIndex = 61765;

	class MatchThreeRoyaleLobby : public ::RPG::Client::BaseLobby
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* _Opponents_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__CTOR_OFFSET))(this);
		}

		::System::Void ChangeSelfBird(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_CHANGESELFBIRD_OFFSET))(this, a1);
		}

		::System::Void StartMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_STARTMATCH_OFFSET))(this);
		}

		::System::Void ChangeSelfState(::Enum_3_63C076C405BE0674_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_CHANGESELFSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeOpponentData* GetOpponentDataByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_GETOPPONENTDATABYUID_OFFSET))(this, a1);
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

		::System::Void _OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__ONINIT_OFFSET))(this, a1);
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

		::System::Void set_Opponents(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_SET_OPPONENTS_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY___IFIXBASEPROXY__ONINIT_OFFSET))(this, a1);
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
