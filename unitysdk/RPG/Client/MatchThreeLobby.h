#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_2.h"
#include "unitysdk/RPG/Client/BaseLobby.h"

namespace RPG::Client { class MatchThreeOpponentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREELOBBY_CHANGESELFBIRD_OFFSET UNITYSDK_OFFSET(0xD59D430)
#define RPG_CLIENT_MATCHTHREELOBBY_CHANGESELFSTATE_OFFSET UNITYSDK_OFFSET(0xD59D760)
#define RPG_CLIENT_MATCHTHREELOBBY_GETOPPONENTDATABYUID_OFFSET UNITYSDK_OFFSET(0xD59D950)
#define RPG_CLIENT_MATCHTHREELOBBY_GET_OPPONENTS_OFFSET UNITYSDK_OFFSET(0xD59E890)
#define RPG_CLIENT_MATCHTHREELOBBY_GET_SELFOPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xD59D6E0)
#define RPG_CLIENT_MATCHTHREELOBBY_SAVECURUSEBIRD_OFFSET UNITYSDK_OFFSET(0xD59DA50)
#define RPG_CLIENT_MATCHTHREELOBBY_SET_OPPONENTS_OFFSET UNITYSDK_OFFSET(0xD59E8A0)
#define RPG_CLIENT_MATCHTHREELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0xD59D4F0)
#define RPG_CLIENT_MATCHTHREELOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0xD59E8B0)
#define RPG_CLIENT_MATCHTHREELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0xD59DC00)
#define RPG_CLIENT_MATCHTHREELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xD59DD80)
#define RPG_CLIENT_MATCHTHREELOBBY__SYNCOPPONENTS_OFFSET UNITYSDK_OFFSET(0xD59DDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeLobby_TypeDefinitionIndex = 65777;

	class MatchThreeLobby : public ::RPG::Client::BaseLobby
	{
	public:
		// static const ::System::String* _MAX_MEMBER_KEY; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* _Opponents_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY__CTOR_OFFSET))(this);
		}

		::System::Void ChangeSelfBird(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_CHANGESELFBIRD_OFFSET))(this, a1);
		}

		::System::Void StartMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_STARTMATCH_OFFSET))(this);
		}

		::System::Void ChangeSelfState(::Enum_3_63C076C405BE0674_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_CHANGESELFSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeOpponentData* GetOpponentDataByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_GETOPPONENTDATABYUID_OFFSET))(this, a1);
		}

		::System::Void SaveCurUseBird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_SAVECURUSEBIRD_OFFSET))(this);
		}

		::System::Void _OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY__ONINIT_OFFSET))(this, a1);
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

		::System::Void set_Opponents(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREELOBBY_SET_OPPONENTS_OFFSET))(this, a1);
		}
	};
}
