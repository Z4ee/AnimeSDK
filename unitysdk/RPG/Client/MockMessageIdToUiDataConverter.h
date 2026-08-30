#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageUiData; }

#define RPG_CLIENT_MOCKMESSAGEIDTOUIDATACONVERTER_PRODUCEMESSAGEUIDATA_OFFSET UNITYSDK_OFFSET(0x19E245C0)
#define RPG_CLIENT_MOCKMESSAGEIDTOUIDATACONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E246F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MockMessageIdToUiDataConverter_TypeDefinitionIndex = 61642;

	class MockMessageIdToUiDataConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOCKMESSAGEIDTOUIDATACONVERTER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageUiData* ProduceMessageUiData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageUiData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOCKMESSAGEIDTOUIDATACONVERTER_PRODUCEMESSAGEUIDATA_OFFSET))(this, a1);
		}
	};
}
