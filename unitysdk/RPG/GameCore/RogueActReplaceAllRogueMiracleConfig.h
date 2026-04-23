#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG_METHOD_6_12B27854D381AF4A_OFFSET UNITYSDK_OFFSET(0x18CD3240)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG_METHOD_6_A9576DCE8E1A109F_OFFSET UNITYSDK_OFFSET(0x18CD3020)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD3160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceAllRogueMiracleConfig_TypeDefinitionIndex = 18648;

	class RogueActReplaceAllRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A9576DCE8E1A109F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG_METHOD_6_A9576DCE8E1A109F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_12B27854D381AF4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG_METHOD_6_12B27854D381AF4A_OFFSET))(a1, a2);
		}
	};
}
