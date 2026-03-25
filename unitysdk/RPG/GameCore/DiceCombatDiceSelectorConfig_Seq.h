#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SEQ_METHOD_3_5D5F5F957096167B_OFFSET UNITYSDK_OFFSET(0x1715FDE0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SEQ_METHOD_3_FE3E876D4047745A_OFFSET UNITYSDK_OFFSET(0x17160790)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SEQ__CTOR_OFFSET UNITYSDK_OFFSET(0x1715FDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Seq_TypeDefinitionIndex = 14822;

	class DiceCombatDiceSelectorConfig_Seq : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SEQ__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE3E876D4047745A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SEQ_METHOD_3_FE3E876D4047745A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5D5F5F957096167B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SEQ_METHOD_3_5D5F5F957096167B_OFFSET))(a1, a2);
		}
	};
}
