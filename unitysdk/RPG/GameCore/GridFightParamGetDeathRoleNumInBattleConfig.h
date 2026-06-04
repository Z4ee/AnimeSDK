#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_METHOD_6_32874671558E8CE6_OFFSET UNITYSDK_OFFSET(0x197F79D0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_METHOD_6_70FE41BC0F75EDF0_OFFSET UNITYSDK_OFFSET(0x197F7C80)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197F7B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetDeathRoleNumInBattleConfig_TypeDefinitionIndex = 18511;

	class GridFightParamGetDeathRoleNumInBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_32874671558E8CE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetDeathRoleNumInBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetDeathRoleNumInBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_METHOD_6_32874671558E8CE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_70FE41BC0F75EDF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetDeathRoleNumInBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetDeathRoleNumInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_METHOD_6_70FE41BC0F75EDF0_OFFSET))(a1, a2);
		}
	};
}
