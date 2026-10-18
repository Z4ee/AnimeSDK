#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipUiData.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1383;
class Class_1_041CA627B6BC03C3;
class Class_1_2E5B9B93DA94ACD3;
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace RPG::Client::ActivityIdleLive { class SpSlotUiData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETALLSPEQUIPS_OFFSET UNITYSDK_OFFSET(0xC4528E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETCONFIRMBTNHINTTEXT_OFFSET UNITYSDK_OFFSET(0xC452720)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETSELECTEDEQUIPUIDATA_OFFSET UNITYSDK_OFFSET(0xC452590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETSLOTUIDATAS_OFFSET UNITYSDK_OFFSET(0xC452880)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETSPEQUIPSLOTDATABYEQUIP_OFFSET UNITYSDK_OFFSET(0xC453110)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GET_ISQUICKSELECT_OFFSET UNITYSDK_OFFSET(0xC451A20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GET_SPEQUIPSLOTINFO_OFFSET UNITYSDK_OFFSET(0xC451A60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_HASSELECTEDEQUIP_OFFSET UNITYSDK_OFFSET(0xC4520C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_ISEQUIPSELECTED_OFFSET UNITYSDK_OFFSET(0xC452500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_PREVIEWEQUIP_OFFSET UNITYSDK_OFFSET(0xC452300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SELECTEQUIP_OFFSET UNITYSDK_OFFSET(0xC452110)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SHOWCONFIRMBTN_OFFSET UNITYSDK_OFFSET(0xC452640)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SHOWQUICKSELECTSWITCHBTN_OFFSET UNITYSDK_OFFSET(0xC4526C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SWITCHQUICKSELECT_OFFSET UNITYSDK_OFFSET(0xC4527F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_UPDATEDISPLAYEQUIP_OFFSET UNITYSDK_OFFSET(0xC452070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_UPDATEPROCESSINGEQUIP_OFFSET UNITYSDK_OFFSET(0xC452020)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC451AA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__GETSTRONGESTEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xC452920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__SORTALLEQUIPS_OFFSET UNITYSDK_OFFSET(0xC451F40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__UPDATECUREQUIPSTRATEGY_OFFSET UNITYSDK_OFFSET(0xC451EB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___CTOR_B__19_1_OFFSET UNITYSDK_OFFSET(0xC453170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___GETSTRONGESTEQUIPLIST_B__35_0_OFFSET UNITYSDK_OFFSET(0xC4531D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int BaseSpEquipInventoryDisplayData_TypeDefinitionIndex = 75434;

	class BaseSpEquipInventoryDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpecialEquip* _ProcessingEquip; // 0x10
		::Class_1_041CA627B6BC03C3* _SelectEquipStrategyQuick; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* _EquipSortedByRarityThenLevel; // 0x20
		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* _SpEquipSlotInfo; // 0x28
		::Class_1_2E5B9B93DA94ACD3* _SelectEquipStrategyNormal; // 0x30
		::RPG::Client::ActivityIdleLive::SpecialEquip* _DisplayingEquip; // 0x38
		::Class_0_16E4307DCC419505_1383* _CurSelectEquipStrategy; // 0x40
		::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* _TeamInfo; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* _AllEquips; // 0x50
		::System::UInt32 _InitSelectedEquipId; // 0x58
		::System::Boolean _IsQuickSelect; // 0x5C

		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1, ::System::UInt32 a2, ::System::Boolean a3, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*, ::System::UInt32, ::System::Boolean, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsQuickSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GET_ISQUICKSELECT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* get_SpEquipSlotInfo()
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GET_SPEQUIPSLOTINFO_OFFSET))(this);
		}

		::System::Int32 _SortAllEquips(::RPG::Client::ActivityIdleLive::SpecialEquip* a1, ::RPG::Client::ActivityIdleLive::SpecialEquip* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__SORTALLEQUIPS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateCurEquipStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__UPDATECUREQUIPSTRATEGY_OFFSET))(this);
		}

		::System::Void UpdateProcessingEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_UPDATEPROCESSINGEQUIP_OFFSET))(this, a1);
		}

		::System::Void UpdateDisplayEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_UPDATEDISPLAYEQUIP_OFFSET))(this, a1);
		}

		::System::Boolean HasSelectedEquip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_HASSELECTEDEQUIP_OFFSET))(this);
		}

		::System::Void SelectEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SELECTEQUIP_OFFSET))(this, a1);
		}

		::System::Void PreviewEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_PREVIEWEQUIP_OFFSET))(this, a1);
		}

		::System::Boolean IsEquipSelected(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_ISEQUIPSELECTED_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::EquipUiData GetSelectedEquipUiData()
		{
			return ((::RPG::Client::ActivityIdleLive::EquipUiData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETSELECTEDEQUIPUIDATA_OFFSET))(this);
		}

		::System::Boolean ShowConfirmBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SHOWCONFIRMBTN_OFFSET))(this);
		}

		::System::Boolean ShowQuickSelectSwitchBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SHOWQUICKSELECTSWITCHBTN_OFFSET))(this);
		}

		::RPG::Client::TextID GetConfirmBtnHintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETCONFIRMBTNHINTTEXT_OFFSET))(this);
		}

		::System::Void SwitchQuickSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SWITCHQUICKSELECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpSlotUiData*>* GetSlotUiDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpSlotUiData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETSLOTUIDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* GetAllSpEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETALLSPEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _GetStrongestEquipList()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__GETSTRONGESTEQUIPLIST_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotData* GetSpEquipSlotDataByEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotData*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETSPEQUIPSLOTDATABYEQUIP_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__19_1(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___CTOR_B__19_1_OFFSET))(this, a1);
		}

		::System::Boolean __GetStrongestEquipList_b__35_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___GETSTRONGESTEQUIPLIST_B__35_0_OFFSET))(this, a1);
		}
	};
}
