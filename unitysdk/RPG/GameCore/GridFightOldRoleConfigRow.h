#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightChargeType.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTOLDROLECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE70AC0)
#define RPG_GAMECORE_GRIDFIGHTOLDROLECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE70E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightOldRoleConfigRow_TypeDefinitionIndex = 13457;

	class GridFightOldRoleConfigRow : public ::System::Object
	{
	public:
		::System::String* MaxSPIcon; // 0x10
		::Il2CppArray<::System::UInt32>* BackendRankList; // 0x18
		::Il2CppArray<::RPG::GameCore::GridFightChargeType>* ChargeType; // 0x20
		::Il2CppArray<::System::UInt32>* TraitList; // 0x28
		::System::UInt32 AvatarID; // 0x30
		::RPG::GameCore::GridFightPreset FrontBackType; // 0x34
		::System::UInt32 Rarity; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::UInt32 SpecialAvatarID; // 0x40
		::System::UInt32 ExistSeason; // 0x44
		::System::UInt32 EquipmentID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTOLDROLECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightOldRoleConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightOldRoleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTOLDROLECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
