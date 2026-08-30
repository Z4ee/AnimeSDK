#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_METHOD_3_822575D1729D780D_OFFSET UNITYSDK_OFFSET(0x1D15ADD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_METHOD_3_E0882D2EBE7884F1_OFFSET UNITYSDK_OFFSET(0x1D15AE20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15AE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRolePoolNumConfig_TypeDefinitionIndex = 19127;

	class GridFightModifierShopUpRolePoolNumConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_822575D1729D780D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRolePoolNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRolePoolNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_METHOD_3_822575D1729D780D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E0882D2EBE7884F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRolePoolNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRolePoolNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_METHOD_3_E0882D2EBE7884F1_OFFSET))(a1, a2);
		}
	};
}
