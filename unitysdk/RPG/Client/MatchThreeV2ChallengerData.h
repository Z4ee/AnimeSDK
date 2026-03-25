#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_FBD57FD5B46A130F;
namespace RPG::Client { class MatchThreeV2LevelData; }
namespace RPG::Client { class MatchThreeV2LevelInfos; }
namespace RPG::Client { class MatchThreeV2StarTargetData; }
namespace RPG::GameCore { class MatchThreeV2ChallengerRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B58750)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_DEFEATREWARDPROPID_OFFSET UNITYSDK_OFFSET(0x9B58550)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9B583E0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_GAMELEVELID_OFFSET UNITYSDK_OFFSET(0x9B584D0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_GAMELEVEL_OFFSET UNITYSDK_OFFSET(0x9B58540)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x9B58460)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B58360)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_STARTARGETS_OFFSET UNITYSDK_OFFSET(0x9B585C0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_TOTALSTARTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x9B585D0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9B58300)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B58620)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ChallengerData_TypeDefinitionIndex = 53619;

	class MatchThreeV2ChallengerData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::MatchThreeV2StarTargetData*>* _StarTargets_k__BackingField; // 0x10
		::RPG::Client::MatchThreeV2LevelData* _GameLevel_k__BackingField; // 0x18
		::System::UInt32 ID; // 0x20

		::System::Void _ctor(::System::UInt32 challengerID, ::System::Func_2<::System::UInt32, ::RPG::Client::MatchThreeV2StarTargetData*>* starTargetGetter, ::System::Func_2<::System::UInt32, ::RPG::Client::MatchThreeV2LevelData*>* levelGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Func_2<::System::UInt32, ::RPG::Client::MatchThreeV2StarTargetData*>*, ::System::Func_2<::System::UInt32, ::RPG::Client::MatchThreeV2LevelData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA__CTOR_OFFSET))(this, challengerID, starTargetGetter, levelGetter);
		}

		::RPG::GameCore::MatchThreeV2ChallengerRow* get__Row()
		{
			return ((::RPG::GameCore::MatchThreeV2ChallengerRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_Image()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_IMAGE_OFFSET))(this);
		}

		::System::UInt32 get_GameLevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_GAMELEVELID_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2LevelData* get_GameLevel()
		{
			return ((::RPG::Client::MatchThreeV2LevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_GAMELEVEL_OFFSET))(this);
		}

		::System::UInt32 get_DefeatRewardPropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_DEFEATREWARDPROPID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MatchThreeV2StarTargetData*>* get_StarTargets()
		{
			return ((::Il2CppArray<::RPG::Client::MatchThreeV2StarTargetData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_STARTARGETS_OFFSET))(this);
		}

		::System::Int32 get_TotalStarTargetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_GET_TOTALSTARTARGETCOUNT_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2ChallengerData* Create(::RPG::GameCore::MatchThreeV2ChallengerRow* row, ::Class_1_FBD57FD5B46A130F* starTargetInfos, ::RPG::Client::MatchThreeV2LevelInfos* levelInfos)
		{
			return ((::RPG::Client::MatchThreeV2ChallengerData*(*)(::RPG::GameCore::MatchThreeV2ChallengerRow*, ::Class_1_FBD57FD5B46A130F*, ::RPG::Client::MatchThreeV2LevelInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERDATA_CREATE_OFFSET))(row, starTargetInfos, levelInfos);
		}
	};
}
