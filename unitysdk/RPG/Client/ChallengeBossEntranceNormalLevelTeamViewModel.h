#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeBossData; }
namespace RPG::Client { class ChallengeBossSingleNodeInfo; }
namespace RPG::Client { class IChallengeBossEntranceLevelTeamViewModel; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCA28310)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA283A0)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GETLINEUP_OFFSET UNITYSDK_OFFSET(0xCA283E0)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET_BOSSICONPATH_OFFSET UNITYSDK_OFFSET(0xCA28120)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0xCA282B0)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xCA28230)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET_STAGENUMBER_OFFSET UNITYSDK_OFFSET(0xCA27F20)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET__MONSTERID_OFFSET UNITYSDK_OFFSET(0xCA27F60)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET__MONSTERROW_OFFSET UNITYSDK_OFFSET(0xCA27FF0)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET__MONSTERTEMPLATEROW_OFFSET UNITYSDK_OFFSET(0xCA28060)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET__NODEINFO_OFFSET UNITYSDK_OFFSET(0xCA28180)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCA28390)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossEntranceNormalLevelTeamViewModel_TypeDefinitionIndex = 63149;

	class ChallengeBossEntranceNormalLevelTeamViewModel : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeBossData* _ChallengeData; // 0x10
		::System::Int32 _StageNumber; // 0x18

		::System::Void _ctor(::RPG::Client::ChallengeBossData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeBossData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_StageNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET_STAGENUMBER_OFFSET))(this);
		}

		::System::UInt32 get__MonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET__MONSTERID_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRow* get__MonsterRow()
		{
			return ((::RPG::GameCore::MonsterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET__MONSTERROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterTemplateRow* get__MonsterTemplateRow()
		{
			return ((::RPG::GameCore::MonsterTemplateRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET__MONSTERTEMPLATEROW_OFFSET))(this);
		}

		::System::String* get_BossIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET_BOSSICONPATH_OFFSET))(this);
		}

		::RPG::Client::ChallengeBossSingleNodeInfo* get__NodeInfo()
		{
			return ((::RPG::Client::ChallengeBossSingleNodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET__NODEINFO_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_Score()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET_SCORE_OFFSET))(this);
		}

		::System::Boolean get_IsPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GET_ISPASSED_OFFSET))(this);
		}

		static ::RPG::Client::IChallengeBossEntranceLevelTeamViewModel* Create(::RPG::Client::ChallengeBossData* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::IChallengeBossEntranceLevelTeamViewModel*(*)(::RPG::Client::ChallengeBossData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetLineup()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCENORMALLEVELTEAMVIEWMODEL_GETLINEUP_OFFSET))(this);
		}
	};
}
