#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_METHOD_6_F3445CBC7137B3C6_OFFSET UNITYSDK_OFFSET(0x1EE71AD0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_METHOD_6_F6D0039B1C703C62_OFFSET UNITYSDK_OFFSET(0x1EE71B20)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE71B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetNoDamageRoleNumInBattleConfig_TypeDefinitionIndex = 19300;

	class GridFightParamGetNoDamageRoleNumInBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F3445CBC7137B3C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetNoDamageRoleNumInBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetNoDamageRoleNumInBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_METHOD_6_F3445CBC7137B3C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F6D0039B1C703C62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetNoDamageRoleNumInBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetNoDamageRoleNumInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_METHOD_6_F6D0039B1C703C62_OFFSET))(a1, a2);
		}
	};
}
