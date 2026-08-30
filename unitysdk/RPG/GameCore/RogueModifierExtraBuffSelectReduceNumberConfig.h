#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_METHOD_3_8EF4603CB117AF80_OFFSET UNITYSDK_OFFSET(0x1D3F8E60)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_METHOD_3_FD0A07912EBC6E7C_OFFSET UNITYSDK_OFFSET(0x1D3F8EB0)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F8EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExtraBuffSelectReduceNumberConfig_TypeDefinitionIndex = 17762;

	class RogueModifierExtraBuffSelectReduceNumberConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8EF4603CB117AF80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraBuffSelectReduceNumberConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraBuffSelectReduceNumberConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_METHOD_3_8EF4603CB117AF80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD0A07912EBC6E7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraBuffSelectReduceNumberConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraBuffSelectReduceNumberConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_METHOD_3_FD0A07912EBC6E7C_OFFSET))(a1, a2);
		}
	};
}
