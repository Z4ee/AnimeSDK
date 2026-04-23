#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"

class Class_1_1270DEE7CFE7E111_1;
class Class_1_50D7577ADBD39E1A;
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class GridFightBackendRoleEquipmentConfigRow; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class GridFightRoleBackendRankConfigRow; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xB5C96E0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_FULLEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xB5C8EE0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GETROLECONFIG_OFFSET UNITYSDK_OFFSET(0xB5C8DD0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GETTRAITLIST_OFFSET UNITYSDK_OFFSET(0xB5C8D40)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_ISBACKENDAVATAR_OFFSET UNITYSDK_OFFSET(0xB5B72D0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_POWER_GRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xB5C90F0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_PRESETLOCATION_OFFSET UNITYSDK_OFFSET(0xB5C9640)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_PRESET_OFFSET UNITYSDK_OFFSET(0xB5C9690)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_ROLEPRESETTYPE_OFFSET UNITYSDK_OFFSET(0xB5C8E50)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_HASEQUIP_OFFSET UNITYSDK_OFFSET(0xB5C8FA0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C98F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightAvatarData_TypeDefinitionIndex = 51880;

	class BattleGridFightAvatarData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* ActiveBackendRankList; // 0x10
		::Class_1_50D7577ADBD39E1A* AdditionalPropertyMap; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* NormalEquip; // 0x20
		::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow* ActiveBackendEquipmentConfig; // 0x28
		::RPG::GameCore::GridFightRoleConfigRow* _RoleRow; // 0x30
		::Class_1_1270DEE7CFE7E111_1* BattleExtInfo; // 0x38
		::RPG::GameCore::GridFightManager* MgrRef; // 0x40
		::System::UInt32 ID; // 0x48
		::System::UInt32 AvatarLocation; // 0x4C
		::RPG::GameCore::FixPoint Power_Equip; // 0x50
		::RPG::GameCore::FixPoint Power_Trait; // 0x58
		::RPG::GameCore::FixPoint Power_Quality; // 0x60
		::System::UInt32 AvatarID; // 0x68
		::System::UInt32 UniqueID; // 0x6C
		::System::UInt32 AvatarStar; // 0x70
		::RPG::GameCore::FixPoint Power_Star; // 0x78

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
