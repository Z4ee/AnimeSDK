#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERBACKUP2CONFIG_METHOD_3_AA445D100752BF88_OFFSET UNITYSDK_OFFSET(0x1761D510)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP2CONFIG_METHOD_3_ED530A6182F824F1_OFFSET UNITYSDK_OFFSET(0x1761D440)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP2CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1761D4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierBackup2Config_TypeDefinitionIndex = 16540;

	class RogueModifierBackup2Config : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP2CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED530A6182F824F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierBackup2Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierBackup2Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP2CONFIG_METHOD_3_ED530A6182F824F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA445D100752BF88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierBackup2Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP2CONFIG_METHOD_3_AA445D100752BF88_OFFSET))(a1, a2);
		}
	};
}
