#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERSUPPLYROUNDBEGINCONFIG_METHOD_3_16A3C79BF42FBB96_OFFSET UNITYSDK_OFFSET(0x1D15B240)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERSUPPLYROUNDBEGINCONFIG_METHOD_3_81DAAE4A48AD053A_OFFSET UNITYSDK_OFFSET(0x1D15B1F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERSUPPLYROUNDBEGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15B230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierTriggerSupplyRoundBeginConfig_TypeDefinitionIndex = 19230;

	class GridFightModifierTriggerSupplyRoundBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERSUPPLYROUNDBEGINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_81DAAE4A48AD053A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierTriggerSupplyRoundBeginConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierTriggerSupplyRoundBeginConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERSUPPLYROUNDBEGINCONFIG_METHOD_3_81DAAE4A48AD053A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_16A3C79BF42FBB96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierTriggerSupplyRoundBeginConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierTriggerSupplyRoundBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERSUPPLYROUNDBEGINCONFIG_METHOD_3_16A3C79BF42FBB96_OFFSET))(a1, a2);
		}
	};
}
