#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MAX_METHOD_3_692055759198A1AD_OFFSET UNITYSDK_OFFSET(0x1C10FBA0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MAX_METHOD_3_D49E4D86F13523C8_OFFSET UNITYSDK_OFFSET(0x1C10EE30)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MAX__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10EE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Max_TypeDefinitionIndex = 15538;

	class DiceCombatDiceSelectorConfig_Max : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MAX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_692055759198A1AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Max*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Max*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MAX_METHOD_3_692055759198A1AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D49E4D86F13523C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Max* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Max*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MAX_METHOD_3_D49E4D86F13523C8_OFFSET))(a1, a2);
		}
	};
}
