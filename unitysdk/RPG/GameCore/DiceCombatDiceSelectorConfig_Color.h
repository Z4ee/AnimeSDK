#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceRare.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_COLOR_METHOD_3_180A8A92D1C39904_OFFSET UNITYSDK_OFFSET(0x1D02B6E0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_COLOR_METHOD_3_484EADAC0CDF3E74_OFFSET UNITYSDK_OFFSET(0x1D02C5E0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_COLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02B6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Color_TypeDefinitionIndex = 15974;

	class DiceCombatDiceSelectorConfig_Color : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatDiceRare>* RareList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_COLOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_484EADAC0CDF3E74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Color*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Color*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_COLOR_METHOD_3_484EADAC0CDF3E74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_180A8A92D1C39904(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Color* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Color*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_COLOR_METHOD_3_180A8A92D1C39904_OFFSET))(a1, a2);
		}
	};
}
