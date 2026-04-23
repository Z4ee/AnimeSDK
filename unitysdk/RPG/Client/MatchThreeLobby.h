#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/RPG/Client/BaseLobby.h"

namespace RPG::Client { class MatchThreeOpponentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREELOBBY_CHANGESELFBIRD_OFFSET UNITYSDK_OFFSET(0xA8391D0)
#define RPG_CLIENT_MATCHTHREELOBBY_CHANGESELFSTATE_OFFSET UNITYSDK_OFFSET(0xA8394A0)
#define RPG_CLIENT_MATCHTHREELOBBY_GETOPPONENTDATABYUID_OFFSET UNITYSDK_OFFSET(0xA839640)
#define RPG_CLIENT_MATCHTHREELOBBY_GET_OPPONENTS_OFFSET UNITYSDK_OFFSET(0xA83A440)
#define RPG_CLIENT_MATCHTHREELOBBY_GET_SELFOPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xA839420)
#define RPG_CLIENT_MATCHTHREELOBBY_SAVECURUSEBIRD_OFFSET UNITYSDK_OFFSET(0xA839720)
#define RPG_CLIENT_MATCHTHREELOBBY_SET_OPPONENTS_OFFSET UNITYSDK_OFFSET(0xA83A450)
#define RPG_CLIENT_MATCHTHREELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0xA839290)
#define RPG_CLIENT_MATCHTHREELOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0xA83A460)
#define RPG_CLIENT_MATCHTHREELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0xA839880)
#define RPG_CLIENT_MATCHTHREELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xA8399D0)
#define RPG_CLIENT_MATCHTHREELOBBY__SYNCOPPONENTS_OFFSET UNITYSDK_OFFSET(0xA839A20)
#define RPG_CLIENT_MATCHTHREELOBBY___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0xA83A4C0)
#define RPG_CLIENT_MATCHTHREELOBBY___IFIXBASEPROXY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xA83A530)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeLobby_TypeDefinitionIndex = 60558;

	class MatchThreeLobby : public ::RPG::Client::BaseLobby
	{
	public:
		// static const ::System::String* _MAX_MEMBER_KEY; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* _Opponents_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY__CTOR_OFFSET))(this);
		}

		::System::Void ChangeSelfBird(::System::UInt32 birdID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_CHANGESELFBIRD_OFFSET))(this, birdID);
		}

		::System::Void StartMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_STARTMATCH_OFFSET))(this);
		}

		::System::Void ChangeSelfState(::Enum_3_63C076C405BE0674_1 type)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_CHANGESELFSTATE_OFFSET))(this, type);
		}

		::RPG::Client::MatchThreeOpponentData* GetOpponentDataByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_GETOPPONENTDATABYUID_OFFSET))(this, uid);
		}

		::System::Void SaveCurUseBird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_SAVECURUSEBIRD_OFFSET))(this);
		}

		::System::Void _OnInit(::System::UInt32 createParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY__ONINIT_OFFSET))(this, createParam);
		}

		::System::Void _OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void _SyncOpponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY__SYNCOPPONENTS_OFFSET))(this);
		}

		::RPG::Client::MatchThreeOpponentData* get_SelfOpponentData()
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_GET_SELFOPPONENTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* get_Opponents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_GET_OPPONENTS_OFFSET))(this);
		}

		::System::Void set_Opponents(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_SET_OPPONENTS_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__OnInit(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY___IFIXBASEPROXY__ONINIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY___IFIXBASEPROXY__ONMEMBERCHANGE_OFFSET))(this);
		}
	};
}
