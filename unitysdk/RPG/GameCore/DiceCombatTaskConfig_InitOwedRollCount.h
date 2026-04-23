#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITOWEDROLLCOUNT_METHOD_3_A106B38CB3AFE0BE_OFFSET UNITYSDK_OFFSET(0x18877310)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITOWEDROLLCOUNT_METHOD_3_D0C56F91C6813346_OFFSET UNITYSDK_OFFSET(0x1887C4B0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITOWEDROLLCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x188772C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_InitOwedRollCount_TypeDefinitionIndex = 15220;

	class DiceCombatTaskConfig_InitOwedRollCount : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MaxOwedRollCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITOWEDROLLCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0C56F91C6813346(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITOWEDROLLCOUNT_METHOD_3_D0C56F91C6813346_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A106B38CB3AFE0BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITOWEDROLLCOUNT_METHOD_3_A106B38CB3AFE0BE_OFFSET))(a1, a2);
		}
	};
}
