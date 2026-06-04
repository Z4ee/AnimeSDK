#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xBFD9AC0)
#define RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_GET_HASSEEN_OFFSET UNITYSDK_OFFSET(0xBFD9B90)
#define RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBFD9B50)
#define RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xBFD9B40)
#define RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBFD99B0)
#define RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0xBFD9B70)
#define RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBFD9B60)
#define RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0xBFD9B80)
#define RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD99C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentVideoBlock_TypeDefinitionIndex = 59188;

	class MessageContentVideoBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x18
		::System::UInt32 _VideoID_k__BackingField; // 0x20
		::System::UInt32 _itemID; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_GET_ITEMID_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_SET_IMAGEPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_GET_VIDEOID_OFFSET))(this);
		}

		::System::Void set_VideoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_SET_VIDEOID_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTVIDEOBLOCK_GET_HASSEEN_OFFSET))(this);
		}
	};
}
