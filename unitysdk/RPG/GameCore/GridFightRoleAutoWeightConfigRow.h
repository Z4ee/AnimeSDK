#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1727D570)
#define RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1727D750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleAutoWeightConfigRow_TypeDefinitionIndex = 12370;

	class GridFightRoleAutoWeightConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint OverWriteDamageCarry; // 0x10
		::System::UInt32 RoleID; // 0x18
		::System::Boolean IsDamageEnhancedByEquip; // 0x1C

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
