#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTRAIDBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA88C690)
#define RPG_CLIENT_MESSAGECONTENTRAIDBLOCK_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xA88C730)
#define RPG_CLIENT_MESSAGECONTENTRAIDBLOCK_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xA88C740)
#define RPG_CLIENT_MESSAGECONTENTRAIDBLOCK_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA88C710)
#define RPG_CLIENT_MESSAGECONTENTRAIDBLOCK_GET_RAIDNAME_OFFSET UNITYSDK_OFFSET(0xA88C720)
#define RPG_CLIENT_MESSAGECONTENTRAIDBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA88C570)
#define RPG_CLIENT_MESSAGECONTENTRAIDBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA88C580)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentRaidBlock_TypeDefinitionIndex = 58259;

	class MessageContentRaidBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x18
		::RPG::Client::TextID _RaidName_k__BackingField; // 0x20
		::System::UInt32 _ItemID_k__BackingField; // 0x30
		::System::UInt32 _RaidID; // 0x34

		::System::Void _ctor(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRAIDBLOCK__CTOR_OFFSET))(this, itemID);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRAIDBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRAIDBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRAIDBLOCK_GET_ITEMID_OFFSET))(this);
		}

		::RPG::Client::TextID get_RaidName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRAIDBLOCK_GET_RAIDNAME_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRAIDBLOCK_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRAIDBLOCK_GET_ISFINISHED_OFFSET))(this);
		}
	};
}
