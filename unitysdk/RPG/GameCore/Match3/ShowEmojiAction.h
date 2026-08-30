#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_5_90A5AF3A1D5DAF1C_OFFSET UNITYSDK_OFFSET(0x1D246E70)
#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_5_97AFA019D057F1CE_OFFSET UNITYSDK_OFFSET(0x1D246E10)
#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D246E60)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowEmojiAction_TypeDefinitionIndex = 24623;

	class ShowEmojiAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::System::UInt32>* EmojiList; // 0x18
		::System::Single DelayTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_97AFA019D057F1CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowEmojiAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowEmojiAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_5_97AFA019D057F1CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_90A5AF3A1D5DAF1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowEmojiAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowEmojiAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_5_90A5AF3A1D5DAF1C_OFFSET))(a1, a2);
		}
	};
}
