#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_52F4A47C29C64CBB;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERANK_OFFSET UNITYSDK_OFFSET(0x1795BC30)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULTFORCURSET_OFFSET UNITYSDK_OFFSET(0x1795B110)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULTFORSPECIFIC_OFFSET UNITYSDK_OFFSET(0x1795ACD0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULT_OFFSET UNITYSDK_OFFSET(0x1795A170)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATEVIRTUALSCOREAFTERFILTER_OFFSET UNITYSDK_OFFSET(0x1795BA40)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x17959F60)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_GETRELICCALCULATIONRESULTINFOS_OFFSET UNITYSDK_OFFSET(0x1795BCF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_SETAVATAR_OFFSET UNITYSDK_OFFSET(0x1795A0F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_SETUPPLANDATA_OFFSET UNITYSDK_OFFSET(0x1795A070)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEFINALSCORE_OFFSET UNITYSDK_OFFSET(0x1795B290)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEHITCOUNT_OFFSET UNITYSDK_OFFSET(0x1795B970)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEINFO_OFFSET UNITYSDK_OFFSET(0x1795A6D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEMAINPROPERTYMATCH_OFFSET UNITYSDK_OFFSET(0x1795B6B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATERANK_OFFSET UNITYSDK_OFFSET(0x1795B650)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CONTAINCRITICAL_OFFSET UNITYSDK_OFFSET(0x1795A7F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17959FE0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__ISCRITICALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1795AC70)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCalculator_TypeDefinitionIndex = 74321;

	class RelicSmartSuitCalculator : public ::System::Object
	{
	public:
		::Class_1_52F4A47C29C64CBB* _DataSource; // 0x10

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
