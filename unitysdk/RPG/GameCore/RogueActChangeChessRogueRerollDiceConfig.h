#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_METHOD_6_A33ADA3AFE242E23_OFFSET UNITYSDK_OFFSET(0x1D02D380)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_METHOD_6_C87BBED7639B24A7_OFFSET UNITYSDK_OFFSET(0x1D02D3D0)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02D3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeChessRogueRerollDiceConfig_TypeDefinitionIndex = 18883;

	class RogueActChangeChessRogueRerollDiceConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A33ADA3AFE242E23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueRerollDiceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueRerollDiceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_METHOD_6_A33ADA3AFE242E23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C87BBED7639B24A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueRerollDiceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueRerollDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_METHOD_6_C87BBED7639B24A7_OFFSET))(a1, a2);
		}
	};
}
