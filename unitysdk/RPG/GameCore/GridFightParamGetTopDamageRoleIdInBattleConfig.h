#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETTOPDAMAGEROLEIDINBATTLECONFIG_METHOD_6_40D1930B79859247_OFFSET UNITYSDK_OFFSET(0x1D15DD00)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTOPDAMAGEROLEIDINBATTLECONFIG_METHOD_6_935396912E67FAEB_OFFSET UNITYSDK_OFFSET(0x1D15DD50)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTOPDAMAGEROLEIDINBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15DD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetTopDamageRoleIdInBattleConfig_TypeDefinitionIndex = 19301;

	class GridFightParamGetTopDamageRoleIdInBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTOPDAMAGEROLEIDINBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_40D1930B79859247(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetTopDamageRoleIdInBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetTopDamageRoleIdInBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTOPDAMAGEROLEIDINBATTLECONFIG_METHOD_6_40D1930B79859247_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_935396912E67FAEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetTopDamageRoleIdInBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetTopDamageRoleIdInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTOPDAMAGEROLEIDINBATTLECONFIG_METHOD_6_935396912E67FAEB_OFFSET))(a1, a2);
		}
	};
}
