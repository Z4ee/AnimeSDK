#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitChallenge; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_ANYQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x1C5A4DE0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_CHECKHASANYTRAITQUESTFINISHEDBYTYPE_OFFSET UNITYSDK_OFFSET(0x1C5A3C50)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETALLQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1C5A3E40)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETFINISHRATIO_OFFSET UNITYSDK_OFFSET(0x1C5A50F0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCHALLENGES_OFFSET UNITYSDK_OFFSET(0x1C5A3A70)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C5A4210)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C5A4000)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GET_ALLRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5A59D0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GET_HAVEGOTTENRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5A5A20)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1C5A4FD0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_ISALLQUESTGOT_OFFSET UNITYSDK_OFFSET(0x1C5A5480)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_TAKEALLQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x1C5A4550)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C59E280)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT__GETHAVEGOTTENRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5A5850)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT__GETRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5A56D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTrait_TypeDefinitionIndex = 65479;

	class GridFightSeasonTrait : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitChallenge*>* _TraitChallenges; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitChallenge*>* GetTraitChallenges(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitChallenge*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCHALLENGES_OFFSET))(this, a1);
		}

		::System::Boolean CheckHasAnyTraitQuestFinishedByType(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_CHECKHASANYTRAITQUESTFINISHEDBYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetAllQuestData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETALLQUESTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* GetTraitConfigs(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* GetTraitConfigsWithoutCheckCompleted(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void TakeAllQuestReward(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_TAKEALLQUESTREWARD_OFFSET))(this, a1);
		}

		::System::Boolean AnyQuestFinished(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_ANYQUESTFINISHED_OFFSET))(this, a1);
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
