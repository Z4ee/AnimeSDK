#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMBATTLEWINTIMECONFIG_METHOD_6_7A88FA8D8BA20E86_OFFSET UNITYSDK_OFFSET(0x1E5455D0)
#define RPG_GAMECORE_ROGUEPARAMBATTLEWINTIMECONFIG_METHOD_6_B2D7BB5EB5DA7B22_OFFSET UNITYSDK_OFFSET(0x1E545620)
#define RPG_GAMECORE_ROGUEPARAMBATTLEWINTIMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E545610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamBattleWinTimeConfig_TypeDefinitionIndex = 19633;

	class RogueParamBattleWinTimeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMBATTLEWINTIMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_7A88FA8D8BA20E86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamBattleWinTimeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamBattleWinTimeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMBATTLEWINTIMECONFIG_METHOD_6_7A88FA8D8BA20E86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B2D7BB5EB5DA7B22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamBattleWinTimeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamBattleWinTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMBATTLEWINTIMECONFIG_METHOD_6_B2D7BB5EB5DA7B22_OFFSET))(a1, a2);
		}
	};
}
