#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_20DE710EADC62E5E;
namespace RPG::Client { class ChimeraDuelChallengeGameSession; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA004C80)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_DOCHALLENGE_OFFSET UNITYSDK_OFFSET(0xA004490)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0xA004C20)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA004830)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_FRIENDCHALLENGEMASTERICON_OFFSET UNITYSDK_OFFSET(0xA004AF0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0xA004790)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_MASTERFIGURE_OFFSET UNITYSDK_OFFSET(0xA0049A0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0x9FFF750)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA004770)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xA004980)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKICON_OFFSET UNITYSDK_OFFSET(0xA004BD0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKLEVEL_OFFSET UNITYSDK_OFFSET(0x9FFF7B0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKNAME_OFFSET UNITYSDK_OFFSET(0xA004910)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_UID_OFFSET UNITYSDK_OFFSET(0x9FFF700)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA000C70)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelFriendChallengeTeamAdapter_TypeDefinitionIndex = 58309;

	class ChimeraDuelFriendChallengeTeamAdapter : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelChallengeGameSession* _Session; // 0x10
		::Class_1_20DE710EADC62E5E* _FriendData; // 0x18

		::System::Void _ctor(::Class_1_20DE710EADC62E5E* friendData, ::RPG::Client::ChimeraDuelChallengeGameSession* session)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_20DE710EADC62E5E*, ::RPG::Client::ChimeraDuelChallengeGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER__CTOR_OFFSET))(this, friendData, session);
		}

		::System::Void DoChallenge(::RPG::Client::ChimeraDuelPvpTeamSnapshot* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_DOCHALLENGE_OFFSET))(this, snapshot);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_UID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_HEADICON_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_MASTERID_OFFSET))(this);
		}

		::System::String* get_MasterFigure()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_MASTERFIGURE_OFFSET))(this);
		}

		::System::String* get_FriendChallengeMasterIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_FRIENDCHALLENGEMASTERICON_OFFSET))(this);
		}

		::System::UInt32 get_RankLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKLEVEL_OFFSET))(this);
		}

		::System::String* get_RankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_RankName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_Chimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_CHIMERAS_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::ChimeraDuelFriendChallengeTeamAdapter* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelFriendChallengeTeamAdapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_COMPARETO_OFFSET))(this, other);
		}
	};
}
