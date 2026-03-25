#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_METHOD_3_D7FE32833B1EFA85_OFFSET UNITYSDK_OFFSET(0x176320C0)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_METHOD_3_FD0A07912EBC6E7C_OFFSET UNITYSDK_OFFSET(0x17632190)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17632140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExtraBuffSelectReduceNumberConfig_TypeDefinitionIndex = 16516;

	class RogueModifierExtraBuffSelectReduceNumberConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D7FE32833B1EFA85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraBuffSelectReduceNumberConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraBuffSelectReduceNumberConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_METHOD_3_D7FE32833B1EFA85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD0A07912EBC6E7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraBuffSelectReduceNumberConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraBuffSelectReduceNumberConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_METHOD_3_FD0A07912EBC6E7C_OFFSET))(a1, a2);
		}
	};
}
