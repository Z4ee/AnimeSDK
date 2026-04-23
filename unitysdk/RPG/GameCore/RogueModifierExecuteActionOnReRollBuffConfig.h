#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_METHOD_3_45F83CBABA8ABFF3_OFFSET UNITYSDK_OFFSET(0x18D3E340)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_METHOD_3_9F4DA676BEA9C13A_OFFSET UNITYSDK_OFFSET(0x18D3E270)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3E2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnReRollBuffConfig_TypeDefinitionIndex = 17045;

	class RogueModifierExecuteActionOnReRollBuffConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F4DA676BEA9C13A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnReRollBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnReRollBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_METHOD_3_9F4DA676BEA9C13A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45F83CBABA8ABFF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnReRollBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnReRollBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_METHOD_3_45F83CBABA8ABFF3_OFFSET))(a1, a2);
		}
	};
}
