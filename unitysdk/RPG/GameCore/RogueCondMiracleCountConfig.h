#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG_METHOD_6_3DC88803D9FFF70C_OFFSET UNITYSDK_OFFSET(0x18CF7250)
#define RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG_METHOD_6_BE4098AF7BA7CFE2_OFFSET UNITYSDK_OFFSET(0x18CF7500)
#define RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF73D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondMiracleCountConfig_TypeDefinitionIndex = 18785;

	class RogueCondMiracleCountConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_3DC88803D9FFF70C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondMiracleCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondMiracleCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG_METHOD_6_3DC88803D9FFF70C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_BE4098AF7BA7CFE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondMiracleCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondMiracleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG_METHOD_6_BE4098AF7BA7CFE2_OFFSET))(a1, a2);
		}
	};
}
