#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageUiData; }

#define RPG_CLIENT_MOCKMESSAGEIDTOUIDATACONVERTER_PRODUCEMESSAGEUIDATA_OFFSET UNITYSDK_OFFSET(0xA904EF0)
#define RPG_CLIENT_MOCKMESSAGEIDTOUIDATACONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA905020)

namespace RPG::Client
{
	inline static constexpr unsigned int MockMessageIdToUiDataConverter_TypeDefinitionIndex = 56765;

	class MockMessageIdToUiDataConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOCKMESSAGEIDTOUIDATACONVERTER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageUiData* ProduceMessageUiData(::System::UInt32 contentId)
		{
			return ((::RPG::Client::MessageUiData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOCKMESSAGEIDTOUIDATACONVERTER_PRODUCEMESSAGEUIDATA_OFFSET))(this, contentId);
		}
	};
}
