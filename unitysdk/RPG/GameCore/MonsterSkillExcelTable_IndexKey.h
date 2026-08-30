#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x860DE0)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19050)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x860D40)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterSkillExcelTable_IndexKey_TypeDefinitionIndex = 14081;

	struct alignas(4) MonsterSkillExcelTable_IndexKey
	{
		::System::UInt32 SkillID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::MonsterSkillExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
