#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFFEVERSKILLLEVELCONFIG_METHOD_2_00CA52A8CE793C54_OFFSET UNITYSDK_OFFSET(0x196DA9B0)
#define RPG_GAMECORE_ELFFEVERSKILLLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196DAB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfFeverSkillLevelConfig_TypeDefinitionIndex = 17555;

	class ElfFeverSkillLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 Combo; // 0x14
		::System::UInt32 AbilityID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFEVERSKILLLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_00CA52A8CE793C54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfFeverSkillLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfFeverSkillLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFEVERSKILLLEVELCONFIG_METHOD_2_00CA52A8CE793C54_OFFSET))(a1, a2);
		}
	};
}
