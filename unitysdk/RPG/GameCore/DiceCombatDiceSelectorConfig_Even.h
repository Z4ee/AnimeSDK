#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_EVEN_METHOD_3_32A1FDD8FF2AF40C_OFFSET UNITYSDK_OFFSET(0x196A5DA0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_EVEN_METHOD_3_7B852DC634D8947E_OFFSET UNITYSDK_OFFSET(0x196A6BA0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_EVEN__CTOR_OFFSET UNITYSDK_OFFSET(0x196A5D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Even_TypeDefinitionIndex = 15370;

	class DiceCombatDiceSelectorConfig_Even : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AtLeastCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_EVEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7B852DC634D8947E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Even*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Even*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_EVEN_METHOD_3_7B852DC634D8947E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_32A1FDD8FF2AF40C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Even* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Even*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_EVEN_METHOD_3_32A1FDD8FF2AF40C_OFFSET))(a1, a2);
		}
	};
}
