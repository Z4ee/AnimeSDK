#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_METHOD_3_5B29A9901A836962_OFFSET UNITYSDK_OFFSET(0x1BE3B5E0)
#define RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_METHOD_3_B9EAD2EB323480D9_OFFSET UNITYSDK_OFFSET(0x1BE3B5A0)
#define RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3B5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleVersusBarCountDownEffect_TypeDefinitionIndex = 22511;

	class ShowBattleVersusBarCountDownEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B9EAD2EB323480D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_METHOD_3_B9EAD2EB323480D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B29A9901A836962(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_METHOD_3_5B29A9901A836962_OFFSET))(a1, a2);
		}
	};
}
