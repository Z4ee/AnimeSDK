#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETBATTLETARGETMULTITARGETSWITCH_METHOD_3_16BD004E14000737_OFFSET UNITYSDK_OFFSET(0x1D4E3CD0)
#define RPG_GAMECORE_SETBATTLETARGETMULTITARGETSWITCH_METHOD_3_F4E9D422A4DFD1FC_OFFSET UNITYSDK_OFFSET(0x1D4E3C90)
#define RPG_GAMECORE_SETBATTLETARGETMULTITARGETSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E3CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleTargetMultiTargetSwitch_TypeDefinitionIndex = 22922;

	class SetBattleTargetMultiTargetSwitch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Active; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETMULTITARGETSWITCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F4E9D422A4DFD1FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleTargetMultiTargetSwitch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleTargetMultiTargetSwitch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETMULTITARGETSWITCH_METHOD_3_F4E9D422A4DFD1FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_16BD004E14000737(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleTargetMultiTargetSwitch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleTargetMultiTargetSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETMULTITARGETSWITCH_METHOD_3_16BD004E14000737_OFFSET))(a1, a2);
		}
	};
}
