#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanType.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicSmartSuitCalculationResultData_InitFlag.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x179595F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x17959460)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0x17958480)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_PLANDATA_OFFSET UNITYSDK_OFFSET(0x179582F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_PLANTYPE_OFFSET UNITYSDK_OFFSET(0x17958310)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x17958330)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_RELICINFOLIST_OFFSET UNITYSDK_OFFSET(0x17958D50)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_RELICINFOS_OFFSET UNITYSDK_OFFSET(0x179582E0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_RELICITEMDATAS_OFFSET UNITYSDK_OFFSET(0x179590D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_SETIDS_OFFSET UNITYSDK_OFFSET(0x17958B00)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_SUBAFFIXHITCOUNTS_OFFSET UNITYSDK_OFFSET(0x17958AE0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_TOTALHITCOUNT_OFFSET UNITYSDK_OFFSET(0x179588F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x179585A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_ISCONTAIN_OFFSET UNITYSDK_OFFSET(0x17959BA0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SETPLANDATA_OFFSET UNITYSDK_OFFSET(0x17959CF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SETPLANTYPE_OFFSET UNITYSDK_OFFSET(0x17959D80)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0x17958540)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_PLANDATA_OFFSET UNITYSDK_OFFSET(0x17958300)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_PLANTYPE_OFFSET UNITYSDK_OFFSET(0x17958320)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x17958430)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_SUBAFFIXHITCOUNTS_OFFSET UNITYSDK_OFFSET(0x17958AF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17959560)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA__HASFLAG_OFFSET UNITYSDK_OFFSET(0x179583E0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCalculationResultData_TypeDefinitionIndex = 74318;

	class RelicSmartSuitCalculationResultData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::UInt32>* _SubAffixHitCounts_k__BackingField; // 0x10
		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* _PlanData_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* _RelicInfos_k__BackingField; // 0x20
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData_InitFlag _InitFlag; // 0x28
		::System::Single _ExtraScore; // 0x2C
		::RPG::Client::RelicSmartSuit::RankType _Rank; // 0x30
		::RPG::Client::RelicSmartSuit::PlanType _PlanType_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* get_RelicInfos()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_RELICINFOS_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* get_PlanData()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_PLANDATA_OFFSET))(this);
		}

		::System::Void set_PlanData(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_PLANDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::PlanType get_PlanType()
		{
			return ((::RPG::Client::RelicSmartSuit::PlanType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_PLANTYPE_OFFSET))(this);
		}

		::System::Void set_PlanType(::RPG::Client::RelicSmartSuit::PlanType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_PLANTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RankType get_Rank()
		{
			return ((::RPG::Client::RelicSmartSuit::RankType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::RPG::Client::RelicSmartSuit::RankType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RankType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_RANK_OFFSET))(this, a1);
		}

		::System::Single get_ExtraScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_EXTRASCORE_OFFSET))(this);
		}

		::System::Void set_ExtraScore(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_EXTRASCORE_OFFSET))(this, a1);
		}

		::System::Single get_TotalScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::UInt32 get_TotalHitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_TOTALHITCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::UInt32>* get_SubAffixHitCounts()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_SUBAFFIXHITCOUNTS_OFFSET))(this);
		}

		::System::Void set_SubAffixHitCounts(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_SUBAFFIXHITCOUNTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SetIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_SETIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* get_RelicInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_RELICINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* get_RelicItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_RELICITEMDATAS_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Create()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_CREATE_OFFSET))();
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Clone()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_CLONE_OFFSET))(this);
		}

		::System::Boolean _HasFlag(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData_InitFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData_InitFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA__HASFLAG_OFFSET))(this, a1);
		}

		::System::Boolean IsContain(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_ISCONTAIN_OFFSET))(this, a1);
		}

		::System::Void SetPlanData(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SETPLANDATA_OFFSET))(this, a1);
		}

		::System::Void SetPlanType(::RPG::Client::RelicSmartSuit::PlanType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SETPLANTYPE_OFFSET))(this, a1);
		}
	};
}
