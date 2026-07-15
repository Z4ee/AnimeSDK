#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_METHOD_6_6B8B6AA7E6B4914C_OFFSET UNITYSDK_OFFSET(0x1D06DF60)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_METHOD_6_E53AF3874EE0B4D0_OFFSET UNITYSDK_OFFSET(0x1D06DF10)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06DF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleNumPreBattleConfig_TypeDefinitionIndex = 18762;

	class GridFightParamGetRoleNumPreBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E53AF3874EE0B4D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_METHOD_6_E53AF3874EE0B4D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_6B8B6AA7E6B4914C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_METHOD_6_6B8B6AA7E6B4914C_OFFSET))(a1, a2);
		}
	};
}
