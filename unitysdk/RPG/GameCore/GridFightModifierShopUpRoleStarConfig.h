#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_METHOD_3_7AE0EECA587A9033_OFFSET UNITYSDK_OFFSET(0x197F4220)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_METHOD_3_90B2B82B8E60E07A_OFFSET UNITYSDK_OFFSET(0x197F4150)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197F41D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRoleStarConfig_TypeDefinitionIndex = 18351;

	class GridFightModifierShopUpRoleStarConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_90B2B82B8E60E07A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleStarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_METHOD_3_90B2B82B8E60E07A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7AE0EECA587A9033(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_METHOD_3_7AE0EECA587A9033_OFFSET))(a1, a2);
		}
	};
}
