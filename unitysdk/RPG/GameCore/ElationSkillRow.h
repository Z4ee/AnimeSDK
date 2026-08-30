#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELATIONSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D056730)
#define RPG_GAMECORE_ELATIONSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D056E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationSkillRow_TypeDefinitionIndex = 13113;

	class ElationSkillRow : public ::System::Object
	{
	public:
		::System::Int32 PriorityValue; // 0x10
		::System::UInt32 ElationSkillID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
