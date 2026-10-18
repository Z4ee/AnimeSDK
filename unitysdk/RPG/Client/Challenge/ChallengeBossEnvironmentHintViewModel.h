#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/ChallengeEnvironmentHintViewModelBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class ChallengeBossInstance; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class MonsterGuideData; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEBOSSENVIRONMENTHINTVIEWMODEL_GET_BOSSMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xC936D00)
#define RPG_CLIENT_CHALLENGE_CHALLENGEBOSSENVIRONMENTHINTVIEWMODEL_GET_BOSSMONSTERGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xC936D10)
#define RPG_CLIENT_CHALLENGE_CHALLENGEBOSSENVIRONMENTHINTVIEWMODEL_GET_CURRENTSTAGEBUFFID_OFFSET UNITYSDK_OFFSET(0xC936CF0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEBOSSENVIRONMENTHINTVIEWMODEL_GET_CURRENTSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0xC936CE0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEBOSSENVIRONMENTHINTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC936D20)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeBossEnvironmentHintViewModel_TypeDefinitionIndex = 81428;

	class ChallengeBossEnvironmentHintViewModel : public ::RPG::Client::Challenge::ChallengeEnvironmentHintViewModelBase
	{
	public:
		::RPG::Client::MonsterGuideData* _BossMonsterGuideData_k__BackingField; // 0x18
		::RPG::Client::MonsterData* _BossMonsterData_k__BackingField; // 0x20
		::System::Int32 _CurrentStageNumber_k__BackingField; // 0x28
		::System::Nullable_1<::System::UInt32> _CurrentStageBuffID_k__BackingField; // 0x2C

		::System::Void _ctor(::RPG::Client::ChallengeBossInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeBossInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEBOSSENVIRONMENTHINTVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentStageNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEBOSSENVIRONMENTHINTVIEWMODEL_GET_CURRENTSTAGENUMBER_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> get_CurrentStageBuffID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEBOSSENVIRONMENTHINTVIEWMODEL_GET_CURRENTSTAGEBUFFID_OFFSET))(this);
		}

		::RPG::Client::MonsterData* get_BossMonsterData()
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEBOSSENVIRONMENTHINTVIEWMODEL_GET_BOSSMONSTERDATA_OFFSET))(this);
		}

		::RPG::Client::MonsterGuideData* get_BossMonsterGuideData()
		{
			return ((::RPG::Client::MonsterGuideData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEBOSSENVIRONMENTHINTVIEWMODEL_GET_BOSSMONSTERGUIDEDATA_OFFSET))(this);
		}
	};
}
