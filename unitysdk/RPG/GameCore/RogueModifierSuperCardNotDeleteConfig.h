#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSUPERCARDNOTDELETECONFIG_METHOD_3_74D7F2957897DC8B_OFFSET UNITYSDK_OFFSET(0x1D3FCB10)
#define RPG_GAMECORE_ROGUEMODIFIERSUPERCARDNOTDELETECONFIG_METHOD_3_C14C7D0C7AABFFE7_OFFSET UNITYSDK_OFFSET(0x1D3FCAC0)
#define RPG_GAMECORE_ROGUEMODIFIERSUPERCARDNOTDELETECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FCB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSuperCardNotDeleteConfig_TypeDefinitionIndex = 17625;

	class RogueModifierSuperCardNotDeleteConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPERCARDNOTDELETECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C14C7D0C7AABFFE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSuperCardNotDeleteConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSuperCardNotDeleteConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPERCARDNOTDELETECONFIG_METHOD_3_C14C7D0C7AABFFE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74D7F2957897DC8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSuperCardNotDeleteConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSuperCardNotDeleteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPERCARDNOTDELETECONFIG_METHOD_3_74D7F2957897DC8B_OFFSET))(a1, a2);
		}
	};
}
