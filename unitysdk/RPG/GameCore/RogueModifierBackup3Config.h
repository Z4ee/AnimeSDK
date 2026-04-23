#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERBACKUP3CONFIG_METHOD_3_3DEF903FC64AD94B_OFFSET UNITYSDK_OFFSET(0x18D2AE00)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP3CONFIG_METHOD_3_6384B8689F4D47F2_OFFSET UNITYSDK_OFFSET(0x18D2AD30)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP3CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D2ADB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierBackup3Config_TypeDefinitionIndex = 17095;

	class RogueModifierBackup3Config : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP3CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6384B8689F4D47F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierBackup3Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierBackup3Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP3CONFIG_METHOD_3_6384B8689F4D47F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3DEF903FC64AD94B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierBackup3Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierBackup3Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP3CONFIG_METHOD_3_3DEF903FC64AD94B_OFFSET))(a1, a2);
		}
	};
}
