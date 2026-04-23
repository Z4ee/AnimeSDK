#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONIMMEDIATELYCONFIG_METHOD_3_9B4011CF9F5EC64B_OFFSET UNITYSDK_OFFSET(0x18D34D40)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONIMMEDIATELYCONFIG_METHOD_3_C0D539F8786134F2_OFFSET UNITYSDK_OFFSET(0x18D3C9F0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONIMMEDIATELYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D34CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionImmediatelyConfig_TypeDefinitionIndex = 17036;

	class RogueModifierExecuteActionImmediatelyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONIMMEDIATELYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0D539F8786134F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionImmediatelyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionImmediatelyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONIMMEDIATELYCONFIG_METHOD_3_C0D539F8786134F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9B4011CF9F5EC64B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionImmediatelyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionImmediatelyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONIMMEDIATELYCONFIG_METHOD_3_9B4011CF9F5EC64B_OFFSET))(a1, a2);
		}
	};
}
