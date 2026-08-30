#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMONSTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE70130)
#define RPG_GAMECORE_GRIDFIGHTMONSTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE70350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightMonsterConfigRow_TypeDefinitionIndex = 13522;

	class GridFightMonsterConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Star4EliteGroup3; // 0x10
		::System::UInt32 Star2EliteGroup3; // 0x14
		::System::UInt32 Star3EliteGroup3; // 0x18
		::System::UInt32 MonsterID; // 0x1C
		::System::UInt32 MonsterTier; // 0x20
		::System::UInt32 Star1EliteGroup3; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMONSTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightMonsterConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightMonsterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMONSTERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
