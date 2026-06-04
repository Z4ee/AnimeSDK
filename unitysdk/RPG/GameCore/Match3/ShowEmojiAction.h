#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_5_90A5AF3A1D5DAF1C_OFFSET UNITYSDK_OFFSET(0x198E4E20)
#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_5_FB7E9D84217EA6AB_OFFSET UNITYSDK_OFFSET(0x198EBA50)
#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x198E4DB0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowEmojiAction_TypeDefinitionIndex = 23545;

	class ShowEmojiAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::System::UInt32>* EmojiList; // 0x18
		::System::Single DelayTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FB7E9D84217EA6AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowEmojiAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowEmojiAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_5_FB7E9D84217EA6AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_90A5AF3A1D5DAF1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowEmojiAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowEmojiAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_5_90A5AF3A1D5DAF1C_OFFSET))(a1, a2);
		}
	};
}
