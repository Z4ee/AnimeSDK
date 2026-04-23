#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PAMCHATQUESTIONEMOJIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BD0880)
#define RPG_GAMECORE_PAMCHATQUESTIONEMOJIROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD09B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamChatQuestionEmojiRow_TypeDefinitionIndex = 13575;

	class PamChatQuestionEmojiRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATQUESTIONEMOJIROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PamChatQuestionEmojiRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamChatQuestionEmojiRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATQUESTIONEMOJIROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
