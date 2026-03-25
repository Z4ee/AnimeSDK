#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_METHOD_5_5F8603A87AA795D7_OFFSET UNITYSDK_OFFSET(0x173A55F0)
#define RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_METHOD_5_812802061F570E72_OFFSET UNITYSDK_OFFSET(0x173AC4B0)
#define RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x173A5580)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetEmojiReplyPatternAction_TypeDefinitionIndex = 22741;

	class SetEmojiReplyPatternAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::System::UInt32>* EmojiList; // 0x18
		::System::Single DelayTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_812802061F570E72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_METHOD_5_812802061F570E72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_5F8603A87AA795D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_METHOD_5_5F8603A87AA795D7_OFFSET))(a1, a2);
		}
	};
}
