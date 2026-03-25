#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEWEIGHTCONFIG_METHOD_3_A5CBDBAFD298BEB3_OFFSET UNITYSDK_OFFSET(0x1726CAB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEWEIGHTCONFIG_METHOD_3_BB9DA511087F0EFA_OFFSET UNITYSDK_OFFSET(0x1726C9E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1726CA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRoleWeightConfig_TypeDefinitionIndex = 17768;

	class GridFightModifierShopUpRoleWeightConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB9DA511087F0EFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEWEIGHTCONFIG_METHOD_3_BB9DA511087F0EFA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A5CBDBAFD298BEB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEWEIGHTCONFIG_METHOD_3_A5CBDBAFD298BEB3_OFFSET))(a1, a2);
		}
	};
}
