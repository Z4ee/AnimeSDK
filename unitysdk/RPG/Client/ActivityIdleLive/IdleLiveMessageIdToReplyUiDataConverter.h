#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageReplyUiData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOREPLYUIDATACONVERTER_PRODUCEREPLYUIDATA_OFFSET UNITYSDK_OFFSET(0xB153820)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOREPLYUIDATACONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB153A60)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveMessageIdToReplyUiDataConverter_TypeDefinitionIndex = 70239;

	class IdleLiveMessageIdToReplyUiDataConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOREPLYUIDATACONVERTER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageReplyUiData* ProduceReplyUiData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageReplyUiData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOREPLYUIDATACONVERTER_PRODUCEREPLYUIDATA_OFFSET))(this, a1);
		}
	};
}
