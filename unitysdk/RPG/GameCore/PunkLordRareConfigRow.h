#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PunkLordGroupType.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PUNKLORDRARECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C7E6F0)
#define RPG_GAMECORE_PUNKLORDRARECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7E870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PunkLordRareConfigRow_TypeDefinitionIndex = 11632;

	class PunkLordRareConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::PunkLordGroupType GroupType; // 0x10
		::RPG::GameCore::PunkLordMonsterRare MonsterRare; // 0x14
		::System::UInt32 Weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDRARECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PunkLordRareConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PunkLordRareConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDRARECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
