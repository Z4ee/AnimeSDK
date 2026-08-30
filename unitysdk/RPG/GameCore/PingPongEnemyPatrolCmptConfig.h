#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/PingPongPatrolType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_METHOD_3_7D37B8C78512C910_OFFSET UNITYSDK_OFFSET(0x1D3315A0)
#define RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_METHOD_3_9B06402E974DFC89_OFFSET UNITYSDK_OFFSET(0x1D331540)
#define RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D331590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyPatrolCmptConfig_TypeDefinitionIndex = 18713;

	class PingPongEnemyPatrolCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 PatrolRouteEntityID; // 0x10
		::RPG::GameCore::PingPongPatrolType PatrolType; // 0x14
		::System::Single MoveSpeed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B06402E974DFC89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyPatrolCmptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyPatrolCmptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_METHOD_3_9B06402E974DFC89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D37B8C78512C910(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyPatrolCmptConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyPatrolCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_METHOD_3_7D37B8C78512C910_OFFSET))(a1, a2);
		}
	};
}
