#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEALLROGUEMIRACLECONFIG_METHOD_6_6A9B5DAA87A90776_OFFSET UNITYSDK_OFFSET(0x1C49D780)
#define RPG_GAMECORE_ROGUEACTREMOVEALLROGUEMIRACLECONFIG_METHOD_6_74D79F41CFC8B1D2_OFFSET UNITYSDK_OFFSET(0x1C49D7D0)
#define RPG_GAMECORE_ROGUEACTREMOVEALLROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49D7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveAllRogueMiracleConfig_TypeDefinitionIndex = 18909;

	class RogueActRemoveAllRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEALLROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6A9B5DAA87A90776(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveAllRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveAllRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEALLROGUEMIRACLECONFIG_METHOD_6_6A9B5DAA87A90776_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_74D79F41CFC8B1D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveAllRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveAllRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEALLROGUEMIRACLECONFIG_METHOD_6_74D79F41CFC8B1D2_OFFSET))(a1, a2);
		}
	};
}
