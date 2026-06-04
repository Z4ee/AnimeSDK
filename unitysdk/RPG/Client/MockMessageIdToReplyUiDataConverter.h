#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageReplyUiData; }

#define RPG_CLIENT_MOCKMESSAGEIDTOREPLYUIDATACONVERTER_PRODUCEREPLYUIDATA_OFFSET UNITYSDK_OFFSET(0xC053190)
#define RPG_CLIENT_MOCKMESSAGEIDTOREPLYUIDATACONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0533E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MockMessageIdToReplyUiDataConverter_TypeDefinitionIndex = 57548;

	class MockMessageIdToReplyUiDataConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOCKMESSAGEIDTOREPLYUIDATACONVERTER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageReplyUiData* ProduceReplyUiData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageReplyUiData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOCKMESSAGEIDTOREPLYUIDATACONVERTER_PRODUCEREPLYUIDATA_OFFSET))(this, a1);
		}
	};
}
