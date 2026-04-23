#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipUiData.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1092;
class Class_1_041CA627B6BC03C3;
class Class_1_2E5B9B93DA94ACD3;
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace RPG::Client::ActivityIdleLive { class SpSlotUiData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETALLSPEQUIPS_OFFSET UNITYSDK_OFFSET(0x9B23C70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETCONFIRMBTNHINTTEXT_OFFSET UNITYSDK_OFFSET(0x9B23AB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETSELECTEDEQUIPUIDATA_OFFSET UNITYSDK_OFFSET(0x9B23920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETSLOTUIDATAS_OFFSET UNITYSDK_OFFSET(0x9B23C10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETSPEQUIPSLOTDATABYEQUIP_OFFSET UNITYSDK_OFFSET(0x9B242C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GET_ISQUICKSELECT_OFFSET UNITYSDK_OFFSET(0x9B22F70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GET_SPEQUIPSLOTINFO_OFFSET UNITYSDK_OFFSET(0x9B22F80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_HASSELECTEDEQUIP_OFFSET UNITYSDK_OFFSET(0x9B23540)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_ISEQUIPSELECTED_OFFSET UNITYSDK_OFFSET(0x9B238C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_PREVIEWEQUIP_OFFSET UNITYSDK_OFFSET(0x9B23720)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SELECTEQUIP_OFFSET UNITYSDK_OFFSET(0x9B23590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SHOWCONFIRMBTN_OFFSET UNITYSDK_OFFSET(0x9B239D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SHOWQUICKSELECTSWITCHBTN_OFFSET UNITYSDK_OFFSET(0x9B23A50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SWITCHQUICKSELECT_OFFSET UNITYSDK_OFFSET(0x9B23B80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_UPDATEDISPLAYEQUIP_OFFSET UNITYSDK_OFFSET(0x9B234F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_UPDATEPROCESSINGEQUIP_OFFSET UNITYSDK_OFFSET(0x9B234A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B22F90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__GETSTRONGESTEQUIPLIST_OFFSET UNITYSDK_OFFSET(0x9B23CB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__SORTALLEQUIPS_OFFSET UNITYSDK_OFFSET(0x9B233C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__UPDATECUREQUIPSTRATEGY_OFFSET UNITYSDK_OFFSET(0x9B23330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___CTOR_B__19_1_OFFSET UNITYSDK_OFFSET(0x9B24320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___GETSTRONGESTEQUIPLIST_B__35_0_OFFSET UNITYSDK_OFFSET(0x9B24340)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int BaseSpEquipInventoryDisplayData_TypeDefinitionIndex = 69492;

	class BaseSpEquipInventoryDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* _EquipSortedByRarityThenLevel; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* _TeamInfo; // 0x18
		::Class_0_16E4307DCC419505_1092* _CurSelectEquipStrategy; // 0x20
		::Class_1_2E5B9B93DA94ACD3* _SelectEquipStrategyNormal; // 0x28
		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* _SpEquipSlotInfo; // 0x30
		::RPG::Client::ActivityIdleLive::SpecialEquip* _ProcessingEquip; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* _AllEquips; // 0x40
		::Class_1_041CA627B6BC03C3* _SelectEquipStrategyQuick; // 0x48
		::RPG::Client::ActivityIdleLive::SpecialEquip* _DisplayingEquip; // 0x50
		::System::Boolean _IsQuickSelect; // 0x58
		::System::UInt32 _InitSelectedEquipId; // 0x5C

		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* teamInfo, ::System::UInt32 initSelectedEquipId, ::System::Boolean isQuickSelect, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* slotInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*, ::System::UInt32, ::System::Boolean, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__CTOR_OFFSET))(this, teamInfo, initSelectedEquipId, isQuickSelect, slotInfo);
		}

		::System::Boolean get_IsQuickSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GET_ISQUICKSELECT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* get_SpEquipSlotInfo()
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GET_SPEQUIPSLOTINFO_OFFSET))(this);
		}

		::System::Int32 _SortAllEquips(::RPG::Client::ActivityIdleLive::SpecialEquip* l, ::RPG::Client::ActivityIdleLive::SpecialEquip* r)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__SORTALLEQUIPS_OFFSET))(this, l, r);
		}

		::System::Void _UpdateCurEquipStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA__UPDATECUREQUIPSTRATEGY_OFFSET))(this);
		}

		::System::Void UpdateProcessingEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_UPDATEPROCESSINGEQUIP_OFFSET))(this, equip);
		}

		::System::Void UpdateDisplayEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_UPDATEDISPLAYEQUIP_OFFSET))(this, equip);
		}

		::System::Boolean HasSelectedEquip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_HASSELECTEDEQUIP_OFFSET))(this);
		}

		::System::Void SelectEquip(::System::UInt32 spEquipId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_SELECTEQUIP_OFFSET))(this, spEquipId);
		}

		::System::Void PreviewEquip(::System::UInt32 spEquipId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_PREVIEWEQUIP_OFFSET))(this, spEquipId);
		}

		::System::Boolean IsEquipSelected(::System::UInt32 equipId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_ISEQUIPSELECTED_OFFSET))(this, equipId);
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

		::RPG::Client::ActivityIdleLive::SpEquipSlotData* GetSpEquipSlotDataByEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotData*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA_GETSPEQUIPSLOTDATABYEQUIP_OFFSET))(this, equip);
		}

		::System::Boolean __ctor_b__19_1(::RPG::Client::ActivityIdleLive::SpecialEquip* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___CTOR_B__19_1_OFFSET))(this, x);
		}

		::System::Boolean __GetStrongestEquipList_b__35_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___GETSTRONGESTEQUIPLIST_B__35_0_OFFSET))(this, x);
		}
	};
}
