#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_15.h"
#include "unitysdk/Enum_3_96F6662CA3713095_24.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_29A54A6045520AF2;
class Class_1_6A9A64AC86CBF3B4;
class Class_1_963E317C37FB5E9A_27;
class Class_1_D17272E82AE804C2_747;
class Class_1_F3622139E5E134C0;
class Class_2_229A7FF636DA17C3;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicPresetEditViewModel; }
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client { class RelicPresetPlanData; }
namespace RPG::Client { class RelicPresetPropertyViewModel; }
namespace RPG::Client { class RelicPresetSlotViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ADDPLAN_1_OFFSET UNITYSDK_OFFSET(0xAFA2200)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ADDPLAN_2_OFFSET UNITYSDK_OFFSET(0xAFA20C0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ADDPLAN_OFFSET UNITYSDK_OFFSET(0xAFA2050)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_APPLYPLAN_OFFSET UNITYSDK_OFFSET(0xAFA34E0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_DELETEPLAN_OFFSET UNITYSDK_OFFSET(0xAFA2B60)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETAFFECTEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xAFA32D0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETCURRENTEQUIPPEDSLOTS_OFFSET UNITYSDK_OFFSET(0xAFA2E80)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETPLANDATA_OFFSET UNITYSDK_OFFSET(0xAF9D530)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETRELICITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xAFA3C00)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETRELICITEMDATA_OFFSET UNITYSDK_OFFSET(0xAF9E540)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETRELICPRESETEDITVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAF9D2F0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_ISAPPLYING_OFFSET UNITYSDK_OFFSET(0xAF9FC90)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xAF9B610)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xAF9FB40)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_PLANUNIQUEID_OFFSET UNITYSDK_OFFSET(0xAF9FC40)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_RANKTYPE_OFFSET UNITYSDK_OFFSET(0xAF9FD40)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_SERVERCACHENAME_OFFSET UNITYSDK_OFFSET(0xAF9FAE0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0xAF9FD30)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_HASEMPTYSLOT_OFFSET UNITYSDK_OFFSET(0xAFA2C80)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ISEMPTYPLAN_OFFSET UNITYSDK_OFFSET(0xAFA1430)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_REPLACERELIC_OFFSET UNITYSDK_OFFSET(0xAFA0650)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_SETPLANNAME_OFFSET UNITYSDK_OFFSET(0xAFA1FD0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_SET_RANKTYPE_OFFSET UNITYSDK_OFFSET(0xAF9FD50)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_UPDATEPLANNAME_OFFSET UNITYSDK_OFFSET(0xAFA2620)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_UPDATEPLANRELICS_OFFSET UNITYSDK_OFFSET(0xAFA2750)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_UPDATERELIC_OFFSET UNITYSDK_OFFSET(0xAFA1090)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__ADDPLAN_B__46_0_OFFSET UNITYSDK_OFFSET(0xAFA3EF0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__BUILDPROPERTYVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xAF9FFF0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__BUILDSLOTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xAF9FD60)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__CCTOR_OFFSET UNITYSDK_OFFSET(0xAFA3DA0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAF9B190)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__DELETEPLAN_B__49_0_OFFSET UNITYSDK_OFFSET(0xAFA4010)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__GETDISPLAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0xAFA1490)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__GETRELICBYTYPEDICT_OFFSET UNITYSDK_OFFSET(0xAFA1AB0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATEPLANNAME_B__47_0_OFFSET UNITYSDK_OFFSET(0xAFA3F60)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATEPLANRELICS_B__48_1_OFFSET UNITYSDK_OFFSET(0xAFA3FB0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATEPROPERTYVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xAFA0B90)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATERANK_OFFSET UNITYSDK_OFFSET(0xAFA1D10)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATERELIC_B__33_0_OFFSET UNITYSDK_OFFSET(0xAFA3E30)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATESLOTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xAFA0880)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPlanViewModel_TypeDefinitionIndex = 61582;

	class RelicPresetPlanViewModel : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::RelicType>** StaticGet_SlotTypes()
		{
			return (::Il2CppArray<::RPG::GameCore::RelicType>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel_TypeDefinitionIndex)->GetStaticField(0x148C0);
		}
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* RecommendSubAffixs; // 0x10
		::RPG::Client::RelicPresetPlanData* _PlanData; // 0x18
		::Class_1_29A54A6045520AF2* _DataService; // 0x20
		::RPG::Client::RelicPresetModel* _Model; // 0x28
		::Class_2_229A7FF636DA17C3* _NetworkService; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::Client::RelicPresetPropertyViewModel*>* PropertyViewModels; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetSlotViewModel*>* _Slots_k__BackingField; // 0x40
		::Class_1_6A9A64AC86CBF3B4* _CalculatorService; // 0x48
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* RecommendMainAffixs; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>* DisplayProperties; // 0x58
		::System::UInt32 AvatarID; // 0x60
		::Enum_3_96F6662CA3713095_24 SourceType; // 0x64
		::RPG::Client::RelicSmartSuit::RankType _RankType_k__BackingField; // 0x68

		::System::Void _ctor(::System::UInt32 avatarID, ::Enum_3_96F6662CA3713095_24 sourceType, ::RPG::Client::RelicPresetModel* model, ::RPG::Client::RelicPresetPlanData* planData, ::Class_1_29A54A6045520AF2* dataService, ::Class_2_229A7FF636DA17C3* networkService, ::Class_1_6A9A64AC86CBF3B4* calculatorService)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_96F6662CA3713095_24, ::RPG::Client::RelicPresetModel*, ::RPG::Client::RelicPresetPlanData*, ::Class_1_29A54A6045520AF2*, ::Class_2_229A7FF636DA17C3*, ::Class_1_6A9A64AC86CBF3B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__CTOR_OFFSET))(this, avatarID, sourceType, model, planData, dataService, networkService, calculatorService);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_ISEMPTY_OFFSET))(this);
		}

		::System::String* get_ServerCacheName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_SERVERCACHENAME_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_PlanUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_PLANUNIQUEID_OFFSET))(this);
		}

		::System::Boolean get_IsApplying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_ISAPPLYING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetSlotViewModel*>* get_Slots()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicPresetSlotViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_SLOTS_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RankType get_RankType()
		{
			return ((::RPG::Client::RelicSmartSuit::RankType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_RANKTYPE_OFFSET))(this);
		}

		::System::Void set_RankType(::RPG::Client::RelicSmartSuit::RankType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RankType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_SET_RANKTYPE_OFFSET))(this, value);
		}

		::RPG::Client::RelicItemData* GetRelicItemData(::RPG::GameCore::RelicType relicType)
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETRELICITEMDATA_OFFSET))(this, relicType);
		}

		::RPG::Client::RelicPresetPlanData* GetPlanData()
		{
			return ((::RPG::Client::RelicPresetPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETPLANDATA_OFFSET))(this);
		}

		::System::Void ReplaceRelic(::System::UInt32 relicID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_REPLACERELIC_OFFSET))(this, relicID);
		}

		::System::Void UpdateRelic(::System::UInt32 relicID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_UPDATERELIC_OFFSET))(this, relicID);
		}

		::RPG::Client::RelicPresetEditViewModel* GetRelicPresetEditViewModel()
		{
			return ((::RPG::Client::RelicPresetEditViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETRELICPRESETEDITVIEWMODEL_OFFSET))(this);
		}

		::System::Boolean IsEmptyPlan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ISEMPTYPLAN_OFFSET))(this);
		}

		::System::Void _BuildPropertyViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__BUILDPROPERTYVIEWMODELS_OFFSET))(this);
		}

		::RPG::PoolDictionary_2<::RPG::GameCore::RelicType, ::RPG::Client::RelicItemData*>* _GetRelicByTypeDict()
		{
			return ((::RPG::PoolDictionary_2<::RPG::GameCore::RelicType, ::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__GETRELICBYTYPEDICT_OFFSET))(this);
		}

		::System::Void _BuildSlotViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__BUILDSLOTVIEWMODELS_OFFSET))(this);
		}

		::System::Void _UpdatePropertyViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATEPROPERTYVIEWMODELS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>* _GetDisplayProperties()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__GETDISPLAYPROPERTIES_OFFSET))(this);
		}

		::System::Void _UpdateSlotViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATESLOTVIEWMODELS_OFFSET))(this);
		}

		::System::Void _UpdateRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATERANK_OFFSET))(this);
		}

		::System::Void SetPlanName(::System::String* planName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_SETPLANNAME_OFFSET))(this, planName);
		}

		::RPG::Client::Promises::IPromise* AddPlan()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ADDPLAN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* AddPlan_1(::System::String* name, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* planResult)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ADDPLAN_1_OFFSET))(this, name, planResult);
		}

		::RPG::Client::Promises::IPromise* AddPlan_2(::System::String* name, ::System::Collections::Generic::List_1<::System::UInt32>* relics, ::Enum_3_71AA90D596A09AC8_15 rankType, ::Enum_3_96F6662CA3713095_24 sourceType)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_71AA90D596A09AC8_15, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ADDPLAN_2_OFFSET))(this, name, relics, rankType, sourceType);
		}

		::RPG::Client::Promises::IPromise* UpdatePlanName(::System::String* name)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_UPDATEPLANNAME_OFFSET))(this, name);
		}

		::RPG::Client::Promises::IPromise* UpdatePlanRelics(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* planResult)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_UPDATEPLANRELICS_OFFSET))(this, planResult);
		}

		::RPG::Client::Promises::IPromise* DeletePlan()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_DELETEPLAN_OFFSET))(this);
		}

		::System::Boolean HasEmptySlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_HASEMPTYSLOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetSlotViewModel*>* GetCurrentEquippedSlots()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicPresetSlotViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETCURRENTEQUIPPEDSLOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAffectedAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETAFFECTEDAVATARIDS_OFFSET))(this);
		}

		::System::Void ApplyPlan(::System::Boolean& requestTakeOff, ::System::Boolean& requestDress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_APPLYPLAN_OFFSET))(this, requestTakeOff, requestDress);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* GetRelicItemDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETRELICITEMDATALIST_OFFSET))(this);
		}

		::System::Void _UpdateRelic_b__33_0(::Class_1_F3622139E5E134C0* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3622139E5E134C0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATERELIC_B__33_0_OFFSET))(this, rsp);
		}

		::System::Void _AddPlan_b__46_0(::Class_1_963E317C37FB5E9A_27* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__ADDPLAN_B__46_0_OFFSET))(this, rsp);
		}

		::System::Void _UpdatePlanName_b__47_0(::Class_1_F3622139E5E134C0* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3622139E5E134C0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATEPLANNAME_B__47_0_OFFSET))(this, rsp);
		}

		::System::Void _UpdatePlanRelics_b__48_1(::Class_1_F3622139E5E134C0* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3622139E5E134C0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATEPLANRELICS_B__48_1_OFFSET))(this, rsp);
		}

		::System::Void _DeletePlan_b__49_0(::Class_1_D17272E82AE804C2_747* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_747*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__DELETEPLAN_B__49_0_OFFSET))(this, rsp);
		}
	};
}
