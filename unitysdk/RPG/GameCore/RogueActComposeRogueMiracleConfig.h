#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCOMPOSEROGUEMIRACLECONFIG_METHOD_6_8603599A22677009_OFFSET UNITYSDK_OFFSET(0x1D3B7140)
#define RPG_GAMECORE_ROGUEACTCOMPOSEROGUEMIRACLECONFIG_METHOD_6_E8AD5CB2D55BE685_OFFSET UNITYSDK_OFFSET(0x1D3B70F0)
#define RPG_GAMECORE_ROGUEACTCOMPOSEROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B7130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActComposeRogueMiracleConfig_TypeDefinitionIndex = 19437;

	class RogueActComposeRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCOMPOSEROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E8AD5CB2D55BE685(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActComposeRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActComposeRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCOMPOSEROGUEMIRACLECONFIG_METHOD_6_E8AD5CB2D55BE685_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8603599A22677009(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActComposeRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActComposeRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCOMPOSEROGUEMIRACLECONFIG_METHOD_6_8603599A22677009_OFFSET))(a1, a2);
		}
	};
}
