#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSWITCHHPANDGOLDCONFIG_METHOD_3_4577E213952E3797_OFFSET UNITYSDK_OFFSET(0x1EE6F550)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSWITCHHPANDGOLDCONFIG_METHOD_3_4C6ED7215332AD53_OFFSET UNITYSDK_OFFSET(0x1EE6F500)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSWITCHHPANDGOLDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6F540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSwitchHpAndGoldConfig_TypeDefinitionIndex = 19186;

	class GridFightModifierSwitchHpAndGoldConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSWITCHHPANDGOLDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C6ED7215332AD53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSwitchHpAndGoldConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSwitchHpAndGoldConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSWITCHHPANDGOLDCONFIG_METHOD_3_4C6ED7215332AD53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4577E213952E3797(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSwitchHpAndGoldConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSwitchHpAndGoldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSWITCHHPANDGOLDCONFIG_METHOD_3_4577E213952E3797_OFFSET))(a1, a2);
		}
	};
}
