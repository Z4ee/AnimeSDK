#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WAITSECOND_METHOD_3_96F9A548B6430D6B_OFFSET UNITYSDK_OFFSET(0x1D038320)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WAITSECOND_METHOD_3_C728DF25074401F7_OFFSET UNITYSDK_OFFSET(0x1D038240)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WAITSECOND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D038310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_WaitSecond_TypeDefinitionIndex = 15861;

	class DiceCombatTaskConfig_WaitSecond : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Single duration; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WAITSECOND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C728DF25074401F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WaitSecond*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WaitSecond*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WAITSECOND_METHOD_3_C728DF25074401F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_96F9A548B6430D6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WaitSecond* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WaitSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WAITSECOND_METHOD_3_96F9A548B6430D6B_OFFSET))(a1, a2);
		}
	};
}
