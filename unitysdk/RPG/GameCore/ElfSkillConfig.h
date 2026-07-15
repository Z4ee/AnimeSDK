#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfFeverSkillConfig; }
namespace RPG::GameCore { class ElfLeaderSkillConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELFSKILLCONFIG_METHOD_2_ED4267DBF9754373_OFFSET UNITYSDK_OFFSET(0x1BB38C80)
#define RPG_GAMECORE_ELFSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB39750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSkillConfig_TypeDefinitionIndex = 17726;

	class ElfSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EatSpeedUpEffectPath; // 0x10
		::System::String* MoveSpeedUpEffectPath; // 0x18
		::System::String* LeaderSkillEffectPath; // 0x20
		::RPG::GameCore::ElfFeverSkillConfig* FeverSkillConfig; // 0x28
		::RPG::GameCore::ElfLeaderSkillConfig* LeaderSkillConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ED4267DBF9754373(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSKILLCONFIG_METHOD_2_ED4267DBF9754373_OFFSET))(a1, a2);
		}
	};
}
