#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWEEKCHALLENGECONFIG_METHOD_2_5B7EEFF88A395C7D_OFFSET UNITYSDK_OFFSET(0x1D492D90)
#define RPG_GAMECORE_ROGUEWEEKCHALLENGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D492DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWeekChallengeConfig_TypeDefinitionIndex = 17804;

	class RogueWeekChallengeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWEEKCHALLENGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5B7EEFF88A395C7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWeekChallengeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWeekChallengeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWEEKCHALLENGECONFIG_METHOD_2_5B7EEFF88A395C7D_OFFSET))(a1, a2);
		}
	};
}
