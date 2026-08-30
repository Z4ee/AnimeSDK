#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameValueCompareType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOMPARECONFIG_METHOD_3_3498129509E33A75_OFFSET UNITYSDK_OFFSET(0x1DD663F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOMPARECONFIG_METHOD_3_AD4BD8F5862821C9_OFFSET UNITYSDK_OFFSET(0x1DD66390)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOMPARECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD663E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityValueGetterCompareConfig_TypeDefinitionIndex = 21143;

	class LittleGameAbilityValueGetterCompareConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* LeftValueGetter; // 0x10
		::RPG::GameCore::LittleGameValueCompareType CompareType; // 0x18
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* RightValueGetter; // 0x20
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* TrueValueGetter; // 0x28
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* FalseValueGetter; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOMPARECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AD4BD8F5862821C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCompareConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterCompareConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOMPARECONFIG_METHOD_3_AD4BD8F5862821C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3498129509E33A75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCompareConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterCompareConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOMPARECONFIG_METHOD_3_3498129509E33A75_OFFSET))(a1, a2);
		}
	};
}
