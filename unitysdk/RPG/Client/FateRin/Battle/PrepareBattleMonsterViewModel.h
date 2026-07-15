#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_831CA0874735170E;
class Class_1_96586C089CD5CA69;
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_CHALLENGEBUFFDESCRIPTIONS_OFFSET UNITYSDK_OFFSET(0x1B496940)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_FIGHTDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B496910)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_FIGHTNAME_OFFSET UNITYSDK_OFFSET(0x1B496900)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0x1B4968F0)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_HASCARDREWARD_OFFSET UNITYSDK_OFFSET(0x1B496920)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_ISHOUGUMAPFIGHT_OFFSET UNITYSDK_OFFSET(0x1B4968E0)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_REWARDCARDICONPATH_OFFSET UNITYSDK_OFFSET(0x1B496930)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B495BF0)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B495750)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int PrepareBattleMonsterViewModel_TypeDefinitionIndex = 76025;

	class PrepareBattleMonsterViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::String* _FigurePath_k__BackingField; // 0x20
		::System::String* _RewardCardIconPath_k__BackingField; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* _ChallengeBuffDescriptions_k__BackingField; // 0x30
		::System::Boolean _HasCardReward_k__BackingField; // 0x38
		::System::Boolean _IsHouguMapFight_k__BackingField; // 0x39
		::RPG::Client::TextID _FightName_k__BackingField; // 0x40
		::RPG::Client::TextID _FightDescription_k__BackingField; // 0x50

		::System::Void _ctor(::Class_1_831CA0874735170E* a1, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_831CA0874735170E*, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::Class_1_96586C089CD5CA69* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::Class_1_96586C089CD5CA69*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsHouguMapFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_ISHOUGUMAPFIGHT_OFFSET))(this);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_FIGUREPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_FightName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_FIGHTNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_FightDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_FIGHTDESCRIPTION_OFFSET))(this);
		}

		::System::Boolean get_HasCardReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_HASCARDREWARD_OFFSET))(this);
		}

		::System::String* get_RewardCardIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_REWARDCARDICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_ChallengeBuffDescriptions()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLEMONSTERVIEWMODEL_GET_CHALLENGEBUFFDESCRIPTIONS_OFFSET))(this);
		}
	};
}
