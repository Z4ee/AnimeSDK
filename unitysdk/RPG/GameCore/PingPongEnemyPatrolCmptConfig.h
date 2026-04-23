#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/PingPongPatrolType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_METHOD_3_6C6DDD2755F02F2F_OFFSET UNITYSDK_OFFSET(0x18BFB600)
#define RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_METHOD_3_7D37B8C78512C910_OFFSET UNITYSDK_OFFSET(0x18BFB690)
#define RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFB670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyPatrolCmptConfig_TypeDefinitionIndex = 17978;

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

		static ::System::Void Method_3_6C6DDD2755F02F2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyPatrolCmptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyPatrolCmptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_METHOD_3_6C6DDD2755F02F2F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D37B8C78512C910(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyPatrolCmptConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyPatrolCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_METHOD_3_7D37B8C78512C910_OFFSET))(a1, a2);
		}
	};
}
