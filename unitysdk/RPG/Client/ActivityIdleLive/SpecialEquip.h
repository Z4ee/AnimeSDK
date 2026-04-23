#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_FF0A5E57FED058F6.h"
#include "unitysdk/System/Object.h"

class Class_1_13B35D9264EBE906;
class Class_1_2B7C9DBFAA4300DE;
class Class_1_671780733A8844ED;
class Class_1_A0F414D2CF643E56;
namespace RPG::GameCore { class IdleLiveSpEquipRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x9BDC5C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CREATE_OFFSET UNITYSDK_OFFSET(0x9BE36E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETEQUIPUIDATA_OFFSET UNITYSDK_OFFSET(0x9BE32C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETEXTRAPOWER_OFFSET UNITYSDK_OFFSET(0x9BE3A40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETPOWERFACTOR_OFFSET UNITYSDK_OFFSET(0x9BE3650)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETRARITYICON_OFFSET UNITYSDK_OFFSET(0x9BE3610)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETSPECIALEQUIPSKILL_OFFSET UNITYSDK_OFFSET(0x9BE3690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_AFFIXES_OFFSET UNITYSDK_OFFSET(0x9BE32B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_ID_OFFSET UNITYSDK_OFFSET(0x9BE3240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9BE32A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x9BE3250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9BE3290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__CTOR_OFFSET UNITYSDK_OFFSET(0x9BE37A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__INITAFFIXES_OFFSET UNITYSDK_OFFSET(0x9BE3BD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__INITSPECIALSKILL_OFFSET UNITYSDK_OFFSET(0x9BE3DD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpecialEquip_TypeDefinitionIndex = 69303;

	class SpecialEquip : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::Collections::Generic::List_1<::Class_1_671780733A8844ED*>* _Affixes; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _LevelExtraPower; // 0x20
		::Struct_2_FF0A5E57FED058F6 _RarityData; // 0x38
		::Class_1_13B35D9264EBE906* _SpecialEquipSkill; // 0x98
		::RPG::Client::TextID _PosText; // 0xA0
		::RPG::Client::TextID _Title_k__BackingField; // 0xB0
		::System::UInt32 _Id; // 0xC0
		::System::UInt32 _Level_k__BackingField; // 0xC4

		::System::Void _ctor(::RPG::GameCore::IdleLiveSpEquipRow* row, ::System::UInt32 level, ::System::UInt32 rarity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSpEquipRow*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__CTOR_OFFSET))(this, row, level, rarity);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_TITLE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_671780733A8844ED*>* get_Affixes()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_671780733A8844ED*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_AFFIXES_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::EquipUiData GetEquipUiData()
		{
			return ((::RPG::Client::ActivityIdleLive::EquipUiData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETEQUIPUIDATA_OFFSET))(this);
		}

		::System::String* GetRarityIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETRARITYICON_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetPowerFactor()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETPOWERFACTOR_OFFSET))(this);
		}

		::Class_1_13B35D9264EBE906* GetSpecialEquipSkill()
		{
			return ((::Class_1_13B35D9264EBE906*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETSPECIALEQUIPSKILL_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::SpecialEquip* CreateFromServer(::Class_1_A0F414D2CF643E56* protoEquip)
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::Class_1_A0F414D2CF643E56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CREATEFROMSERVER_OFFSET))(protoEquip);
		}

		static ::RPG::Client::ActivityIdleLive::SpecialEquip* Create(::System::UInt32 spEquipId, ::System::UInt32 level, ::System::UInt32 rarity)
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CREATE_OFFSET))(spEquipId, level, rarity);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetExtraPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETEXTRAPOWER_OFFSET))(this);
		}

		::System::Void _InitAffixes(::Class_1_2B7C9DBFAA4300DE* attackParam, ::Class_1_2B7C9DBFAA4300DE* defenseParam, ::Class_1_2B7C9DBFAA4300DE* hpParam)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2B7C9DBFAA4300DE*, ::Class_1_2B7C9DBFAA4300DE*, ::Class_1_2B7C9DBFAA4300DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__INITAFFIXES_OFFSET))(this, attackParam, defenseParam, hpParam);
		}

		::System::Void _InitSpecialSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__INITSPECIALSKILL_OFFSET))(this);
		}
	};
}
