#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2FirstRoleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class MatchThreeOpponentData; }
namespace RPG::Client { class MatchThreeV2ChallengerData; }
namespace RPG::Client { class MatchThreeV2SpecialRuleData; }
namespace RPG::GameCore { class MatchThreeV2LevelRow; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C99A3F0)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GETOPPONENTPROPS_OFFSET UNITYSDK_OFFSET(0x1C999F30)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GETSPECIALRULES_OFFSET UNITYSDK_OFFSET(0x1C99A580)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_CHALLENGERDATA_OFFSET UNITYSDK_OFFSET(0x1C999DF0)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_CHALLENGERID_OFFSET UNITYSDK_OFFSET(0x1C999D90)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_ENVIRONMENTIDS_OFFSET UNITYSDK_OFFSET(0x1C9991F0)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_FIRSTROLETYPE_OFFSET UNITYSDK_OFFSET(0x1C999C50)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1C9991E0)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_LOSEDESC_OFFSET UNITYSDK_OFFSET(0x1C9997D0)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_MAXRATIOPOWERDIFF_OFFSET UNITYSDK_OFFSET(0x1C999CF0)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C999650)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_OPPONENTBIRDID_OFFSET UNITYSDK_OFFSET(0x1C999510)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0x1C999EC0)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_OPPONENTID_OFFSET UNITYSDK_OFFSET(0x1C9993D0)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_OPPONENTPROPMAP_OFFSET UNITYSDK_OFFSET(0x1C9995B0)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_PLAYERBIRDID_OFFSET UNITYSDK_OFFSET(0x1C999290)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1C999330)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_PRELEVELID_OFFSET UNITYSDK_OFFSET(0x1C999B10)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_PRESUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C999BB0)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_RECOMMENDBATTLEITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C999A70)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_RECOMMENDBIRDLIST_OFFSET UNITYSDK_OFFSET(0x1C9999D0)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1C999180)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_SPECIALRULEIDLIST_OFFSET UNITYSDK_OFFSET(0x1C999930)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_TALKLIST_OFFSET UNITYSDK_OFFSET(0x1C99A190)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_TURNSTEP_OFFSET UNITYSDK_OFFSET(0x1C999470)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_VICTORYDESC_OFFSET UNITYSDK_OFFSET(0x1C999710)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_VSTALKLIST_OFFSET UNITYSDK_OFFSET(0x1C999890)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1C99A480)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_ISRECOMMENDBIRD_OFFSET UNITYSDK_OFFSET(0x1C99A4C0)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA_ISRECOMMENDPROP_OFFSET UNITYSDK_OFFSET(0x1C99A520)
#define RPG_CLIENT_MATCHTHREEV2LEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C99A470)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2LevelData_TypeDefinitionIndex = 66047;

	class MatchThreeV2LevelData : public ::System::Object
	{
	public:
		::System::UInt32 _LevelID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::MatchThreeV2LevelRow* get_Row()
		{
			return ((::RPG::GameCore::MatchThreeV2LevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_LEVELID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EnvironmentIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_ENVIRONMENTIDS_OFFSET))(this);
		}

		::System::UInt32 get_PlayerBirdID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_PLAYERBIRDID_OFFSET))(this);
		}

		::System::UInt32 get_PlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_PLAYERID_OFFSET))(this);
		}

		::System::UInt32 get_OpponentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_OPPONENTID_OFFSET))(this);
		}

		::System::UInt32 get_TurnStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_TURNSTEP_OFFSET))(this);
		}

		::System::UInt32 get_OpponentBirdID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_OPPONENTBIRDID_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_OpponentPropMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_OPPONENTPROPMAP_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_VictoryDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_VICTORYDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_LoseDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_LOSEDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_VSTalkList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_VSTALKLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SpecialRuleIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_SPECIALRULEIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendBirdList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_RECOMMENDBIRDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendBattleItemList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_RECOMMENDBATTLEITEMLIST_OFFSET))(this);
		}

		::System::UInt32 get_PreLevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_PRELEVELID_OFFSET))(this);
		}

		::System::UInt32 get_PreSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_PRESUBMISSIONID_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeV2FirstRoleType get_FirstRoleType()
		{
			return ((::RPG::GameCore::MatchThreeV2FirstRoleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_FIRSTROLETYPE_OFFSET))(this);
		}

		::System::UInt32 get_MaxRatioPowerDiff()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_MAXRATIOPOWERDIFF_OFFSET))(this);
		}

		::System::UInt32 get_ChallengerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_CHALLENGERID_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2ChallengerData* get_ChallengerData()
		{
			return ((::RPG::Client::MatchThreeV2ChallengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_CHALLENGERDATA_OFFSET))(this);
		}

		::RPG::Client::MatchThreeOpponentData* get_OpponentData()
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_OPPONENTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::TextID, ::RPG::Client::TextID>*>* get_TalkList()
		{
			return ((::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::TextID, ::RPG::Client::TextID>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GET_TALKLIST_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2LevelData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2LevelData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_INIT_OFFSET))(this);
		}

		::System::Boolean IsRecommendBird(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_ISRECOMMENDBIRD_OFFSET))(this, a1);
		}

		::System::Boolean IsRecommendProp(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_ISRECOMMENDPROP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2SpecialRuleData*>* GetSpecialRules()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2SpecialRuleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GETSPECIALRULES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* GetOpponentProps()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELDATA_GETOPPONENTPROPS_OFFSET))(this);
		}
	};
}
