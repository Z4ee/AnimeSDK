#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_UNION_METHOD_3_B49B3025F5ED2613_OFFSET UNITYSDK_OFFSET(0x1D02C4A0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_UNION_METHOD_3_C8FF7988C5507851_OFFSET UNITYSDK_OFFSET(0x1D02D0E0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_UNION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02C490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Union_TypeDefinitionIndex = 15978;

	class DiceCombatDiceSelectorConfig_Union : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig* selector1; // 0x10
		::RPG::GameCore::DiceCombatDiceSelectorConfig* selector2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_UNION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C8FF7988C5507851(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Union*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Union*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_UNION_METHOD_3_C8FF7988C5507851_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B49B3025F5ED2613(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Union* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Union*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_UNION_METHOD_3_B49B3025F5ED2613_OFFSET))(a1, a2);
		}
	};
}
