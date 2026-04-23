#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDNUMBYFILTERCONFIG_METHOD_6_864735A481E9D15F_OFFSET UNITYSDK_OFFSET(0x18D5BFE0)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDNUMBYFILTERCONFIG_METHOD_6_D089BD4BE8F92EB9_OFFSET UNITYSDK_OFFSET(0x18D5C290)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDNUMBYFILTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5C160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomCardNumByFilterConfig_TypeDefinitionIndex = 18836;

	class RogueParamRoguePersonaRoomCardNumByFilterConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDNUMBYFILTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_864735A481E9D15F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardNumByFilterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardNumByFilterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDNUMBYFILTERCONFIG_METHOD_6_864735A481E9D15F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D089BD4BE8F92EB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardNumByFilterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardNumByFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDNUMBYFILTERCONFIG_METHOD_6_D089BD4BE8F92EB9_OFFSET))(a1, a2);
		}
	};
}
