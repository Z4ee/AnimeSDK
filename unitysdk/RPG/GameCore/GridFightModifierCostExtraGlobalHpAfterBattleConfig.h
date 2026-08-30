#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_METHOD_3_28CC3E80F518A068_OFFSET UNITYSDK_OFFSET(0x1D158AF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_METHOD_3_3119A9C8CD236FEC_OFFSET UNITYSDK_OFFSET(0x1D158AA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D158AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierCostExtraGlobalHpAfterBattleConfig_TypeDefinitionIndex = 19176;

	class GridFightModifierCostExtraGlobalHpAfterBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3119A9C8CD236FEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierCostExtraGlobalHpAfterBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierCostExtraGlobalHpAfterBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_METHOD_3_3119A9C8CD236FEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28CC3E80F518A068(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierCostExtraGlobalHpAfterBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierCostExtraGlobalHpAfterBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_METHOD_3_28CC3E80F518A068_OFFSET))(a1, a2);
		}
	};
}
