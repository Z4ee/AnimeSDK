#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

#define RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B92800)
#define RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B927F0)
#define RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x9B928A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentSelectGrowthTargetBlock_TypeDefinitionIndex = 51337;

	class MessageContentSelectGrowthTargetBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK__CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK_EQUALS_OFFSET))(this, other);
		}
	};
}
