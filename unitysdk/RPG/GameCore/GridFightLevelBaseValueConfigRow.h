#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTLEVELBASEVALUECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D157010)
#define RPG_GAMECORE_GRIDFIGHTLEVELBASEVALUECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1571C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightLevelBaseValueConfigRow_TypeDefinitionIndex = 13518;

	class GridFightLevelBaseValueConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SectionID; // 0x10
		::System::UInt32 LevelBaseHP; // 0x14
		::System::UInt32 LevelBaseAttack; // 0x18
		::System::UInt32 ChapterID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTLEVELBASEVALUECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightLevelBaseValueConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightLevelBaseValueConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTLEVELBASEVALUECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
