#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTBINARYDIFFADDRULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D962270)
#define RPG_GAMECORE_GRIDFIGHTBINARYDIFFADDRULECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9623E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBinaryDiffAddRuleConfigRow_TypeDefinitionIndex = 13504;

	class GridFightBinaryDiffAddRuleConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 EnemyDifficultyAddValue; // 0x14
		::System::UInt32 Quality; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBINARYDIFFADDRULECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBINARYDIFFADDRULECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
