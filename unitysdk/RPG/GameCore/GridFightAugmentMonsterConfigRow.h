#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTAUGMENTMONSTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189A2060)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTMONSTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189A21D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentMonsterConfigRow_TypeDefinitionIndex = 12678;

	class GridFightAugmentMonsterConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightAugmentQuality Quality; // 0x10
		::System::UInt32 EnemyDiffLvAdd; // 0x14
		::System::UInt32 DivisionLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTMONSTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTMONSTERCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
