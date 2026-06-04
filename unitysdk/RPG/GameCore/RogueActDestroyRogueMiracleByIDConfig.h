#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLEBYIDCONFIG_METHOD_6_1E0CF8342FED2A33_OFFSET UNITYSDK_OFFSET(0x19AE4520)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLEBYIDCONFIG_METHOD_6_4EB64D5C8624F8A6_OFFSET UNITYSDK_OFFSET(0x19AE4300)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLEBYIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE4440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestroyRogueMiracleByIDConfig_TypeDefinitionIndex = 18614;

	class RogueActDestroyRogueMiracleByIDConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLEBYIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_4EB64D5C8624F8A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleByIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyRogueMiracleByIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLEBYIDCONFIG_METHOD_6_4EB64D5C8624F8A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_1E0CF8342FED2A33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleByIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyRogueMiracleByIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLEBYIDCONFIG_METHOD_6_1E0CF8342FED2A33_OFFSET))(a1, a2);
		}
	};
}
