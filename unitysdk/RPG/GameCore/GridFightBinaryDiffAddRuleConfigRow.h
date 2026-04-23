#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTBINARYDIFFADDRULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189A34D0)
#define RPG_GAMECORE_GRIDFIGHTBINARYDIFFADDRULECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189A3640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBinaryDiffAddRuleConfigRow_TypeDefinitionIndex = 12880;

	class GridFightBinaryDiffAddRuleConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 Quality; // 0x14
		::System::UInt32 EnemyDifficultyAddValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBINARYDIFFADDRULECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBINARYDIFFADDRULECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
