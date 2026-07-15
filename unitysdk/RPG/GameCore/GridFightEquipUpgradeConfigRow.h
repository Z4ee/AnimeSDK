#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5CA6E0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CAC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipUpgradeConfigRow_TypeDefinitionIndex = 12957;

	class GridFightEquipUpgradeConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PreID; // 0x10
		::System::UInt32 UpgradeID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
