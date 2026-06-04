#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class MessageLinkRow; }
namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xBFD7A70)
#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0xBFD7B20)
#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBFD7B10)
#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xBFD7AF0)
#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xBFD7B00)
#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBFD7930)
#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD7940)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentLinkBlock_TypeDefinitionIndex = 59190;

	class MessageContentLinkBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x18
		::RPG::GameCore::MessageLinkRow* _LinkConfig; // 0x20
		::RPG::Client::TextID _Title_k__BackingField; // 0x28
		::System::UInt32 _ItemID_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLINKBLOCK__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLINKBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_ITEMID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Boolean get_Closed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_CLOSED_OFFSET))(this);
		}
	};
}
