#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG_METHOD_6_4DE681D9872D319E_OFFSET UNITYSDK_OFFSET(0x1D02DD90)
#define RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG_METHOD_6_C498AC457DE1DD82_OFFSET UNITYSDK_OFFSET(0x1D02DD40)
#define RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02DD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetDestroyedRogueMiracleConfig_TypeDefinitionIndex = 18855;

	class RogueActGetDestroyedRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C498AC457DE1DD82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetDestroyedRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetDestroyedRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG_METHOD_6_C498AC457DE1DD82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4DE681D9872D319E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetDestroyedRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetDestroyedRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG_METHOD_6_4DE681D9872D319E_OFFSET))(a1, a2);
		}
	};
}
