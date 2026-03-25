#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_METHOD_6_00A267177C943913_OFFSET UNITYSDK_OFFSET(0x17273670)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_METHOD_6_CFB870E375B556FD_OFFSET UNITYSDK_OFFSET(0x17273920)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172737F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleNumPreBattleByEquipNumConfig_TypeDefinitionIndex = 17891;

	class GridFightParamGetRoleNumPreBattleByEquipNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_00A267177C943913(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleByEquipNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleByEquipNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_METHOD_6_00A267177C943913_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_CFB870E375B556FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleByEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleByEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_METHOD_6_CFB870E375B556FD_OFFSET))(a1, a2);
		}
	};
}
