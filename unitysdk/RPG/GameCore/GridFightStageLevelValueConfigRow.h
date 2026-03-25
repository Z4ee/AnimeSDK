#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSTAGELEVELVALUECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172852C0)
#define RPG_GAMECORE_GRIDFIGHTSTAGELEVELVALUECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17285430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightStageLevelValueConfigRow_TypeDefinitionIndex = 12457;

	class GridFightStageLevelValueConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 StageID; // 0x10
		::System::UInt32 LevelBaseHP; // 0x14
		::System::UInt32 LevelBaseAttack; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGELEVELVALUECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightStageLevelValueConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightStageLevelValueConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGELEVELVALUECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
