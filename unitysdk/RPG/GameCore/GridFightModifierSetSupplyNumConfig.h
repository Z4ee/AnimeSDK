#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETSUPPLYNUMCONFIG_METHOD_3_3488EEFE700ED867_OFFSET UNITYSDK_OFFSET(0x17269400)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETSUPPLYNUMCONFIG_METHOD_3_91489D7226C229EE_OFFSET UNITYSDK_OFFSET(0x1726C0C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETSUPPLYNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172693B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetSupplyNumConfig_TypeDefinitionIndex = 17854;

	class GridFightModifierSetSupplyNumConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETSUPPLYNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_91489D7226C229EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetSupplyNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetSupplyNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETSUPPLYNUMCONFIG_METHOD_3_91489D7226C229EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3488EEFE700ED867(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetSupplyNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetSupplyNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETSUPPLYNUMCONFIG_METHOD_3_3488EEFE700ED867_OFFSET))(a1, a2);
		}
	};
}
