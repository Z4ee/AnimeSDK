#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_METHOD_3_DFB3CF4D547A1FE0_OFFSET UNITYSDK_OFFSET(0x1715F560)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_METHOD_3_E90D8C1021138450_OFFSET UNITYSDK_OFFSET(0x17160220)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1715F550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Filter_TypeDefinitionIndex = 14832;

	class DiceCombatDiceSelectorConfig_Filter : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatDiceSelectorConfig*>* selectorList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E90D8C1021138450(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_METHOD_3_E90D8C1021138450_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFB3CF4D547A1FE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_METHOD_3_DFB3CF4D547A1FE0_OFFSET))(a1, a2);
		}
	};
}
