#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_METHOD_3_3142C9849881296F_OFFSET UNITYSDK_OFFSET(0x1D15AEF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_METHOD_3_7AE0EECA587A9033_OFFSET UNITYSDK_OFFSET(0x1D15AF40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15AF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRoleStarConfig_TypeDefinitionIndex = 19120;

	class GridFightModifierShopUpRoleStarConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3142C9849881296F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleStarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_METHOD_3_3142C9849881296F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7AE0EECA587A9033(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_METHOD_3_7AE0EECA587A9033_OFFSET))(a1, a2);
		}
	};
}
