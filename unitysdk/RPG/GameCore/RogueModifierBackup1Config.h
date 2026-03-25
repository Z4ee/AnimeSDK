#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_METHOD_3_1CE7793880FC3100_OFFSET UNITYSDK_OFFSET(0x1761D360)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_METHOD_3_643164C5C21A97D9_OFFSET UNITYSDK_OFFSET(0x1761D430)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1761D3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierBackup1Config_TypeDefinitionIndex = 16539;

	class RogueModifierBackup1Config : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1CE7793880FC3100(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierBackup1Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierBackup1Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_METHOD_3_1CE7793880FC3100_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_643164C5C21A97D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierBackup1Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierBackup1Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_METHOD_3_643164C5C21A97D9_OFFSET))(a1, a2);
		}
	};
}
