#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightChargeType.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1727E4D0)
#define RPG_GAMECORE_GRIDFIGHTROLECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1727EA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleConfigRow_TypeDefinitionIndex = 12330;

	class GridFightRoleConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SeasonIDList; // 0x10
		::Il2CppArray<::System::UInt32>* TraitList; // 0x18
		::Il2CppArray<::System::String*>* RoleSavedValueList; // 0x20
		::Il2CppArray<::RPG::GameCore::GridFightChargeType>* ChargeType; // 0x28
		::Il2CppArray<::System::UInt32>* BackendRankList; // 0x30
		::System::String* MaxSPIcon; // 0x38
		::RPG::GameCore::GridFightPreset FrontBackType; // 0x40
		::System::UInt32 Rarity; // 0x44
		::System::UInt32 EquipmentID; // 0x48
		::System::UInt32 ID; // 0x4C
		::System::UInt32 SpecialAvatarID; // 0x50
		::System::Boolean IsInPool; // 0x54
		::System::UInt32 IsExpert; // 0x58
		::System::UInt32 AvatarID; // 0x5C
		::System::UInt32 SeasonID; // 0x60
		::RPG::GameCore::GridFightRoleSkillTag HealOrShieldDisplay; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightRoleConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
