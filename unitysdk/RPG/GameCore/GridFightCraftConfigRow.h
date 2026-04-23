#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCRAFTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189A63B0)
#define RPG_GAMECORE_GRIDFIGHTCRAFTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189A6560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCraftConfigRow_TypeDefinitionIndex = 12727;

	class GridFightCraftConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CostEquipList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 CraftID; // 0x1C
		::System::UInt32 CraftEquipID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCRAFTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightCraftConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCraftConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCRAFTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
