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

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xC6F6710)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC6F6580)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0xC6F5960)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_PLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F5880)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_PLANTYPE_OFFSET UNITYSDK_OFFSET(0xC6F58A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xC6EA3D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_RELICINFOLIST_OFFSET UNITYSDK_OFFSET(0xC6E52D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_RELICINFOS_OFFSET UNITYSDK_OFFSET(0xC6F5870)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_RELICITEMDATAS_OFFSET UNITYSDK_OFFSET(0xC6F61F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_SETIDS_OFFSET UNITYSDK_OFFSET(0xC6F5FA0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_SUBAFFIXHITCOUNTS_OFFSET UNITYSDK_OFFSET(0xC6F5F80)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_TOTALHITCOUNT_OFFSET UNITYSDK_OFFSET(0xC6F5D90)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xC6F5A80)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_ISCONTAIN_OFFSET UNITYSDK_OFFSET(0xC6F6CC0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SETPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F6E10)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SETPLANTYPE_OFFSET UNITYSDK_OFFSET(0xC6F6EA0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0xC6F5A20)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_PLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F5890)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_PLANTYPE_OFFSET UNITYSDK_OFFSET(0xC6F58B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0xC6F5910)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA_SET_SUBAFFIXHITCOUNTS_OFFSET UNITYSDK_OFFSET(0xC6F5F90)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6F6680)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA__HASFLAG_OFFSET UNITYSDK_OFFSET(0xC6F58C0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCalculationResultData_TypeDefinitionIndex = 69496;

	class RelicSmartSuitCalculationResultData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::UInt32>* _SubAffixHitCounts_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* _RelicInfos_k__BackingField; // 0x18
		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* _PlanData_k__BackingField; // 0x20
		::System::Single _ExtraScore; // 0x28
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData_InitFlag _InitFlag; // 0x2C
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
