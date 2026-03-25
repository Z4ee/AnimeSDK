#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B90E40)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9B90F00)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B90E10)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__BYIMAGEID_OFFSET UNITYSDK_OFFSET(0x9B91100)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9B90E30)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x9B90E20)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__GETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9B90F90)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentImageBlock_TypeDefinitionIndex = 51329;

	class MessageContentImageBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _ImagePath; // 0x18
		::System::UInt32 _ImageID; // 0x20

		::System::Void _ctor(::System::UInt32 imageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__CTOR_OFFSET))(this, imageID);
		}

		::System::Void _ctor_1(::System::String* imagePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__CTOR_1_OFFSET))(this, imagePath);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::String* _GetImagePath(::System::UInt32 imageID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__GETIMAGEPATH_OFFSET))(this, imageID);
		}

		::System::Boolean _ByImageID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__BYIMAGEID_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_GET_IMAGEPATH_OFFSET))(this);
		}
	};
}
