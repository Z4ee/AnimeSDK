#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

#define RPG_CLIENT_EMPTYMESSAGECONTENTBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x95FD9B0)
#define RPG_CLIENT_EMPTYMESSAGECONTENTBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x95FD9A0)
#define RPG_CLIENT_EMPTYMESSAGECONTENTBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x95FDA30)

namespace RPG::Client
{
	inline static constexpr unsigned int EmptyMessageContentBlock_TypeDefinitionIndex = 51321;

	class EmptyMessageContentBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYMESSAGECONTENTBLOCK__CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYMESSAGECONTENTBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYMESSAGECONTENTBLOCK_EQUALS_OFFSET))(this, other);
		}
	};
}
