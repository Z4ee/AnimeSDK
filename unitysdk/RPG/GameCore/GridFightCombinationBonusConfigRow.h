#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCOMBINATIONBONUSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172545D0)
#define RPG_GAMECORE_GRIDFIGHTCOMBINATIONBONUSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17254770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCombinationBonusConfigRow_TypeDefinitionIndex = 12262;

	class GridFightCombinationBonusConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CombinationBonusList; // 0x10
		::Il2CppArray<::System::UInt32>* BonusNumberList; // 0x18
		::System::UInt32 BonusID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCOMBINATIONBONUSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightCombinationBonusConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCombinationBonusConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCOMBINATIONBONUSCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
