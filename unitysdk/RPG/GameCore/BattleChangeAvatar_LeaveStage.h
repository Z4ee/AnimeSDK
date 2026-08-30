#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLECHANGEAVATAR_LEAVESTAGE_METHOD_3_A47C5585530D801C_OFFSET UNITYSDK_OFFSET(0x1B2F1E20)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_LEAVESTAGE_METHOD_3_C5EEB06C8B134E19_OFFSET UNITYSDK_OFFSET(0x1B2F1D50)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_LEAVESTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F1E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleChangeAvatar_LeaveStage_TypeDefinitionIndex = 22521;

	class BattleChangeAvatar_LeaveStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_LEAVESTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C5EEB06C8B134E19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_LeaveStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_LeaveStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_LEAVESTAGE_METHOD_3_C5EEB06C8B134E19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A47C5585530D801C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_LeaveStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_LeaveStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_LEAVESTAGE_METHOD_3_A47C5585530D801C_OFFSET))(a1, a2);
		}
	};
}
