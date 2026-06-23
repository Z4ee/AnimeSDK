#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

class Class_3_85F58BFBD64BE9AC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_ISCANFINISH_OFFSET UNITYSDK_OFFSET(0x148C40B0)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_ONCEORDERSORTMETHOD_OFFSET UNITYSDK_OFFSET(0x148C4360)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_REFRESHORDERREDSIGNBYDATA_OFFSET UNITYSDK_OFFSET(0x148C4070)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_REPEATORDERSORTMETHOD_OFFSET UNITYSDK_OFFSET(0x148C4420)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_SETORDERDATA_OFFSET UNITYSDK_OFFSET(0x148C36C0)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_SETPERREWARDITEM_OFFSET UNITYSDK_OFFSET(0x148C3FA0)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_SETREPEATREWARDLIST_OFFSET UNITYSDK_OFFSET(0x148C3A00)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x148C44C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDrinkTeaRowWidgetController_ItemData_TypeDefinitionIndex = 56263;

	class UISuibianDrinkTeaRowWidgetController_ItemData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* RewardList; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* NeedItemCountList; // 0x18
		::System::String* Title; // 0x20
		::System::String* Description; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* NeedItemIdList; // 0x30
		::System::String* TargetDescription; // 0x38
		::System::Int32 OrderClientId; // 0x40
		::System::Int32 Id; // 0x44
		::System::Int32 RewardCoinId; // 0x48
		::System::Int32 Slot; // 0x4C
		::System::Int32 BigRewardTipsId; // 0x50
		::System::Int32 PrefixTitleId; // 0x54
		::System::Int32 OrderType; // 0x58
		::System::Boolean IsTask; // 0x5C
		::System::Boolean IsNew; // 0x5D
		::System::Boolean IsOnce; // 0x5E
		::System::Boolean IsFinish; // 0x5F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetOrderData(::Class_3_85F58BFBD64BE9AC* serverData, ::System::Boolean isOnce)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_85F58BFBD64BE9AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_SETORDERDATA_OFFSET))(this, serverData, isOnce);
		}

		::System::Void SetRepeatRewardList(::Class_3_85F58BFBD64BE9AC* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_85F58BFBD64BE9AC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_SETREPEATREWARDLIST_OFFSET))(this, serverData);
		}

		::System::Void SetPerRewardItem(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 rewardItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_SETPERREWARDITEM_OFFSET))(this, rewardItem);
		}

		::System::Void RefreshOrderRedSignByData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_REFRESHORDERREDSIGNBYDATA_OFFSET))(this);
		}

		::System::Boolean IsCanFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_ISCANFINISH_OFFSET))(this);
		}

		static ::System::Int32 OnceOrderSortMethod(::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData* first, ::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData* second)
		{
			return ((::System::Int32(*)(::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData*, ::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_ONCEORDERSORTMETHOD_OFFSET))(first, second);
		}

		static ::System::Int32 RepeatOrderSortMethod(::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData* first, ::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData* second)
		{
			return ((::System::Int32(*)(::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData*, ::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_REPEATORDERSORTMETHOD_OFFSET))(first, second);
		}
	};
}
