#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B23AA20)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B23AAE0)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B23A9B0)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__BYIMAGEID_OFFSET UNITYSDK_OFFSET(0x1B23ACE0)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B23AA10)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B23AA00)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__GETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B23AB70)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentImageBlock_TypeDefinitionIndex = 63311;

	class MessageContentImageBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _ImagePath; // 0x18
		::System::UInt32 _ImageID; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__CTOR_1_OFFSET))(this, a1);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::System::String* _GetImagePath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__GETIMAGEPATH_OFFSET))(this, a1);
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
