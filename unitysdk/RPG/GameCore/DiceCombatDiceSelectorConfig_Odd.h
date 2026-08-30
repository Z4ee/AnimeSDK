#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ODD_METHOD_3_00DFEBB5F93D3727_OFFSET UNITYSDK_OFFSET(0x1D823640)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ODD_METHOD_3_5DF76D3352CD9BED_OFFSET UNITYSDK_OFFSET(0x1D8228E0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ODD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D822880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Odd_TypeDefinitionIndex = 15972;

	class DiceCombatDiceSelectorConfig_Odd : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AtLeastCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ODD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_00DFEBB5F93D3727(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ODD_METHOD_3_00DFEBB5F93D3727_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5DF76D3352CD9BED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ODD_METHOD_3_5DF76D3352CD9BED_OFFSET))(a1, a2);
		}
	};
}
