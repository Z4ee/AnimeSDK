#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeBossData; }
namespace RPG::Client { class ChallengeBossIntroStageViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSINTROVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xB4F4C70)
#define RPG_CLIENT_CHALLENGEBOSSINTROVIEWMODEL_GETSTAGE_OFFSET UNITYSDK_OFFSET(0xB4F4BF0)
#define RPG_CLIENT_CHALLENGEBOSSINTROVIEWMODEL_GET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xB4F4B90)
#define RPG_CLIENT_CHALLENGEBOSSINTROVIEWMODEL_GET_STAGECOUNT_OFFSET UNITYSDK_OFFSET(0xB4F4BA0)
#define RPG_CLIENT_CHALLENGEBOSSINTROVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F4D90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossIntroViewModel_TypeDefinitionIndex = 59024;

	class ChallengeBossIntroViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeBossIntroStageViewModel*>* _Stages; // 0x10
		::RPG::Client::ChallengeBossData* _ChallengeData_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::ChallengeBossData* a1, ::System::Collections::Generic::List_1<::RPG::Client::ChallengeBossIntroStageViewModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeBossData*, ::System::Collections::Generic::List_1<::RPG::Client::ChallengeBossIntroStageViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeBossData* get_ChallengeData()
		{
			return ((::RPG::Client::ChallengeBossData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROVIEWMODEL_GET_CHALLENGEDATA_OFFSET))(this);
		}

		::System::Int32 get_StageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROVIEWMODEL_GET_STAGECOUNT_OFFSET))(this);
		}

		::RPG::Client::ChallengeBossIntroStageViewModel* GetStage(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengeBossIntroStageViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROVIEWMODEL_GETSTAGE_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChallengeBossIntroViewModel* Create(::RPG::Client::ChallengeBossData* a1)
		{
			return ((::RPG::Client::ChallengeBossIntroViewModel*(*)(::RPG::Client::ChallengeBossData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROVIEWMODEL_CREATE_OFFSET))(a1);
		}
	};
}
