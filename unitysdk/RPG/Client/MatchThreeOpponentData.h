#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MatchThreeOpponentType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_F3CA30716D4FAF92_2;
namespace RPG::Client { class IMatchThreeBirdData; }
namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::GameCore { class MatchThreeOpponentRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEAIOPPONENT_OFFSET UNITYSDK_OFFSET(0xBF822E0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATELOBBYMEMBEROPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xBF78350)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONEAIOPPONENT_OFFSET UNITYSDK_OFFSET(0xBF77990)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONEOPPONENT_OFFSET UNITYSDK_OFFSET(0xBF76EB0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONESELFOPPONENT_OFFSET UNITYSDK_OFFSET(0xBF77490)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEPVESELFPLAYEROPPONENT_OFFSET UNITYSDK_OFFSET(0xBF7A630)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_BIRD_OFFSET UNITYSDK_OFFSET(0xBF8A250)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0xBF8A300)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_HEADIMAGE_OFFSET UNITYSDK_OFFSET(0xBF8A320)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISAI_OFFSET UNITYSDK_OFFSET(0xBF8A3D0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISPSN_OFFSET UNITYSDK_OFFSET(0xBF8A3F0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0xBF8A3E0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBF8A390)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_LOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0xBF8A3B0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBF8A270)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_OPPONENTID_OFFSET UNITYSDK_OFFSET(0xBF8A230)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_OPPONENTROW_OFFSET UNITYSDK_OFFSET(0xBF89D20)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_PLATFORMID_OFFSET UNITYSDK_OFFSET(0xBF8A480)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xBF8A4F0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ROBOTSTRENGTH_OFFSET UNITYSDK_OFFSET(0xBF8A510)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBF8A210)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xBF80B20)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_BIRD_OFFSET UNITYSDK_OFFSET(0xBF8A260)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_HEADICON_OFFSET UNITYSDK_OFFSET(0xBF8A310)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBF8A3A0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_LOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0xBF8A3C0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_OPPONENTID_OFFSET UNITYSDK_OFFSET(0xBF8A240)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0xBF8A500)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_ROBOTSTRENGTH_OFFSET UNITYSDK_OFFSET(0xBF8A520)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xBF8A220)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SYNCBYLOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0xBF83BF0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBF89CE0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA__GETEXTRAINFOCOMMONDATA_OFFSET UNITYSDK_OFFSET(0xBF8A060)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA__GETPVEHEADICON_OFFSET UNITYSDK_OFFSET(0xBF89E10)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeOpponentData_TypeDefinitionIndex = 61673;

	class MatchThreeOpponentData : public ::System::Object
	{
	public:
		::RPG::Client::LobbyMemberData* _LobbyMemberData_k__BackingField; // 0x10
		::RPG::Client::IMatchThreeBirdData* _Bird_k__BackingField; // 0x18
		::System::String* _Name; // 0x20
		::System::String* _HeadIcon_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* PropDatas; // 0x30
		::RPG::Client::MatchThreeOpponentType _Type_k__BackingField; // 0x38
		::System::UInt32 _Level_k__BackingField; // 0x3C
		::System::UInt32 _RobotStrength_k__BackingField; // 0x40
		::System::UInt32 _OpponentID_k__BackingField; // 0x44
		::System::UInt32 _Rank_k__BackingField; // 0x48
		::RPG::Client::TextID _NameTextID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateAIOpponent(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEAIOPPONENT_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateLobbyMemberOpponentData(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATELOBBYMEMBEROPPONENTDATA_OFFSET))(a1);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreatePVESelfPlayerOpponent(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEPVESELFPLAYEROPPONENT_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateOneOnOneOpponent(::System::UInt32 a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a3)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONEOPPONENT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateOneOnOneSelfOpponent(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONESELFOPPONENT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateOneOnOneAIOpponent(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* a3)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONEAIOPPONENT_OFFSET))(a1, a2, a3);
		}

		::System::Void SyncByLobbyMemberData(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SYNCBYLOBBYMEMBERDATA_OFFSET))(this, a1);
		}

		::Class_1_F3CA30716D4FAF92_2* _GetExtraInfoCommonData(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::Class_1_F3CA30716D4FAF92_2*(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA__GETEXTRAINFOCOMMONDATA_OFFSET))(this, a1);
		}

		::System::String* _GetPVEHeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA__GETPVEHEADICON_OFFSET))(this);
		}

		::RPG::Client::MatchThreeOpponentType get_Type()
		{
			return ((::RPG::Client::MatchThreeOpponentType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::MatchThreeOpponentType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeOpponentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_OpponentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_OPPONENTID_OFFSET))(this);
		}

		::System::Void set_OpponentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_OPPONENTID_OFFSET))(this, a1);
		}

		::RPG::Client::IMatchThreeBirdData* get_Bird()
		{
			return ((::RPG::Client::IMatchThreeBirdData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_BIRD_OFFSET))(this);
		}

		::System::Void set_Bird(::RPG::Client::IMatchThreeBirdData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMatchThreeBirdData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_BIRD_OFFSET))(this, a1);
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

		::System::Void set_HeadIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_HEADICON_OFFSET))(this, a1);
		}

		::System::String* get_HeadImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_HEADIMAGE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::MatchThreeOpponentRow* get_OpponentRow()
		{
			return ((::RPG::GameCore::MatchThreeOpponentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_OPPONENTROW_OFFSET))(this);
		}

		::RPG::Client::LobbyMemberData* get_LobbyMemberData()
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_LOBBYMEMBERDATA_OFFSET))(this);
		}

		::System::Void set_LobbyMemberData(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_LOBBYMEMBERDATA_OFFSET))(this, a1);
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

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_RANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_RobotStrength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ROBOTSTRENGTH_OFFSET))(this);
		}

		::System::Void set_RobotStrength(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_ROBOTSTRENGTH_OFFSET))(this, a1);
		}
	};
}
