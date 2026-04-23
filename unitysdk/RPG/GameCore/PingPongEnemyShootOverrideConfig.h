#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECONFIG_METHOD_2_CD2C58674EAFEDD6_OFFSET UNITYSDK_OFFSET(0x18BFBD20)
#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFBEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyShootOverrideConfig_TypeDefinitionIndex = 17980;

	class PingPongEnemyShootOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ShootID; // 0x10
		::System::Single InitShootInterval; // 0x14
		::System::Single ShootInterval; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CD2C58674EAFEDD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyShootOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyShootOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECONFIG_METHOD_2_CD2C58674EAFEDD6_OFFSET))(a1, a2);
		}
	};
}
