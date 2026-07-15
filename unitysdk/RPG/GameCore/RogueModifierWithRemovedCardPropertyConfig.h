#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_METHOD_3_8CFB7C7E9FCBBDFB_OFFSET UNITYSDK_OFFSET(0x1D1668B0)
#define RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_METHOD_3_D60D74B2F4A65317_OFFSET UNITYSDK_OFFSET(0x1D166860)
#define RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1668A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierWithRemovedCardPropertyConfig_TypeDefinitionIndex = 17137;

	class RogueModifierWithRemovedCardPropertyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D60D74B2F4A65317(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierWithRemovedCardPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierWithRemovedCardPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_METHOD_3_D60D74B2F4A65317_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8CFB7C7E9FCBBDFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierWithRemovedCardPropertyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierWithRemovedCardPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_METHOD_3_8CFB7C7E9FCBBDFB_OFFSET))(a1, a2);
		}
	};
}
