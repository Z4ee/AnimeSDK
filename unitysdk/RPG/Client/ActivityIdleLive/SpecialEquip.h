#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_96EEB24CE61ED01A.h"
#include "unitysdk/System/Object.h"

class Class_1_13B35D9264EBE906;
class Class_1_2B7C9DBFAA4300DE;
class Class_1_671780733A8844ED;
class Class_1_FD33BD99AA9127F3;
namespace RPG::GameCore { class IdleLiveSpEquipRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xB1783E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CREATE_OFFSET UNITYSDK_OFFSET(0xB17F9A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETEQUIPUIDATA_OFFSET UNITYSDK_OFFSET(0xB17F570)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETEXTRAPOWER_OFFSET UNITYSDK_OFFSET(0xB17FD00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETPOWERFACTOR_OFFSET UNITYSDK_OFFSET(0xB162E80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETRARITYICON_OFFSET UNITYSDK_OFFSET(0xB17F920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETSPECIALEQUIPSKILL_OFFSET UNITYSDK_OFFSET(0xB17F960)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_AFFIXES_OFFSET UNITYSDK_OFFSET(0xB17F560)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_ID_OFFSET UNITYSDK_OFFSET(0xB17F4F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB17F550)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB17F500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xB17F540)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB17FA60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__INITAFFIXES_OFFSET UNITYSDK_OFFSET(0xB17FE90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__INITSPECIALSKILL_OFFSET UNITYSDK_OFFSET(0xB180190)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpecialEquip_TypeDefinitionIndex = 70115;

	class SpecialEquip : public ::System::Object
	{
	public:
		::Class_1_13B35D9264EBE906* _SpecialEquipSkill; // 0x10
		::System::String* IconPath; // 0x18
		::Struct_2_96EEB24CE61ED01A _RarityData; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _LevelExtraPower; // 0x80
		::System::Collections::Generic::List_1<::Class_1_671780733A8844ED*>* _Affixes; // 0x98
		::System::UInt32 _Id; // 0xA0
		::System::UInt32 _Level_k__BackingField; // 0xA4
		::RPG::Client::TextID _Title_k__BackingField; // 0xA8
		::RPG::Client::TextID _PosText; // 0xB8

		::System::Void _ctor(::RPG::GameCore::IdleLiveSpEquipRow* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSpEquipRow*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__CTOR_OFFSET))(this, a1, a2, a3);
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

		static ::RPG::Client::ActivityIdleLive::SpecialEquip* CreateFromServer(::Class_1_FD33BD99AA9127F3* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::Class_1_FD33BD99AA9127F3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CREATEFROMSERVER_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityIdleLive::SpecialEquip* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CREATE_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetExtraPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETEXTRAPOWER_OFFSET))(this);
		}

		::System::Void _InitAffixes(::Class_1_2B7C9DBFAA4300DE* a1, ::Class_1_2B7C9DBFAA4300DE* a2, ::Class_1_2B7C9DBFAA4300DE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2B7C9DBFAA4300DE*, ::Class_1_2B7C9DBFAA4300DE*, ::Class_1_2B7C9DBFAA4300DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__INITAFFIXES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InitSpecialSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__INITSPECIALSKILL_OFFSET))(this);
		}
	};
}
