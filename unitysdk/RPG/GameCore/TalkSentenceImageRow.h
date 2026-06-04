#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TALKSENTENCEIMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CF0C80)
#define RPG_GAMECORE_TALKSENTENCEIMAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF16B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceImageRow_TypeDefinitionIndex = 14457;

	class TalkSentenceImageRow : public ::System::Object
	{
	public:
		::System::String* Comment; // 0x10
		::System::String* ImagePath; // 0x18
		::System::String* Speaker; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TalkSentenceImageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkSentenceImageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
