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
class Class_1_A0F414D2CF643E56_4;
namespace RPG::GameCore { class IdleLiveEquipRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMQUESTEQUIP_OFFSET UNITYSDK_OFFSET(0x1C0DFD90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x1C0DF310)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_DEBUGADDAFFIX_OFFSET UNITYSDK_OFFSET(0x1C0E0D00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETAFFIXDATAS_OFFSET UNITYSDK_OFFSET(0x1C0E01F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEQUIPUIDATA_OFFSET UNITYSDK_OFFSET(0x1C0E0800)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEXTRAPOWER_OFFSET UNITYSDK_OFFSET(0x1C0DFFF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C0DF2F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C0DF1E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C0DF1C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C0DF200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITYDATA_OFFSET UNITYSDK_OFFSET(0x1C0DF260)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1C0DF1D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1C0DF220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SPECIALEQUIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0x1C0DF240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C0DF1A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_MERGEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C0E0240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C0DF300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C0DF1F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C0DF210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1C0DF230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SPECIALEQUIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0x1C0DF250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C0DF1B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C0E0E10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0DF8E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITAFFIXES_OFFSET UNITYSDK_OFFSET(0x1C0DFB70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITSPECIALEQUIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0x1C0DFD40)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveEquipmentData_TypeDefinitionIndex = 75030;

	class IdleLiveEquipmentData : public ::System::Object
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _LevelExtraPower; // 0x18
		::Struct_2_FF0A5E57FED058F6 _RarityData; // 0x30
		::Class_1_301EA7BDC3DA5B24* _SpecialEquipExtraData_k__BackingField; // 0x90
		::System::Collections::Generic::List_1<::Class_1_671780733A8844ED*>* _AffixDatas; // 0x98
		::System::UInt32 _Id_k__BackingField; // 0xA0
		::System::UInt32 _Level_k__BackingField; // 0xA4
		::RPG::Client::TextID _Position_k__BackingField; // 0xA8
		::System::UInt32 _Id; // 0xB8
		::RPG::Client::TextID _Title_k__BackingField; // 0xC0
		::System::UInt32 _Rarity_k__BackingField; // 0xD0
		::System::UInt32 _SlotIndex_k__BackingField; // 0xD4

		::System::Void _ctor(::RPG::GameCore::IdleLiveEquipRow* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveEquipRow*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_TITLE_OFFSET))(this, a1);
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

		::System::Void set_ImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_IMAGEPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Position()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_POSITION_OFFSET))(this, a1);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SLOTINDEX_OFFSET))(this, a1);
		}

		::Class_1_301EA7BDC3DA5B24* get_SpecialEquipExtraData()
		{
			return ((::Class_1_301EA7BDC3DA5B24*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SPECIALEQUIPEXTRADATA_OFFSET))(this);
		}

		::System::Void set_SpecialEquipExtraData(::Class_1_301EA7BDC3DA5B24* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_301EA7BDC3DA5B24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SPECIALEQUIPEXTRADATA_OFFSET))(this, a1);
		}

		::Struct_2_FF0A5E57FED058F6 get_RarityData()
		{
			return ((::Struct_2_FF0A5E57FED058F6(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITYDATA_OFFSET))(this);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_ID_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* CreateFromServer(::Class_1_A0F414D2CF643E56_4* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::Class_1_A0F414D2CF643E56_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMSERVER_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* CreateFromQuestEquip(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMQUESTEQUIP_OFFSET))(a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetExtraPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEXTRAPOWER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_671780733A8844ED*>* GetAffixDatas()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_671780733A8844ED*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETAFFIXDATAS_OFFSET))(this);
		}

		::System::Void _InitAffixes(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITAFFIXES_OFFSET))(this, a1);
		}

		::System::Void _InitSpecialEquipExtraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITSPECIALEQUIPEXTRADATA_OFFSET))(this);
		}

		::System::Void MergeProperty(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_MERGEPROPERTY_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::EquipUiData GetEquipUiData()
		{
			return ((::RPG::Client::ActivityIdleLive::EquipUiData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEQUIPUIDATA_OFFSET))(this);
		}

		::System::Void DebugAddAffix(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_DEBUGADDAFFIX_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_TOSTRING_OFFSET))(this);
		}
	};
}
