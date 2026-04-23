#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/Struct_2_FF0A5E57FED058F6.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_301EA7BDC3DA5B24;
class Class_1_671780733A8844ED;
class Class_1_A0F414D2CF643E56;
namespace RPG::GameCore { class IdleLiveEquipRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMQUESTEQUIP_OFFSET UNITYSDK_OFFSET(0x9B53D10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x9B53420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_DEBUGADDAFFIX_OFFSET UNITYSDK_OFFSET(0x9B54A80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETAFFIXDATAS_OFFSET UNITYSDK_OFFSET(0x9B54100)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEQUIPUIDATA_OFFSET UNITYSDK_OFFSET(0x9B54700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEXTRAPOWER_OFFSET UNITYSDK_OFFSET(0x9B53F40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9B53400)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9B53340)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9B53320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9B53360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITYDATA_OFFSET UNITYSDK_OFFSET(0x9B533C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x9B53330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9B53380)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SPECIALEQUIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0x9B533A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9B53300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_MERGEPROPERTY_OFFSET UNITYSDK_OFFSET(0x9B54140)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9B53410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9B53350)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9B53370)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9B53390)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SPECIALEQUIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0x9B533B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x9B53310)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B54B30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B538A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITAFFIXES_OFFSET UNITYSDK_OFFSET(0x9B53B30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITSPECIALEQUIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0x9B53CC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B54BA0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveEquipmentData_TypeDefinitionIndex = 69389;

	class IdleLiveEquipmentData : public ::System::Object
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _LevelExtraPower; // 0x18
		::System::Collections::Generic::List_1<::Class_1_671780733A8844ED*>* _AffixDatas; // 0x30
		::Class_1_301EA7BDC3DA5B24* _SpecialEquipExtraData_k__BackingField; // 0x38
		::Struct_2_FF0A5E57FED058F6 _RarityData; // 0x40
		::System::UInt32 _SlotIndex_k__BackingField; // 0xA0
		::System::UInt32 _Level_k__BackingField; // 0xA4
		::System::UInt32 _Id; // 0xA8
		::RPG::Client::TextID _Position_k__BackingField; // 0xB0
		::RPG::Client::TextID _Title_k__BackingField; // 0xC0
		::System::UInt32 _Id_k__BackingField; // 0xD0
		::System::UInt32 _Rarity_k__BackingField; // 0xD4

		::System::Void _ctor(::RPG::GameCore::IdleLiveEquipRow* row, ::System::UInt32 level, ::System::UInt32 rarity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveEquipRow*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__CTOR_OFFSET))(this, row, level, rarity);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_TITLE_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITY_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_IMAGEPATH_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Position()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_POSITION_OFFSET))(this, value);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SLOTINDEX_OFFSET))(this, value);
		}

		::Class_1_301EA7BDC3DA5B24* get_SpecialEquipExtraData()
		{
			return ((::Class_1_301EA7BDC3DA5B24*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SPECIALEQUIPEXTRADATA_OFFSET))(this);
		}

		::System::Void set_SpecialEquipExtraData(::Class_1_301EA7BDC3DA5B24* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_301EA7BDC3DA5B24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SPECIALEQUIPEXTRADATA_OFFSET))(this, value);
		}

		::Struct_2_FF0A5E57FED058F6 get_RarityData()
		{
			return ((::Struct_2_FF0A5E57FED058F6(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITYDATA_OFFSET))(this);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_ID_OFFSET))(this, value);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* CreateFromServer(::Class_1_A0F414D2CF643E56* protoEquip)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::Class_1_A0F414D2CF643E56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMSERVER_OFFSET))(protoEquip);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* CreateFromQuestEquip(::System::UInt32 questID)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMQUESTEQUIP_OFFSET))(questID);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetExtraPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEXTRAPOWER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_671780733A8844ED*>* GetAffixDatas()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_671780733A8844ED*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETAFFIXDATAS_OFFSET))(this);
		}

		::System::Void _InitAffixes(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* affixes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITAFFIXES_OFFSET))(this, affixes);
		}

		::System::Void _InitSpecialEquipExtraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITSPECIALEQUIPEXTRADATA_OFFSET))(this);
		}

		::System::Void MergeProperty(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*& dic)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_MERGEPROPERTY_OFFSET))(this, dic);
		}

		::RPG::Client::ActivityIdleLive::EquipUiData GetEquipUiData()
		{
			return ((::RPG::Client::ActivityIdleLive::EquipUiData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEQUIPUIDATA_OFFSET))(this);
		}

		::System::Void DebugAddAffix(::System::UInt32 affixId, ::System::UInt32 affixQuantizeValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_DEBUGADDAFFIX_OFFSET))(this, affixId, affixQuantizeValue);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
