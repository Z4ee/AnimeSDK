#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG_METHOD_6_12B27854D381AF4A_OFFSET UNITYSDK_OFFSET(0x1EE88B50)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG_METHOD_6_DE4512166C34590E_OFFSET UNITYSDK_OFFSET(0x1EE88B00)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE88B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceAllRogueMiracleConfig_TypeDefinitionIndex = 19418;

	class RogueActReplaceAllRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DE4512166C34590E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG_METHOD_6_DE4512166C34590E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_12B27854D381AF4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG_METHOD_6_12B27854D381AF4A_OFFSET))(a1, a2);
		}
	};
}
