#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MIN_METHOD_3_5B1FCA09765CF92A_OFFSET UNITYSDK_OFFSET(0x1D822820)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MIN_METHOD_3_C035FE42D604F00B_OFFSET UNITYSDK_OFFSET(0x1D8235B0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D822810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Min_TypeDefinitionIndex = 15976;

	class DiceCombatDiceSelectorConfig_Min : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C035FE42D604F00B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Min*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Min*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MIN_METHOD_3_C035FE42D604F00B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B1FCA09765CF92A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Min* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Min*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MIN_METHOD_3_5B1FCA09765CF92A_OFFSET))(a1, a2);
		}
	};
}
