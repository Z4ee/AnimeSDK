#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_TRIPLE_METHOD_3_17FE67D9F4CE3B6B_OFFSET UNITYSDK_OFFSET(0x1D02D050)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_TRIPLE_METHOD_3_BFDDE7D88375760A_OFFSET UNITYSDK_OFFSET(0x1D02C430)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_TRIPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02C420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Triple_TypeDefinitionIndex = 15969;

	class DiceCombatDiceSelectorConfig_Triple : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_TRIPLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_17FE67D9F4CE3B6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_TRIPLE_METHOD_3_17FE67D9F4CE3B6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BFDDE7D88375760A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_TRIPLE_METHOD_3_BFDDE7D88375760A_OFFSET))(a1, a2);
		}
	};
}
