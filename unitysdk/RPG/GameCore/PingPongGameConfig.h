#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongAddPointConfig; }
namespace RPG::GameCore { class PingPongBallConfig; }
namespace RPG::GameCore { class PingPongBaseStateConfig; }
namespace RPG::GameCore { class PingPongDropItemConfig; }
namespace RPG::GameCore { class PingPongEnemyCommonConfig; }
namespace RPG::GameCore { class PingPongProjectileGroup; }
namespace RPG::GameCore { class PingPongRacketConfig; }
namespace RPG::GameCore { class PingPongSkillConfig; }

#define RPG_GAMECORE_PINGPONGGAMECONFIG_METHOD_3_0E877F96CED10BF7_OFFSET UNITYSDK_OFFSET(0x1B4C85E0)
#define RPG_GAMECORE_PINGPONGGAMECONFIG_METHOD_3_A2EF257BB135E722_OFFSET UNITYSDK_OFFSET(0x1B4C85A0)
#define RPG_GAMECORE_PINGPONGGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C85D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongGameConfig_TypeDefinitionIndex = 16297;

	class PingPongGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::RPG::GameCore::PingPongBaseStateConfig* BaseState; // 0x10
		::RPG::GameCore::PingPongAddPointConfig* AddPoint; // 0x18
		::RPG::GameCore::PingPongRacketConfig* Racket; // 0x20
		::RPG::GameCore::PingPongBallConfig* Ball; // 0x28
		::RPG::GameCore::PingPongEnemyCommonConfig* Enemy; // 0x30
		::RPG::GameCore::PingPongSkillConfig* Skill; // 0x38
		::Il2CppArray<::RPG::GameCore::PingPongProjectileGroup*>* ProjectileList; // 0x40
		::RPG::GameCore::PingPongDropItemConfig* DropItem; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A2EF257BB135E722(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGAMECONFIG_METHOD_3_A2EF257BB135E722_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E877F96CED10BF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongGameConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGAMECONFIG_METHOD_3_0E877F96CED10BF7_OFFSET))(a1, a2);
		}
	};
}
