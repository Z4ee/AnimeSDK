#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_METHOD_6_3A329085EF2DD255_OFFSET UNITYSDK_OFFSET(0x18D5A190)
#define RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_METHOD_6_A03E222CE844DF1B_OFFSET UNITYSDK_OFFSET(0x18D59EE0)
#define RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5A060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueAreaIDConfig_TypeDefinitionIndex = 18829;

	class RogueParamRogueAreaIDConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A03E222CE844DF1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueAreaIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueAreaIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_METHOD_6_A03E222CE844DF1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3A329085EF2DD255(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueAreaIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueAreaIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_METHOD_6_3A329085EF2DD255_OFFSET))(a1, a2);
		}
	};
}
