#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_METHOD_6_3835DA873A55911B_OFFSET UNITYSDK_OFFSET(0x1764D770)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_METHOD_6_D22A48E0413E8455_OFFSET UNITYSDK_OFFSET(0x1764DA20)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1764D8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicScepterCountConfig_TypeDefinitionIndex = 18183;

	class RogueParamRogueMagicScepterCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_3835DA873A55911B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicScepterCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicScepterCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_METHOD_6_3835DA873A55911B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D22A48E0413E8455(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicScepterCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicScepterCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_METHOD_6_D22A48E0413E8455_OFFSET))(a1, a2);
		}
	};
}
