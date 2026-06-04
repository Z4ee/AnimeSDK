#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONACURSTYLELEVELCONFIG_METHOD_6_9BB415E1A5793CC2_OFFSET UNITYSDK_OFFSET(0x19BB0DB0)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONACURSTYLELEVELCONFIG_METHOD_6_D1083A5EAD017AEC_OFFSET UNITYSDK_OFFSET(0x19BB0B00)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONACURSTYLELEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB0C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaCurStyleLevelConfig_TypeDefinitionIndex = 18809;

	class RogueParamRoguePersonaCurStyleLevelConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONACURSTYLELEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D1083A5EAD017AEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaCurStyleLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaCurStyleLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONACURSTYLELEVELCONFIG_METHOD_6_D1083A5EAD017AEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9BB415E1A5793CC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaCurStyleLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaCurStyleLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONACURSTYLELEVELCONFIG_METHOD_6_9BB415E1A5793CC2_OFFSET))(a1, a2);
		}
	};
}
