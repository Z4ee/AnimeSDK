#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_METHOD_6_C621A2D7ACC34EED_OFFSET UNITYSDK_OFFSET(0x1D3BAB90)
#define RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_METHOD_6_F71538413F0FF651_OFFSET UNITYSDK_OFFSET(0x1D3BABE0)
#define RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BABD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceAllFormulaAndBuffConfig_TypeDefinitionIndex = 19475;

	class RogueActReplaceAllFormulaAndBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C621A2D7ACC34EED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllFormulaAndBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllFormulaAndBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_METHOD_6_C621A2D7ACC34EED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F71538413F0FF651(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllFormulaAndBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllFormulaAndBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_METHOD_6_F71538413F0FF651_OFFSET))(a1, a2);
		}
	};
}
