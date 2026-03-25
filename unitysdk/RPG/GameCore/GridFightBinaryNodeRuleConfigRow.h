#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTBINARYNODERULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17253E50)
#define RPG_GAMECORE_GRIDFIGHTBINARYNODERULECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17253FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBinaryNodeRuleConfigRow_TypeDefinitionIndex = 12453;

	class GridFightBinaryNodeRuleConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PerformLevel; // 0x10
		::System::UInt32 Quality; // 0x14
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBINARYNODERULECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightBinaryNodeRuleConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightBinaryNodeRuleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBINARYNODERULECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
