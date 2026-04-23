#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_5_B5DF3AABAE6943CA_OFFSET UNITYSDK_OFFSET(0x18AB4740)
#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_5_DDED07DED3590889_OFFSET UNITYSDK_OFFSET(0x18ABB080)
#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB46D0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowEmojiAction_TypeDefinitionIndex = 23709;

	class ShowEmojiAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::System::UInt32>* EmojiList; // 0x18
		::System::Single DelayTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DDED07DED3590889(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowEmojiAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowEmojiAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_5_DDED07DED3590889_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B5DF3AABAE6943CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowEmojiAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowEmojiAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_5_B5DF3AABAE6943CA_OFFSET))(a1, a2);
		}
	};
}
