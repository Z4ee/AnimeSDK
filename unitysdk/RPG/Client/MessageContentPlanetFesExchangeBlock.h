#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

class Class_1_C086E47345F86771;
namespace RPG::Client { class ChatMessagePlanetfesExchangeData; }

#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA1F600)
#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_GET_PLANETFESDATA_OFFSET UNITYSDK_OFFSET(0x1AA1F650)
#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AA1F530)
#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA1F580)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentPlanetFesExchangeBlock_TypeDefinitionIndex = 60463;

	class MessageContentPlanetFesExchangeBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::ChatMessagePlanetfesExchangeData* _PlanetFesData_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_C086E47345F86771* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::RPG::Client::ChatMessagePlanetfesExchangeData* get_PlanetFesData()
		{
			return ((::RPG::Client::ChatMessagePlanetfesExchangeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_GET_PLANETFESDATA_OFFSET))(this);
		}
	};
}
