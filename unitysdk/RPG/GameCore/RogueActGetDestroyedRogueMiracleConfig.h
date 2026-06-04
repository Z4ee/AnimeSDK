#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG_METHOD_6_4DE681D9872D319E_OFFSET UNITYSDK_OFFSET(0x19AE5B00)
#define RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG_METHOD_6_963EB111FB2F4A1B_OFFSET UNITYSDK_OFFSET(0x19AE58E0)
#define RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE5A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetDestroyedRogueMiracleConfig_TypeDefinitionIndex = 18579;

	class RogueActGetDestroyedRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_963EB111FB2F4A1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetDestroyedRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetDestroyedRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG_METHOD_6_963EB111FB2F4A1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4DE681D9872D319E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetDestroyedRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetDestroyedRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG_METHOD_6_4DE681D9872D319E_OFFSET))(a1, a2);
		}
	};
}
