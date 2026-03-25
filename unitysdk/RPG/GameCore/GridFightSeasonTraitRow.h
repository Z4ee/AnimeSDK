#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSEASONTRAITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17282360)
#define RPG_GAMECORE_GRIDFIGHTSEASONTRAITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17282550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonTraitRow_TypeDefinitionIndex = 12417;

	class GridFightSeasonTraitRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::Il2CppArray<::System::UInt32>* StandardQuestList; // 0x18
		::System::UInt32 Priority; // 0x20
		::System::UInt32 SeasonID; // 0x24
		::System::UInt32 TraitID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONTRAITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSeasonTraitRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSeasonTraitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONTRAITROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
