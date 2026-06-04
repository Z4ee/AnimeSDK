#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"

class Class_1_1270DEE7CFE7E111_1;
class Class_1_57207EAD4239ED6B;
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class GridFightBackendRoleEquipmentConfigRow; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class GridFightRoleBackendRankConfigRow; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xCD2E900)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_FULLEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xCD2E4A0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GETROLECONFIG_OFFSET UNITYSDK_OFFSET(0xCD2E390)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GETTRAITLIST_OFFSET UNITYSDK_OFFSET(0xCD2E300)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_ISBACKENDAVATAR_OFFSET UNITYSDK_OFFSET(0xCD2E8A0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_POWER_GRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xCD2E700)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_PRESETLOCATION_OFFSET UNITYSDK_OFFSET(0xCD2E850)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_PRESET_OFFSET UNITYSDK_OFFSET(0xCD2E8B0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_ROLEPRESETTYPE_OFFSET UNITYSDK_OFFSET(0xCD2E410)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_HASEQUIP_OFFSET UNITYSDK_OFFSET(0xCD2E5E0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2EBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightAvatarData_TypeDefinitionIndex = 52554;

	class BattleGridFightAvatarData : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightManager* MgrRef; // 0x10
		::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow* ActiveBackendEquipmentConfig; // 0x18
		::RPG::GameCore::GridFightRoleConfigRow* _RoleRow; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* ActiveBackendRankList; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* NormalEquip; // 0x30
		::Class_1_57207EAD4239ED6B* AdditionalPropertyMap; // 0x38
		::Class_1_1270DEE7CFE7E111_1* BattleExtInfo; // 0x40
		::System::UInt32 AvatarID; // 0x48
		::System::UInt32 ID; // 0x4C
		::RPG::GameCore::FixPoint Power_Quality; // 0x50
		::System::UInt32 AvatarLocation; // 0x58
		::RPG::GameCore::FixPoint Power_Equip; // 0x60
		::System::UInt32 UniqueID; // 0x68
		::System::UInt32 AvatarStar; // 0x6C
		::RPG::GameCore::FixPoint Power_Star; // 0x70
		::RPG::GameCore::FixPoint Power_Trait; // 0x78

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

		::System::Void FullEquipList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_FULLEQUIPLIST_OFFSET))(this, a1);
		}

		::System::Boolean HasEquip(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_HASEQUIP_OFFSET))(this, a1);
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
