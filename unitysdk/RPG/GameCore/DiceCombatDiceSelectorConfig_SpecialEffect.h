#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SPECIALEFFECT_METHOD_3_1DB550F69F6AE419_OFFSET UNITYSDK_OFFSET(0x17160820)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SPECIALEFFECT_METHOD_3_B4EBE9123FBE7944_OFFSET UNITYSDK_OFFSET(0x1715FE50)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SPECIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1715FE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_SpecialEffect_TypeDefinitionIndex = 14825;

	class DiceCombatDiceSelectorConfig_SpecialEffect : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SPECIALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1DB550F69F6AE419(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SPECIALEFFECT_METHOD_3_1DB550F69F6AE419_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4EBE9123FBE7944(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SPECIALEFFECT_METHOD_3_B4EBE9123FBE7944_OFFSET))(a1, a2);
		}
	};
}
