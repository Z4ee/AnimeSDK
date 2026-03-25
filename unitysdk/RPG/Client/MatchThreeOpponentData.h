#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MatchThreeOpponentType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_F3CA30716D4FAF92_3;
namespace RPG::Client { class IMatchThreeBirdData; }
namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::GameCore { class MatchThreeOpponentRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEAIOPPONENT_OFFSET UNITYSDK_OFFSET(0x9B40C50)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATELOBBYMEMBEROPPONENTDATA_OFFSET UNITYSDK_OFFSET(0x9B37C50)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONEAIOPPONENT_OFFSET UNITYSDK_OFFSET(0x9B37350)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONEOPPONENT_OFFSET UNITYSDK_OFFSET(0x9B36A80)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONESELFOPPONENT_OFFSET UNITYSDK_OFFSET(0x9B36F30)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEPVESELFPLAYEROPPONENT_OFFSET UNITYSDK_OFFSET(0x9B39EA0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_BIRD_OFFSET UNITYSDK_OFFSET(0x9B47550)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x9B47600)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_HEADIMAGE_OFFSET UNITYSDK_OFFSET(0x9B47620)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISAI_OFFSET UNITYSDK_OFFSET(0x9B476D0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISPSN_OFFSET UNITYSDK_OFFSET(0x9B476F0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x9B476E0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9B47690)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_LOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x9B476B0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B47570)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_OPPONENTID_OFFSET UNITYSDK_OFFSET(0x9B47530)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_OPPONENTROW_OFFSET UNITYSDK_OFFSET(0x9B471F0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_PLATFORMID_OFFSET UNITYSDK_OFFSET(0x9B47780)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x9B477F0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ROBOTSTRENGTH_OFFSET UNITYSDK_OFFSET(0x9B47810)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B47510)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x9B3F760)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_BIRD_OFFSET UNITYSDK_OFFSET(0x9B47560)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_HEADICON_OFFSET UNITYSDK_OFFSET(0x9B47610)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9B476A0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_LOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x9B476C0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_OPPONENTID_OFFSET UNITYSDK_OFFSET(0x9B47540)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x9B47800)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_ROBOTSTRENGTH_OFFSET UNITYSDK_OFFSET(0x9B47820)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B47520)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SYNCBYLOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x9B423D0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B471B0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA__GETEXTRAINFOCOMMONDATA_OFFSET UNITYSDK_OFFSET(0x9B473F0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA__GETPVEHEADICON_OFFSET UNITYSDK_OFFSET(0x9B47250)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeOpponentData_TypeDefinitionIndex = 53595;

	class MatchThreeOpponentData : public ::System::Object
	{
	public:
		::System::String* _HeadIcon_k__BackingField; // 0x10
		::RPG::Client::LobbyMemberData* _LobbyMemberData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* PropDatas; // 0x20
		::System::String* _Name; // 0x28
		::RPG::Client::IMatchThreeBirdData* _Bird_k__BackingField; // 0x30
		::RPG::Client::MatchThreeOpponentType _Type_k__BackingField; // 0x38
		::System::UInt32 _RobotStrength_k__BackingField; // 0x3C
		::System::UInt32 _OpponentID_k__BackingField; // 0x40
		::System::UInt32 _Level_k__BackingField; // 0x44
		::System::UInt32 _Rank_k__BackingField; // 0x48
		::RPG::Client::TextID _NameTextID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateAIOpponent(::System::UInt32 opponentID, ::System::UInt32 birdID)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEAIOPPONENT_OFFSET))(opponentID, birdID);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateLobbyMemberOpponentData(::RPG::Client::LobbyMemberData* lobbyMemberData)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATELOBBYMEMBEROPPONENTDATA_OFFSET))(lobbyMemberData);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreatePVESelfPlayerOpponent(::System::UInt32 opponentID, ::System::UInt32 birdID)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEPVESELFPLAYEROPPONENT_OFFSET))(opponentID, birdID);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateOneOnOneOpponent(::System::UInt32 birdID, ::System::Boolean isSelf, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* propIDs)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONEOPPONENT_OFFSET))(birdID, isSelf, propIDs);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateOneOnOneSelfOpponent(::System::UInt32 birdID, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* propDatas, ::System::UInt32 playerID)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONESELFOPPONENT_OFFSET))(birdID, propDatas, playerID);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateOneOnOneAIOpponent(::System::UInt32 opponentID, ::System::UInt32 birdID, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* propDatas)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONEAIOPPONENT_OFFSET))(opponentID, birdID, propDatas);
		}

		::System::Void SyncByLobbyMemberData(::RPG::Client::LobbyMemberData* lobbyMemberData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SYNCBYLOBBYMEMBERDATA_OFFSET))(this, lobbyMemberData);
		}

		::Class_1_F3CA30716D4FAF92_3* _GetExtraInfoCommonData(::RPG::Client::LobbyMemberData* lobbyMemberData)
		{
			return ((::Class_1_F3CA30716D4FAF92_3*(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA__GETEXTRAINFOCOMMONDATA_OFFSET))(this, lobbyMemberData);
		}

		::System::String* _GetPVEHeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA__GETPVEHEADICON_OFFSET))(this);
		}

		::RPG::Client::MatchThreeOpponentType get_Type()
		{
			return ((::RPG::Client::MatchThreeOpponentType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::MatchThreeOpponentType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeOpponentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_OpponentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_OPPONENTID_OFFSET))(this);
		}

		::System::Void set_OpponentID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_OPPONENTID_OFFSET))(this, value);
		}

		::RPG::Client::IMatchThreeBirdData* get_Bird()
		{
			return ((::RPG::Client::IMatchThreeBirdData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_BIRD_OFFSET))(this);
		}

		::System::Void set_Bird(::RPG::Client::IMatchThreeBirdData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMatchThreeBirdData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_BIRD_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_UID_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_HEADICON_OFFSET))(this);
		}

		::System::Void set_HeadIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_HEADICON_OFFSET))(this, value);
		}

		::System::String* get_HeadImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_HEADIMAGE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::RPG::GameCore::MatchThreeOpponentRow* get_OpponentRow()
		{
			return ((::RPG::GameCore::MatchThreeOpponentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_OPPONENTROW_OFFSET))(this);
		}

		::RPG::Client::LobbyMemberData* get_LobbyMemberData()
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_LOBBYMEMBERDATA_OFFSET))(this);
		}

		::System::Void set_LobbyMemberData(::RPG::Client::LobbyMemberData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_LOBBYMEMBERDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISAI_OFFSET))(this);
		}

		::System::Boolean get_IsSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISSELF_OFFSET))(this);
		}

		::System::Boolean get_IsPSN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISPSN_OFFSET))(this);
		}

		::System::String* get_PlatformID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_PLATFORMID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_RANK_OFFSET))(this, value);
		}

		::System::UInt32 get_RobotStrength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ROBOTSTRENGTH_OFFSET))(this);
		}

		::System::Void set_RobotStrength(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_ROBOTSTRENGTH_OFFSET))(this, value);
		}
	};
}
