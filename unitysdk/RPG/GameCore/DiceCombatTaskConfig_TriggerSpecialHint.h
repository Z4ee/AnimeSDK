#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_METHOD_3_0488F5D6FCD2DA52_OFFSET UNITYSDK_OFFSET(0x1716F070)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_METHOD_3_BA11211A09ED8D10_OFFSET UNITYSDK_OFFSET(0x17171890)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1716F020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerSpecialHint_TypeDefinitionIndex = 14736;

	class DiceCombatTaskConfig_TriggerSpecialHint : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::UInt32 SpecialHintID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BA11211A09ED8D10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_METHOD_3_BA11211A09ED8D10_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0488F5D6FCD2DA52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_METHOD_3_0488F5D6FCD2DA52_OFFSET))(a1, a2);
		}
	};
}
