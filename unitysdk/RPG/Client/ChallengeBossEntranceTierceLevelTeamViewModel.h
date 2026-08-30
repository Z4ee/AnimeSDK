#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class IChallengeBossEntranceLevelTeamViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x18C0CA60)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C0CB00)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_GETLINEUP_OFFSET UNITYSDK_OFFSET(0x18C0CB50)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_GET_BOSSICONPATH_OFFSET UNITYSDK_OFFSET(0x18C0C780)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0x18C0C830)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x18C0C8F0)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_GET_STAGENUMBER_OFFSET UNITYSDK_OFFSET(0x18C0C730)
#define RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0CAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossEntranceTierceLevelTeamViewModel_TypeDefinitionIndex = 63150;

	class ChallengeBossEntranceTierceLevelTeamViewModel : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* _Stage; // 0x10

		::System::Void _ctor(::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_StageNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_GET_STAGENUMBER_OFFSET))(this);
		}

		::System::String* get_BossIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_GET_BOSSICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_GET_ISPASSED_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_Score()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_GET_SCORE_OFFSET))(this);
		}

		static ::RPG::Client::IChallengeBossEntranceLevelTeamViewModel* Create(::RPG::Client::ChallengeGroupData* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::IChallengeBossEntranceLevelTeamViewModel*(*)(::RPG::Client::ChallengeGroupData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetLineup()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSENTRANCETIERCELEVELTEAMVIEWMODEL_GETLINEUP_OFFSET))(this);
		}
	};
}
