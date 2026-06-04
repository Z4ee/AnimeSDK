#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERGAINORBBONUSAFTERUSEORBCONFIG_METHOD_3_9B95CB75EC905E2A_OFFSET UNITYSDK_OFFSET(0x197F27A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGAINORBBONUSAFTERUSEORBCONFIG_METHOD_3_C59879B948CC79E3_OFFSET UNITYSDK_OFFSET(0x197ED530)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGAINORBBONUSAFTERUSEORBCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197ED4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierGainOrbBonusAfterUseOrbConfig_TypeDefinitionIndex = 18406;

	class GridFightModifierGainOrbBonusAfterUseOrbConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGAINORBBONUSAFTERUSEORBCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B95CB75EC905E2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierGainOrbBonusAfterUseOrbConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierGainOrbBonusAfterUseOrbConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGAINORBBONUSAFTERUSEORBCONFIG_METHOD_3_9B95CB75EC905E2A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C59879B948CC79E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierGainOrbBonusAfterUseOrbConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierGainOrbBonusAfterUseOrbConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGAINORBBONUSAFTERUSEORBCONFIG_METHOD_3_C59879B948CC79E3_OFFSET))(a1, a2);
		}
	};
}
