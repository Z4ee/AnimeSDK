#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceEmojiRow; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACECHATEMOJIDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x9232810)
#define RPG_CLIENT_CAKERACECHATEMOJIDATAITEM_GET_EMOJIID_OFFSET UNITYSDK_OFFSET(0x9232870)
#define RPG_CLIENT_CAKERACECHATEMOJIDATAITEM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9232990)
#define RPG_CLIENT_CAKERACECHATEMOJIDATAITEM_GET_ISPLAYERUSE_OFFSET UNITYSDK_OFFSET(0x9232880)
#define RPG_CLIENT_CAKERACECHATEMOJIDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9232930)
#define RPG_CLIENT_CAKERACECHATEMOJIDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9232860)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceChatEmojiDataItem_TypeDefinitionIndex = 51144;

	class CakeRaceChatEmojiDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _EmojiID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 emojiID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATEMOJIDATAITEM__CTOR_OFFSET))(this, emojiID);
		}

		static ::RPG::Client::CakeRaceChatEmojiDataItem* Create(::System::UInt32 emojiID)
		{
			return ((::RPG::Client::CakeRaceChatEmojiDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATEMOJIDATAITEM_CREATE_OFFSET))(emojiID);
		}

		::System::UInt32 get_EmojiID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATEMOJIDATAITEM_GET_EMOJIID_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATEMOJIDATAITEM_GET_ISPLAYERUSE_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATEMOJIDATAITEM_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceEmojiRow* get__Row()
		{
			return ((::RPG::GameCore::CakeRaceEmojiRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATEMOJIDATAITEM_GET__ROW_OFFSET))(this);
		}
	};
}
