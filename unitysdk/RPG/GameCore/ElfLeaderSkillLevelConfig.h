#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFLEADERSKILLLEVELCONFIG_METHOD_2_164F0CB4CFB31A99_OFFSET UNITYSDK_OFFSET(0x196DB1C0)
#define RPG_GAMECORE_ELFLEADERSKILLLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196DB3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfLeaderSkillLevelConfig_TypeDefinitionIndex = 17557;

	class ElfLeaderSkillLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 MaxUse; // 0x14
		::System::Single Duration; // 0x18
		::System::Single CD; // 0x1C
		::System::UInt32 AbilityID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFLEADERSKILLLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_164F0CB4CFB31A99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfLeaderSkillLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfLeaderSkillLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFLEADERSKILLLEVELCONFIG_METHOD_2_164F0CB4CFB31A99_OFFSET))(a1, a2);
		}
	};
}
