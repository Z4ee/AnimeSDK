#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_METHOD_3_8CFB7C7E9FCBBDFB_OFFSET UNITYSDK_OFFSET(0x19B9D5D0)
#define RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_METHOD_3_FB6581591C9487E2_OFFSET UNITYSDK_OFFSET(0x19B9D500)
#define RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9D580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierWithRemovedCardPropertyConfig_TypeDefinitionIndex = 16975;

	class RogueModifierWithRemovedCardPropertyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FB6581591C9487E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierWithRemovedCardPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierWithRemovedCardPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_METHOD_3_FB6581591C9487E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8CFB7C7E9FCBBDFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierWithRemovedCardPropertyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierWithRemovedCardPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_METHOD_3_8CFB7C7E9FCBBDFB_OFFSET))(a1, a2);
		}
	};
}
