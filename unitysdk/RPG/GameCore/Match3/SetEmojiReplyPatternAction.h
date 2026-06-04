#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_METHOD_5_0C6847DDAF94351C_OFFSET UNITYSDK_OFFSET(0x198EB580)
#define RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_METHOD_5_AF63CF17530B9489_OFFSET UNITYSDK_OFFSET(0x198E3D70)
#define RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x198E3D00)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetEmojiReplyPatternAction_TypeDefinitionIndex = 23550;

	class SetEmojiReplyPatternAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::System::UInt32>* EmojiList; // 0x18
		::System::Single DelayTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0C6847DDAF94351C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_METHOD_5_0C6847DDAF94351C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_AF63CF17530B9489(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_METHOD_5_AF63CF17530B9489_OFFSET))(a1, a2);
		}
	};
}
