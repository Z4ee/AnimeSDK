#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDCURRENTTURNMAXROLLCOUNT_METHOD_3_4655EAEEDFF3E1F0_OFFSET UNITYSDK_OFFSET(0x188750B0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDCURRENTTURNMAXROLLCOUNT_METHOD_3_C4DF1EBE22527468_OFFSET UNITYSDK_OFFSET(0x1887B6A0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDCURRENTTURNMAXROLLCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x18875060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AddCurrentTurnMaxRollCount_TypeDefinitionIndex = 15259;

	class DiceCombatTaskConfig_AddCurrentTurnMaxRollCount : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::RPG::GameCore::DynamicFloat* Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDCURRENTTURNMAXROLLCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4DF1EBE22527468(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDCURRENTTURNMAXROLLCOUNT_METHOD_3_C4DF1EBE22527468_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4655EAEEDFF3E1F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDCURRENTTURNMAXROLLCOUNT_METHOD_3_4655EAEEDFF3E1F0_OFFSET))(a1, a2);
		}
	};
}
