#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITEQUIPRELATIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3BEDF0)
#define RPG_GAMECORE_GRIDFIGHTTRAITEQUIPRELATIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BEF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitEquipRelationConfigRow_TypeDefinitionIndex = 13360;

	class GridFightTraitEquipRelationConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TraitEquipIDList; // 0x10
		::System::UInt32 EquipID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEQUIPRELATIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightTraitEquipRelationConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitEquipRelationConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEQUIPRELATIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
