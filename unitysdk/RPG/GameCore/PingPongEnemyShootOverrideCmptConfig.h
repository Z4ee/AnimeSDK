#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongEnemyShootOverrideConfig; }

#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_METHOD_3_2B9B7ECEF5FF37B8_OFFSET UNITYSDK_OFFSET(0x1B4C7C50)
#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_METHOD_3_9F17382756DC78C8_OFFSET UNITYSDK_OFFSET(0x1B4C7CB0)
#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C7CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyShootOverrideCmptConfig_TypeDefinitionIndex = 18192;

	class PingPongEnemyShootOverrideCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PingPongEnemyShootOverrideConfig*>* OverrideList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2B9B7ECEF5FF37B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_METHOD_3_2B9B7ECEF5FF37B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9F17382756DC78C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_METHOD_3_9F17382756DC78C8_OFFSET))(a1, a2);
		}
	};
}
