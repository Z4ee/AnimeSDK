#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

#define RPG_CLIENT_EMPTYMESSAGECONTENTBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A179BF0)
#define RPG_CLIENT_EMPTYMESSAGECONTENTBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A179BB0)
#define RPG_CLIENT_EMPTYMESSAGECONTENTBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A179C80)

namespace RPG::Client
{
	inline static constexpr unsigned int EmptyMessageContentBlock_TypeDefinitionIndex = 63302;

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

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYMESSAGECONTENTBLOCK_EQUALS_OFFSET))(this, a1);
		}
	};
}
