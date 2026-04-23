#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_METHOD_3_DA6C56FAAD1243D8_OFFSET UNITYSDK_OFFSET(0x189BFA10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_METHOD_3_E0882D2EBE7884F1_OFFSET UNITYSDK_OFFSET(0x189BFAE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BFA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRolePoolNumConfig_TypeDefinitionIndex = 18386;

	class GridFightModifierShopUpRolePoolNumConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA6C56FAAD1243D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRolePoolNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRolePoolNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_METHOD_3_DA6C56FAAD1243D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E0882D2EBE7884F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRolePoolNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRolePoolNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_METHOD_3_E0882D2EBE7884F1_OFFSET))(a1, a2);
		}
	};
}
