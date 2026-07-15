#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_METHOD_3_0D2B76F0B4340721_OFFSET UNITYSDK_OFFSET(0x1D06ABB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_METHOD_3_93BD1ADC9FD358FD_OFFSET UNITYSDK_OFFSET(0x1D06AB60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06ABA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRoleStarUpBeforeBattleBeginConfig_TypeDefinitionIndex = 18603;

	class GridFightModifierRoleStarUpBeforeBattleBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_93BD1ADC9FD358FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRoleStarUpBeforeBattleBeginConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRoleStarUpBeforeBattleBeginConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_METHOD_3_93BD1ADC9FD358FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D2B76F0B4340721(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRoleStarUpBeforeBattleBeginConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRoleStarUpBeforeBattleBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_METHOD_3_0D2B76F0B4340721_OFFSET))(a1, a2);
		}
	};
}
