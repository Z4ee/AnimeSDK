#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19804A00)
#define RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19804BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleAutoWeightConfigRow_TypeDefinitionIndex = 12890;

	class GridFightRoleAutoWeightConfigRow : public ::System::Object
	{
	public:
		::System::Boolean IsDamageEnhancedByEquip; // 0x10
		::System::UInt32 RoleID; // 0x14
		::RPG::GameCore::FixPoint OverWriteDamageCarry; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleAutoWeightConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleAutoWeightConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
