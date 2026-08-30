#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersBrickModifierType.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_CLASS_1_15FD556B84ED69AE_CLASS_1_D459B91D7F794111_CLASS_1_7362C247D4741F61_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C212100)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_CLASS_1_15FD556B84ED69AE_CLASS_1_D459B91D7F794111_CLASS_1_7362C247D4741F61_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C212090)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_CLASS_1_15FD556B84ED69AE_CLASS_1_D459B91D7F794111_CLASS_1_7362C247D4741F61__CTOR_OFFSET UNITYSDK_OFFSET(0x1C209280)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_Class_1_9A90CD018E72DF20_Class_1_CEEE8FA1A9A5DBE3_Class_1_15FD556B84ED69AE_Class_1_D459B91D7F794111_Class_1_7362C247D4741F61_TypeDefinitionIndex = 35431;

	class GeneratedMessagePackResolver_Class_1_9A90CD018E72DF20_Class_1_CEEE8FA1A9A5DBE3_Class_1_15FD556B84ED69AE_Class_1_D459B91D7F794111_Class_1_7362C247D4741F61 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_CLASS_1_15FD556B84ED69AE_CLASS_1_D459B91D7F794111_CLASS_1_7362C247D4741F61__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickModifierType a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickModifierType, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_CLASS_1_15FD556B84ED69AE_CLASS_1_D459B91D7F794111_CLASS_1_7362C247D4741F61_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickModifierType Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickModifierType(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_CLASS_1_15FD556B84ED69AE_CLASS_1_D459B91D7F794111_CLASS_1_7362C247D4741F61_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
