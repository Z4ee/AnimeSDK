#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleLogUploadContent; }
namespace System { class String; }

#define RPG_CLIENT_BATTLELOGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6ABC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleLogModel_TypeDefinitionIndex = 61054;

	class BattleLogModel : public ::System::Object
	{
	public:
		::System::Int32 applicationId; // 0x10
		::System::String* applicationName; // 0x18
		::System::String* msgId; // 0x20
		::System::String* eventTime; // 0x28
		::System::Int32 eventId; // 0x30
		::System::String* eventName; // 0x38
		::RPG::Client::BattleLogUploadContent* uploadContent; // 0x40
		::System::String* dump; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELOGMODEL__CTOR_OFFSET))(this);
		}
	};
}
