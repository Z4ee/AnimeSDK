#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITBONUSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DC5B0)
#define RPG_GAMECORE_GRIDFIGHTTRAITBONUSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189DC7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitBonusConfigRow_TypeDefinitionIndex = 12950;

	class GridFightTraitBonusConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* TraitBonusParamList; // 0x10
		::Il2CppArray<::System::UInt32>* BonusParamList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 BonusThreshold; // 0x24
		::RPG::GameCore::GridFightTraitBonusType BonusType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBONUSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitBonusConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitBonusConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBONUSCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
