#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDMAXLEVELBYFILTERCONFIG_METHOD_6_EDA87C15F2ED216F_OFFSET UNITYSDK_OFFSET(0x19BB1340)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDMAXLEVELBYFILTERCONFIG_METHOD_6_F7150109FE9A0EC9_OFFSET UNITYSDK_OFFSET(0x19BB15F0)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDMAXLEVELBYFILTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB14C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomCardMaxLevelByFilterConfig_TypeDefinitionIndex = 18804;

	class RogueParamRoguePersonaRoomCardMaxLevelByFilterConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDMAXLEVELBYFILTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_EDA87C15F2ED216F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardMaxLevelByFilterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardMaxLevelByFilterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDMAXLEVELBYFILTERCONFIG_METHOD_6_EDA87C15F2ED216F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F7150109FE9A0EC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardMaxLevelByFilterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardMaxLevelByFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDMAXLEVELBYFILTERCONFIG_METHOD_6_F7150109FE9A0EC9_OFFSET))(a1, a2);
		}
	};
}
