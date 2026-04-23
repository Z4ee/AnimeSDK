#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

class Class_1_9F9C2AEAEFFE3610;
namespace RPG::Client { class ChatMessagePlanetfesExchangeData; }

#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA88C1F0)
#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_GET_PLANETFESDATA_OFFSET UNITYSDK_OFFSET(0xA88C240)
#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA88C160)
#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA88C170)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentPlanetFesExchangeBlock_TypeDefinitionIndex = 58262;

	class MessageContentPlanetFesExchangeBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::ChatMessagePlanetfesExchangeData* _PlanetFesData_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_9F9C2AEAEFFE3610* planetFesChatMsg, ::System::UInt32 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9F9C2AEAEFFE3610*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK__CTOR_OFFSET))(this, planetFesChatMsg, timeStamp);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_EQUALS_OFFSET))(this, other);
		}

		::RPG::Client::ChatMessagePlanetfesExchangeData* get_PlanetFesData()
		{
			return ((::RPG::Client::ChatMessagePlanetfesExchangeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_GET_PLANETFESDATA_OFFSET))(this);
		}
	};
}
