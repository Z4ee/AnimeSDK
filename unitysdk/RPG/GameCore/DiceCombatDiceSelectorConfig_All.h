#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ALL_METHOD_3_08C9ADE3B4B31852_OFFSET UNITYSDK_OFFSET(0x1715FFE0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ALL_METHOD_3_99D027A2B9FA4853_OFFSET UNITYSDK_OFFSET(0x1715F280)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1715F270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_All_TypeDefinitionIndex = 14817;

	class DiceCombatDiceSelectorConfig_All : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ALL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_08C9ADE3B4B31852(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_All*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_All*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ALL_METHOD_3_08C9ADE3B4B31852_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99D027A2B9FA4853(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_All* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_All*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ALL_METHOD_3_99D027A2B9FA4853_OFFSET))(a1, a2);
		}
	};
}
