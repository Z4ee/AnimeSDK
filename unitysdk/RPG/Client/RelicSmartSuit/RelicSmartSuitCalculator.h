#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_D11FF2E4C51BF3B1;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERANK_OFFSET UNITYSDK_OFFSET(0xC6F8BF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULTFORCURSET_OFFSET UNITYSDK_OFFSET(0xC6F80D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULTFORSPECIFIC_OFFSET UNITYSDK_OFFSET(0xC6F7D00)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULT_OFFSET UNITYSDK_OFFSET(0xC6F7290)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATEVIRTUALSCOREAFTERFILTER_OFFSET UNITYSDK_OFFSET(0xC6F8A00)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0xC6F7080)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_GETRELICCALCULATIONRESULTINFOS_OFFSET UNITYSDK_OFFSET(0xC6F8CB0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_SETAVATAR_OFFSET UNITYSDK_OFFSET(0xC6F7210)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_SETUPPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F7190)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEFINALSCORE_OFFSET UNITYSDK_OFFSET(0xC6F8250)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEHITCOUNT_OFFSET UNITYSDK_OFFSET(0xC6F8930)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEINFO_OFFSET UNITYSDK_OFFSET(0xC6F7700)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEMAINPROPERTYMATCH_OFFSET UNITYSDK_OFFSET(0xC6F8670)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATERANK_OFFSET UNITYSDK_OFFSET(0xC6F8610)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CONTAINCRITICAL_OFFSET UNITYSDK_OFFSET(0xC6F7820)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC6F7100)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__ISCRITICALPROPERTY_OFFSET UNITYSDK_OFFSET(0xC6F7CA0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCalculator_TypeDefinitionIndex = 69499;

	class RelicSmartSuitCalculator : public ::System::Object
	{
	public:
		::Class_1_D11FF2E4C51BF3B1* _DataSource; // 0x10

		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculator* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculator*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CREATE_OFFSET))(a1);
		}

		::System::Void SetupPlanData(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_SETUPPLANDATA_OFFSET))(this, a1);
		}

		::System::Void SetAvatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_SETAVATAR_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* CalculateResult()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULT_OFFSET))(this);
		}

		::System::Boolean _ContainCritical(::RPG::Client::RelicRecommendData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CONTAINCRITICAL_OFFSET))(this, a1);
		}

		::System::Boolean _IsCriticalProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__ISCRITICALPROPERTY_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* CalculateResultForSpecific(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULTFORSPECIFIC_OFFSET))(a1, a2);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* CalculateResultForCurSet()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULTFORCURSET_OFFSET))(this);
		}

		::System::Void _CalculateInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEINFO_OFFSET))(this, a1);
		}

		::System::Single CalculateVirtualScoreAfterFilter(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATEVIRTUALSCOREAFTERFILTER_OFFSET))(this, a1);
		}

		::System::Void _CalculateFinalScore(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEFINALSCORE_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicSmartSuit::RankType CalculateRank(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::RPG::Client::RelicSmartSuit::RankType(*)(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERANK_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RelicSmartSuit::RankType _CalculateRank(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RelicSmartSuit::RankType(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATERANK_OFFSET))(a1, a2);
		}

		::System::Void _CalculateMainPropertyMatch(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEMAINPROPERTYMATCH_OFFSET))(this, a1);
		}

		::System::Void _CalculateHitCount(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEHITCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* GetRelicCalculationResultInfos(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::RPG::GameCore::RelicType a2, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::GameCore::RelicType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_GETRELICCALCULATIONRESULTINFOS_OFFSET))(this, a1, a2, a3);
		}
	};
}
