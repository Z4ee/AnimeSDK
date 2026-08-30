#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_METHOD_3_0488F5D6FCD2DA52_OFFSET UNITYSDK_OFFSET(0x1D0381B0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_METHOD_3_88DFFECF1381E3CE_OFFSET UNITYSDK_OFFSET(0x1D0380E0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0381A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerSpecialHint_TypeDefinitionIndex = 15869;

	class DiceCombatTaskConfig_TriggerSpecialHint : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::UInt32 SpecialHintID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_88DFFECF1381E3CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_METHOD_3_88DFFECF1381E3CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0488F5D6FCD2DA52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_METHOD_3_0488F5D6FCD2DA52_OFFSET))(a1, a2);
		}
	};
}
