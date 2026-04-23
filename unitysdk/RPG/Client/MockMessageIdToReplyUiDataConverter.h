#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageReplyUiData; }

#define RPG_CLIENT_MOCKMESSAGEIDTOREPLYUIDATACONVERTER_PRODUCEREPLYUIDATA_OFFSET UNITYSDK_OFFSET(0xA904D30)
#define RPG_CLIENT_MOCKMESSAGEIDTOREPLYUIDATACONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA904EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MockMessageIdToReplyUiDataConverter_TypeDefinitionIndex = 56764;

	class MockMessageIdToReplyUiDataConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOCKMESSAGEIDTOREPLYUIDATACONVERTER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageReplyUiData* ProduceReplyUiData(::System::UInt32 contentId)
		{
			return ((::RPG::Client::MessageReplyUiData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOCKMESSAGEIDTOREPLYUIDATACONVERTER_PRODUCEREPLYUIDATA_OFFSET))(this, contentId);
		}
	};
}
