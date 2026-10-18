#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionBattleRankViewModel; }

#define RPG_CLIENT_EXPEDITIONBATTLESTARINFODETAILVIEWMODEL_GET_RANKVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCE52B70)
#define RPG_CLIENT_EXPEDITIONBATTLESTARINFODETAILVIEWMODEL_GET_STARCOUNT_OFFSET UNITYSDK_OFFSET(0xCE52B90)
#define RPG_CLIENT_EXPEDITIONBATTLESTARINFODETAILVIEWMODEL_SET_RANKVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCE52B80)
#define RPG_CLIENT_EXPEDITIONBATTLESTARINFODETAILVIEWMODEL_SET_STARCOUNT_OFFSET UNITYSDK_OFFSET(0xCE52BA0)
#define RPG_CLIENT_EXPEDITIONBATTLESTARINFODETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCE52BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleStarInfoDetailViewModel_TypeDefinitionIndex = 63956;

	class ExpeditionBattleStarInfoDetailViewModel : public ::System::Object
	{
	public:
		::RPG::Client::ExpeditionBattleRankViewModel* _RankViewModel_k__BackingField; // 0x10
		::System::UInt32 _StarCount_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTARINFODETAILVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleRankViewModel* get_RankViewModel()
		{
			return ((::RPG::Client::ExpeditionBattleRankViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTARINFODETAILVIEWMODEL_GET_RANKVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_RankViewModel(::RPG::Client::ExpeditionBattleRankViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleRankViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTARINFODETAILVIEWMODEL_SET_RANKVIEWMODEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_StarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTARINFODETAILVIEWMODEL_GET_STARCOUNT_OFFSET))(this);
		}

		::System::Void set_StarCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTARINFODETAILVIEWMODEL_SET_STARCOUNT_OFFSET))(this, a1);
		}
	};
}
