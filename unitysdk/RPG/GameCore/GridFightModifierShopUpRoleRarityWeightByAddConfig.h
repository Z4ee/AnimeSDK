#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYADDCONFIG_METHOD_3_41B5581C995D8C8A_OFFSET UNITYSDK_OFFSET(0x1EE6F200)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYADDCONFIG_METHOD_3_A82B27E1C83962E6_OFFSET UNITYSDK_OFFSET(0x1EE6F250)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYADDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6F240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRoleRarityWeightByAddConfig_TypeDefinitionIndex = 19125;

	class GridFightModifierShopUpRoleRarityWeightByAddConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYADDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_41B5581C995D8C8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleRarityWeightByAddConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleRarityWeightByAddConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYADDCONFIG_METHOD_3_41B5581C995D8C8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A82B27E1C83962E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleRarityWeightByAddConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleRarityWeightByAddConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYADDCONFIG_METHOD_3_A82B27E1C83962E6_OFFSET))(a1, a2);
		}
	};
}
