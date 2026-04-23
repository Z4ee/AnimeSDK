#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_METHOD_3_0D2B76F0B4340721_OFFSET UNITYSDK_OFFSET(0x189BEEA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_METHOD_3_F0E7E3483EE79E48_OFFSET UNITYSDK_OFFSET(0x189BEDD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BEE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRoleStarUpBeforeBattleBeginConfig_TypeDefinitionIndex = 18387;

	class GridFightModifierRoleStarUpBeforeBattleBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0E7E3483EE79E48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRoleStarUpBeforeBattleBeginConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRoleStarUpBeforeBattleBeginConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_METHOD_3_F0E7E3483EE79E48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D2B76F0B4340721(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRoleStarUpBeforeBattleBeginConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRoleStarUpBeforeBattleBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_METHOD_3_0D2B76F0B4340721_OFFSET))(a1, a2);
		}
	};
}
