#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYMULTICONFIG_METHOD_3_9EA1C46582E40989_OFFSET UNITYSDK_OFFSET(0x189BFBD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYMULTICONFIG_METHOD_3_FC49B801D5EDA620_OFFSET UNITYSDK_OFFSET(0x189BFCA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYMULTICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BFC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRoleRarityWeightByMultiConfig_TypeDefinitionIndex = 18383;

	class GridFightModifierShopUpRoleRarityWeightByMultiConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYMULTICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9EA1C46582E40989(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleRarityWeightByMultiConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleRarityWeightByMultiConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYMULTICONFIG_METHOD_3_9EA1C46582E40989_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC49B801D5EDA620(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleRarityWeightByMultiConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleRarityWeightByMultiConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYMULTICONFIG_METHOD_3_FC49B801D5EDA620_OFFSET))(a1, a2);
		}
	};
}
