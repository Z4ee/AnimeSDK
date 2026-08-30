#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_METHOD_3_86EDC5E624F8FF7D_OFFSET UNITYSDK_OFFSET(0x1D02C790)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_METHOD_3_E48F3AA5E67F01B5_OFFSET UNITYSDK_OFFSET(0x1D02B900)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02B8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Filter_TypeDefinitionIndex = 15980;

	class DiceCombatDiceSelectorConfig_Filter : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatDiceSelectorConfig*>* selectorList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_86EDC5E624F8FF7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_METHOD_3_86EDC5E624F8FF7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E48F3AA5E67F01B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_METHOD_3_E48F3AA5E67F01B5_OFFSET))(a1, a2);
		}
	};
}
