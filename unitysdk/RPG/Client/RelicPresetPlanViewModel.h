#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_18.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_19.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_1D95EF1836E9FE9D;
class Class_1_5D2E9E194E93B02A;
class Class_1_963E317C37FB5E9A_72;
class Class_1_B5A923E6D262DF9D_3;
class Class_1_D17272E82AE804C2_912;
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

#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ADDPLAN_1_OFFSET UNITYSDK_OFFSET(0xDE34CD0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ADDPLAN_2_OFFSET UNITYSDK_OFFSET(0xDE34B80)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ADDPLAN_OFFSET UNITYSDK_OFFSET(0xDE34B10)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_APPLYPLAN_OFFSET UNITYSDK_OFFSET(0xDE35D20)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_DELETEPLAN_OFFSET UNITYSDK_OFFSET(0xDE35420)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETAFFECTEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xDE35B20)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETCURRENTEQUIPPEDSLOTS_OFFSET UNITYSDK_OFFSET(0xDE35730)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETPLANDATA_OFFSET UNITYSDK_OFFSET(0xDE30330)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETRELICITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xDE363A0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETRELICITEMDATA_OFFSET UNITYSDK_OFFSET(0xDE30FA0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETRELICPRESETEDITVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE30080)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_DEFAULTTIPSNAME_OFFSET UNITYSDK_OFFSET(0xDE325B0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_ISAPPLYING_OFFSET UNITYSDK_OFFSET(0xDE32750)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xDE2E080)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDE32540)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_PLANUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDE32700)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_RANKTYPE_OFFSET UNITYSDK_OFFSET(0xDE32840)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_SERVERCACHENAME_OFFSET UNITYSDK_OFFSET(0xDE324D0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0xDE32830)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_HASEMPTYSLOT_OFFSET UNITYSDK_OFFSET(0xDE35550)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ISEMPTYPLAN_OFFSET UNITYSDK_OFFSET(0xDE340B0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_REPLACERELIC_OFFSET UNITYSDK_OFFSET(0xDE33200)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_SETPLANNAME_OFFSET UNITYSDK_OFFSET(0xDE34A90)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_SET_RANKTYPE_OFFSET UNITYSDK_OFFSET(0xDE32850)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_UPDATEPLANNAME_OFFSET UNITYSDK_OFFSET(0xDE34F80)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_UPDATEPLANRELICS_OFFSET UNITYSDK_OFFSET(0xDE350C0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL_UPDATERELIC_OFFSET UNITYSDK_OFFSET(0xDE33C90)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__ADDPLAN_B__48_0_OFFSET UNITYSDK_OFFSET(0xDE36690)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__BUILDPROPERTYVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDE32B20)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__BUILDSLOTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDE32860)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE36540)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xDE2DC00)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__DELETEPLAN_B__51_0_OFFSET UNITYSDK_OFFSET(0xDE367B0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__GETDISPLAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0xDE34110)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__GETRELICBYTYPEDICT_OFFSET UNITYSDK_OFFSET(0xDE34670)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATEPLANNAME_B__49_0_OFFSET UNITYSDK_OFFSET(0xDE36700)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATEPLANRELICS_B__50_1_OFFSET UNITYSDK_OFFSET(0xDE36750)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATEPROPERTYVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDE33720)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATERANK_OFFSET UNITYSDK_OFFSET(0xDE34860)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATERELIC_B__35_0_OFFSET UNITYSDK_OFFSET(0xDE365D0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATESLOTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDE33460)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPlanViewModel_TypeDefinitionIndex = 66872;

	class RelicPresetPlanViewModel : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::RelicType>** StaticGet_SlotTypes()
		{
			return (::Il2CppArray<::RPG::GameCore::RelicType>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel_TypeDefinitionIndex)->GetStaticField(0x5EF20);
		}
		::Class_2_229A7FF636DA17C3* _NetworkService; // 0x10
		::Class_1_1D95EF1836E9FE9D* _CalculatorService; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* RecommendMainAffixs; // 0x20
		::RPG::Client::RelicPresetPlanData* _PlanData; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetSlotViewModel*>* _Slots_k__BackingField; // 0x30
		::RPG::Client::RelicPresetModel* _Model; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::Client::RelicPresetPropertyViewModel*>* PropertyViewModels; // 0x40
		::Class_1_5D2E9E194E93B02A* _DataService; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>* DisplayProperties; // 0x50
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* RecommendSubAffixs; // 0x58
		::Enum_3_71AA90D596A09AC8_19 SourceType; // 0x60
		::System::UInt32 AvatarID; // 0x64
		::RPG::Client::RelicSmartSuit::RankType _RankType_k__BackingField; // 0x68

		::System::Void _ctor(::System::UInt32 a1, ::Enum_3_71AA90D596A09AC8_19 a2, ::RPG::Client::RelicPresetModel* a3, ::RPG::Client::RelicPresetPlanData* a4, ::Class_1_5D2E9E194E93B02A* a5, ::Class_2_229A7FF636DA17C3* a6, ::Class_1_1D95EF1836E9FE9D* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_71AA90D596A09AC8_19, ::RPG::Client::RelicPresetModel*, ::RPG::Client::RelicPresetPlanData*, ::Class_1_5D2E9E194E93B02A*, ::Class_2_229A7FF636DA17C3*, ::Class_1_1D95EF1836E9FE9D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
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

		::System::String* get_DefaultTipsName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GET_DEFAULTTIPSNAME_OFFSET))(this);
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

		::System::Void set_RankType(::RPG::Client::RelicSmartSuit::RankType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RankType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_SET_RANKTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::RelicItemData* GetRelicItemData(::RPG::GameCore::RelicType a1)
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETRELICITEMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RelicPresetPlanData* GetPlanData()
		{
			return ((::RPG::Client::RelicPresetPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETPLANDATA_OFFSET))(this);
		}

		::System::Void ReplaceRelic(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_REPLACERELIC_OFFSET))(this, a1);
		}

		::System::Void UpdateRelic(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_UPDATERELIC_OFFSET))(this, a1);
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

		::System::Void SetPlanName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_SETPLANNAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* AddPlan()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ADDPLAN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* AddPlan_1(::System::String* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ADDPLAN_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* AddPlan_2(::System::String* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::Enum_3_71AA90D596A09AC8_18 a3, ::Enum_3_71AA90D596A09AC8_19 a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_71AA90D596A09AC8_18, ::Enum_3_71AA90D596A09AC8_19))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_ADDPLAN_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* UpdatePlanName(::System::String* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_UPDATEPLANNAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* UpdatePlanRelics(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_UPDATEPLANRELICS_OFFSET))(this, a1);
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

		::System::Void ApplyPlan(::System::Boolean& a1, ::System::Boolean& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_APPLYPLAN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* GetRelicItemDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL_GETRELICITEMDATALIST_OFFSET))(this);
		}

		::System::Void _UpdateRelic_b__35_0(::Class_1_B5A923E6D262DF9D_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B5A923E6D262DF9D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATERELIC_B__35_0_OFFSET))(this, a1);
		}

		::System::Void _AddPlan_b__48_0(::Class_1_963E317C37FB5E9A_72* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_72*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__ADDPLAN_B__48_0_OFFSET))(this, a1);
		}

		::System::Void _UpdatePlanName_b__49_0(::Class_1_B5A923E6D262DF9D_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B5A923E6D262DF9D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATEPLANNAME_B__49_0_OFFSET))(this, a1);
		}

		::System::Void _UpdatePlanRelics_b__50_1(::Class_1_B5A923E6D262DF9D_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B5A923E6D262DF9D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__UPDATEPLANRELICS_B__50_1_OFFSET))(this, a1);
		}

		::System::Void _DeletePlan_b__51_0(::Class_1_D17272E82AE804C2_912* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_912*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL__DELETEPLAN_B__51_0_OFFSET))(this, a1);
		}
	};
}
