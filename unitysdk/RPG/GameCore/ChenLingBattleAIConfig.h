#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingAIDangerConfig; }
namespace RPG::GameCore { class ChenLingAIInterestConfig; }
namespace RPG::GameCore { class ChenLingAISmoothConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEAICONFIG_METHOD_2_2BB07206ECB65F97_OFFSET UNITYSDK_OFFSET(0x1961A8F0)
#define RPG_GAMECORE_CHENLINGBATTLEAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1961A9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAIConfig_TypeDefinitionIndex = 14920;

	class ChenLingBattleAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingAIInterestConfig* InterestConfig; // 0x10
		::RPG::GameCore::ChenLingAIDangerConfig* DangerConfig; // 0x18
		::RPG::GameCore::ChenLingAISmoothConfig* SmoothConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEAICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2BB07206ECB65F97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEAICONFIG_METHOD_2_2BB07206ECB65F97_OFFSET))(a1, a2);
		}
	};
}
