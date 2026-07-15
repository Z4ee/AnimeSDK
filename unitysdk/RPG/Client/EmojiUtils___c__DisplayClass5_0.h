#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_EMOJIUTILS___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D8AC60)
#define RPG_CLIENT_EMOJIUTILS___C__DISPLAYCLASS5_0__GETEMOJIIDS_B__0_OFFSET UNITYSDK_OFFSET(0x18D8AEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmojiUtils___c__DisplayClass5_0_TypeDefinitionIndex = 60443;

	class EmojiUtils___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* orderDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetEmojiIDs_b__0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS___C__DISPLAYCLASS5_0__GETEMOJIIDS_B__0_OFFSET))(this, a1, a2);
		}
	};
}
