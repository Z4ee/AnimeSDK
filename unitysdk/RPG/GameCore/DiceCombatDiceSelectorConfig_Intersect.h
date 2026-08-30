#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_INTERSECT_METHOD_3_172127CF50F84727_OFFSET UNITYSDK_OFFSET(0x1D8234D0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_INTERSECT_METHOD_3_F25CB10BADAE7905_OFFSET UNITYSDK_OFFSET(0x1D8226F0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_INTERSECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8226E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Intersect_TypeDefinitionIndex = 15979;

	class DiceCombatDiceSelectorConfig_Intersect : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig* selector1; // 0x10
		::RPG::GameCore::DiceCombatDiceSelectorConfig* selector2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_INTERSECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_172127CF50F84727(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Intersect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Intersect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_INTERSECT_METHOD_3_172127CF50F84727_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F25CB10BADAE7905(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Intersect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Intersect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_INTERSECT_METHOD_3_F25CB10BADAE7905_OFFSET))(a1, a2);
		}
	};
}
