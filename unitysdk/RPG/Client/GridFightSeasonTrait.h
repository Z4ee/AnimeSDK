#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitChallenge; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_ANYQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x98A47E0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_CHECKHASANYTRAITQUESTFINISHEDBYTYPE_OFFSET UNITYSDK_OFFSET(0x98A3570)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETALLQUESTDATA_OFFSET UNITYSDK_OFFSET(0x98A3780)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETFINISHRATIO_OFFSET UNITYSDK_OFFSET(0x98A4D60)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCHALLENGES_OFFSET UNITYSDK_OFFSET(0x98A3460)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x98A3C50)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x98A3A70)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GET_ALLRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x98A5540)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GET_HAVEGOTTENRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x98A5550)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x98A49F0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_ISALLQUESTGOT_OFFSET UNITYSDK_OFFSET(0x98A5080)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_TAKEALLQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x98A3F20)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x989EFB0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT__GETHAVEGOTTENRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x98A53E0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT__GETRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x98A5280)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTrait_TypeDefinitionIndex = 53103;

	class GridFightSeasonTrait : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitChallenge*>* _TraitChallenges; // 0x10

		::System::Void _ctor(::System::UInt32 seasonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT__CTOR_OFFSET))(this, seasonID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitChallenge*>* GetTraitChallenges(::RPG::GameCore::GridFightTraitType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitChallenge*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCHALLENGES_OFFSET))(this, type);
		}

		::System::Boolean CheckHasAnyTraitQuestFinishedByType(::RPG::GameCore::GridFightTraitType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_CHECKHASANYTRAITQUESTFINISHEDBYTYPE_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetAllQuestData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETALLQUESTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* GetTraitConfigs(::RPG::GameCore::GridFightTraitType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCONFIGS_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* GetTraitConfigsWithoutCheckCompleted(::RPG::GameCore::GridFightTraitType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_OFFSET))(this, type);
		}

		::System::Void TakeAllQuestReward(::RPG::GameCore::GridFightTraitType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_TAKEALLQUESTREWARD_OFFSET))(this, type);
		}

		::System::Boolean AnyQuestFinished(::RPG::GameCore::GridFightTraitType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_ANYQUESTFINISHED_OFFSET))(this, type);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Int32 GetFinishRatio()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETFINISHRATIO_OFFSET))(this);
		}

		::System::Boolean IsAllQuestGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_ISALLQUESTGOT_OFFSET))(this);
		}

		::System::Int32 _GetRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT__GETRELICCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetHaveGottenRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT__GETHAVEGOTTENRELICCOUNT_OFFSET))(this);
		}

		::System::Int32 get_AllRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GET_ALLRELICCOUNT_OFFSET))(this);
		}

		::System::Int32 get_HaveGottenRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GET_HAVEGOTTENRELICCOUNT_OFFSET))(this);
		}
	};
}
