#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETBATTLEACHIEVEMENT_METHOD_3_20A0441BF8EA421A_OFFSET UNITYSDK_OFFSET(0x19C2A5E0)
#define RPG_GAMECORE_SETBATTLEACHIEVEMENT_METHOD_3_41AF54801A4E8194_OFFSET UNITYSDK_OFFSET(0x19C2A700)
#define RPG_GAMECORE_SETBATTLEACHIEVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2A680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleAchievement_TypeDefinitionIndex = 21917;

	class SetBattleAchievement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AchievementID; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::System::Boolean TagMatch; // 0x28
		::System::Boolean ClientAuthority; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEACHIEVEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_20A0441BF8EA421A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleAchievement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleAchievement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEACHIEVEMENT_METHOD_3_20A0441BF8EA421A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_41AF54801A4E8194(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleAchievement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleAchievement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEACHIEVEMENT_METHOD_3_41AF54801A4E8194_OFFSET))(a1, a2);
		}
	};
}
