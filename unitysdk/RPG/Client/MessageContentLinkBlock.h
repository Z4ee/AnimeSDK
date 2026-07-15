#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class MessageLinkRow; }
namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA1F120)
#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0x1AA1F1D0)
#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AA1F1C0)
#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1AA1F1A0)
#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1AA1F1B0)
#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AA1EFA0)
#define RPG_CLIENT_MESSAGECONTENTLINKBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA1EFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentLinkBlock_TypeDefinitionIndex = 60461;

	class MessageContentLinkBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::GameCore::MessageLinkRow* _LinkConfig; // 0x18
		::System::String* _ImagePath_k__BackingField; // 0x20
		::System::UInt32 _ItemID_k__BackingField; // 0x28
		::RPG::Client::TextID _Title_k__BackingField; // 0x30

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
