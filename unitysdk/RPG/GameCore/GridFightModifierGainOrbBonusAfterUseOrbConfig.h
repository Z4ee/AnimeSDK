#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERGAINORBBONUSAFTERUSEORBCONFIG_METHOD_3_A056CF91685F99DF_OFFSET UNITYSDK_OFFSET(0x1EE6E010)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGAINORBBONUSAFTERUSEORBCONFIG_METHOD_3_C59879B948CC79E3_OFFSET UNITYSDK_OFFSET(0x1EE6E060)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGAINORBBONUSAFTERUSEORBCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6E050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierGainOrbBonusAfterUseOrbConfig_TypeDefinitionIndex = 19179;

	class GridFightModifierGainOrbBonusAfterUseOrbConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGAINORBBONUSAFTERUSEORBCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A056CF91685F99DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierGainOrbBonusAfterUseOrbConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierGainOrbBonusAfterUseOrbConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGAINORBBONUSAFTERUSEORBCONFIG_METHOD_3_A056CF91685F99DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C59879B948CC79E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierGainOrbBonusAfterUseOrbConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierGainOrbBonusAfterUseOrbConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGAINORBBONUSAFTERUSEORBCONFIG_METHOD_3_C59879B948CC79E3_OFFSET))(a1, a2);
		}
	};
}
