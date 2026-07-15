#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfBehaviorStateContentItem.h"
#include "unitysdk/RPG/GameCore/ElfBehaviorStateType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFBEHAVIORSTATEEMOJIITEM_METHOD_3_2361D5516A59DB31_OFFSET UNITYSDK_OFFSET(0x1BB34E60)
#define RPG_GAMECORE_ELFBEHAVIORSTATEEMOJIITEM_METHOD_3_80A75FB46BDEA159_OFFSET UNITYSDK_OFFSET(0x1BB350A0)
#define RPG_GAMECORE_ELFBEHAVIORSTATEEMOJIITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB34E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfBehaviorStateEmojiItem_TypeDefinitionIndex = 17770;

	class ElfBehaviorStateEmojiItem : public ::RPG::GameCore::ElfBehaviorStateContentItem
	{
	public:
		::RPG::GameCore::ElfBehaviorStateType EmojiType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATEEMOJIITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80A75FB46BDEA159(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfBehaviorStateEmojiItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfBehaviorStateEmojiItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATEEMOJIITEM_METHOD_3_80A75FB46BDEA159_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2361D5516A59DB31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfBehaviorStateEmojiItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfBehaviorStateEmojiItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATEEMOJIITEM_METHOD_3_2361D5516A59DB31_OFFSET))(a1, a2);
		}
	};
}
