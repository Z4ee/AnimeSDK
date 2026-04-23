#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189D17D0)
#define RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189D19B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleAutoWeightConfigRow_TypeDefinitionIndex = 12803;

	class GridFightRoleAutoWeightConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RoleID; // 0x10
		::System::Boolean IsDamageEnhancedByEquip; // 0x14
		::RPG::GameCore::FixPoint OverWriteDamageCarry; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightRoleAutoWeightConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleAutoWeightConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
