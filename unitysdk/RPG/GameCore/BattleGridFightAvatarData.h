#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"

class Class_1_50D7577ADBD39E1A;
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class GridFightBackendRoleEquipmentConfigRow; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class GridFightRoleBackendRankConfigRow; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xA884910)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_FULLEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xA884160)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GETROLECONFIG_OFFSET UNITYSDK_OFFSET(0xA884050)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GETTRAITLIST_OFFSET UNITYSDK_OFFSET(0xA883FC0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_ISBACKENDAVATAR_OFFSET UNITYSDK_OFFSET(0xA874870)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_POWER_GRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xA884370)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_PRESETLOCATION_OFFSET UNITYSDK_OFFSET(0xA8848C0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_PRESET_OFFSET UNITYSDK_OFFSET(0xA86B370)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_ROLEPRESETTYPE_OFFSET UNITYSDK_OFFSET(0xA8840D0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_HASEQUIP_OFFSET UNITYSDK_OFFSET(0xA884220)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA884AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightAvatarData_TypeDefinitionIndex = 45123;

	class BattleGridFightAvatarData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* ActiveBackendRankList; // 0x10
		::RPG::GameCore::GridFightManager* MgrRef; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* NormalEquip; // 0x20
		::Class_1_50D7577ADBD39E1A* AdditionalPropertyMap; // 0x28
		::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow* ActiveBackendEquipmentConfig; // 0x30
		::RPG::GameCore::GridFightRoleConfigRow* _RoleRow; // 0x38
		::RPG::GameCore::FixPoint Power_Trait; // 0x40
		::System::UInt32 AvatarLocation; // 0x48
		::System::UInt32 UniqueID; // 0x4C
		::System::UInt32 AvatarStar; // 0x50
		::System::UInt32 AvatarID; // 0x54
		::System::UInt32 ID; // 0x58
		::RPG::GameCore::FixPoint Power_Equip; // 0x60
		::RPG::GameCore::FixPoint Power_Quality; // 0x68
		::RPG::GameCore::FixPoint Power_Star; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetTraitList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GETTRAITLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightRoleConfigRow* GetRoleConfig()
		{
			return ((::RPG::GameCore::GridFightRoleConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GETROLECONFIG_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_RolePresetType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_ROLEPRESETTYPE_OFFSET))(this);
		}

		::System::Void FullEquipList(::System::Collections::Generic::List_1<::System::UInt32>* equipList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_FULLEQUIPLIST_OFFSET))(this, equipList);
		}

		::System::Boolean HasEquip(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_HASEQUIP_OFFSET))(this, id);
		}

		::RPG::GameCore::FixPoint get_Power_GridFight()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_POWER_GRIDFIGHT_OFFSET))(this);
		}

		::System::UInt32 get_PresetLocation()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_PRESETLOCATION_OFFSET))(this);
		}

		::System::Boolean get_IsBackendAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_ISBACKENDAVATAR_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_Preset()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_PRESET_OFFSET))(this);
		}

		::RPG::GameCore::BattleGridFightAvatarData* DeepClone()
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_DEEPCLONE_OFFSET))(this);
		}
	};
}
