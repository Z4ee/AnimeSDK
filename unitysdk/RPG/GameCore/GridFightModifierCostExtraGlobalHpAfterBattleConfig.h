#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_METHOD_3_28CC3E80F518A068_OFFSET UNITYSDK_OFFSET(0x17265B20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_METHOD_3_D09C4910A245F151_OFFSET UNITYSDK_OFFSET(0x17269FF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17265AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierCostExtraGlobalHpAfterBattleConfig_TypeDefinitionIndex = 17813;

	class GridFightModifierCostExtraGlobalHpAfterBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D09C4910A245F151(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierCostExtraGlobalHpAfterBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierCostExtraGlobalHpAfterBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_METHOD_3_D09C4910A245F151_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28CC3E80F518A068(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierCostExtraGlobalHpAfterBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierCostExtraGlobalHpAfterBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_METHOD_3_28CC3E80F518A068_OFFSET))(a1, a2);
		}
	};
}
