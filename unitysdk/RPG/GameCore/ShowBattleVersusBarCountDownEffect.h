#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_METHOD_3_5B29A9901A836962_OFFSET UNITYSDK_OFFSET(0x176F6A30)
#define RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_METHOD_3_DBD666B0137F728B_OFFSET UNITYSDK_OFFSET(0x176F69B0)
#define RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x176F6A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleVersusBarCountDownEffect_TypeDefinitionIndex = 21580;

	class ShowBattleVersusBarCountDownEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DBD666B0137F728B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_METHOD_3_DBD666B0137F728B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B29A9901A836962(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_METHOD_3_5B29A9901A836962_OFFSET))(a1, a2);
		}
	};
}
