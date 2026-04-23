#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CHANGELIMITEDDICEAVAILABLECOUNT_METHOD_3_2D6D27D628091CAE_OFFSET UNITYSDK_OFFSET(0x1887BFB0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CHANGELIMITEDDICEAVAILABLECOUNT_METHOD_3_8983F3BEEE3F5F12_OFFSET UNITYSDK_OFFSET(0x18876320)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CHANGELIMITEDDICEAVAILABLECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x188762D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount_TypeDefinitionIndex = 15258;

	class DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CHANGELIMITEDDICEAVAILABLECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D6D27D628091CAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CHANGELIMITEDDICEAVAILABLECOUNT_METHOD_3_2D6D27D628091CAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8983F3BEEE3F5F12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CHANGELIMITEDDICEAVAILABLECOUNT_METHOD_3_8983F3BEEE3F5F12_OFFSET))(a1, a2);
		}
	};
}
