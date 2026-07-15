#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_RANDOMN_METHOD_3_738A0083905935F5_OFFSET UNITYSDK_OFFSET(0x1C110020)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_RANDOMN_METHOD_3_EE79265D3EB72B97_OFFSET UNITYSDK_OFFSET(0x1C10F3D0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_RANDOMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10F370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_RandomN_TypeDefinitionIndex = 15540;

	class DiceCombatDiceSelectorConfig_RandomN : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Count; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_RANDOMN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_738A0083905935F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_RandomN*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_RandomN*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_RANDOMN_METHOD_3_738A0083905935F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE79265D3EB72B97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_RandomN* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_RandomN*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_RANDOMN_METHOD_3_EE79265D3EB72B97_OFFSET))(a1, a2);
		}
	};
}
