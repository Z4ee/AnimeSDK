#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA1D2A0)
#define RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK_GET_EMOJIID_OFFSET UNITYSDK_OFFSET(0x1AA1D340)
#define RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK_GET_EMOJIPATH_OFFSET UNITYSDK_OFFSET(0x1AA1D320)
#define RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AA1D1B0)
#define RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK_SET_EMOJIID_OFFSET UNITYSDK_OFFSET(0x1AA1D350)
#define RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK_SET_EMOJIPATH_OFFSET UNITYSDK_OFFSET(0x1AA1D330)
#define RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA1D200)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentEmojiBlock_TypeDefinitionIndex = 60451;

	class MessageContentEmojiBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _EmojiPath_k__BackingField; // 0x18
		::System::UInt32 _EmojiID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::System::String* get_EmojiPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK_GET_EMOJIPATH_OFFSET))(this);
		}

		::System::Void set_EmojiPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK_SET_EMOJIPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_EmojiID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK_GET_EMOJIID_OFFSET))(this);
		}

		::System::Void set_EmojiID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTEMOJIBLOCK_SET_EMOJIID_OFFSET))(this, a1);
		}
	};
}
