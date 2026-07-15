#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfBehaviorStateContentItem; }
namespace RPG::GameCore { class ElfBehaviorStateEmojiItem; }

#define RPG_GAMECORE_ELFBEHAVIORSTATEITEM_METHOD_2_29351A80DE952F3E_OFFSET UNITYSDK_OFFSET(0x1BB35100)
#define RPG_GAMECORE_ELFBEHAVIORSTATEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB352C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfBehaviorStateItem_TypeDefinitionIndex = 17771;

	class ElfBehaviorStateItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfBehaviorStateContentItem* Anim; // 0x10
		::RPG::GameCore::ElfBehaviorStateEmojiItem* Emoji; // 0x18
		::RPG::GameCore::ElfBehaviorStateContentItem* Text; // 0x20
		::RPG::GameCore::ElfBehaviorStateContentItem* Effect; // 0x28
		::RPG::GameCore::ElfBehaviorStateContentItem* SpecialBubble; // 0x30
		::RPG::GameCore::ElfBehaviorStateContentItem* AudioEffect; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_29351A80DE952F3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfBehaviorStateItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfBehaviorStateItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATEITEM_METHOD_2_29351A80DE952F3E_OFFSET))(a1, a2);
		}
	};
}
