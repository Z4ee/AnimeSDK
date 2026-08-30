#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/Client/LittleGameShare/SpawnEntityMode.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_CLASS_1_15FD556B84ED69AE_CLASS_1_997A2A2CC7B0D4CE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15421900)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_CLASS_1_15FD556B84ED69AE_CLASS_1_997A2A2CC7B0D4CE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15421890)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_CLASS_1_15FD556B84ED69AE_CLASS_1_997A2A2CC7B0D4CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1541D3B0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_Class_1_9A90CD018E72DF20_Class_1_CEEE8FA1A9A5DBE3_Class_1_15FD556B84ED69AE_Class_1_997A2A2CC7B0D4CE_TypeDefinitionIndex = 35433;

	class GeneratedMessagePackResolver_Class_1_9A90CD018E72DF20_Class_1_CEEE8FA1A9A5DBE3_Class_1_15FD556B84ED69AE_Class_1_997A2A2CC7B0D4CE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_CLASS_1_15FD556B84ED69AE_CLASS_1_997A2A2CC7B0D4CE__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::Client::LittleGameShare::SpawnEntityMode a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::Client::LittleGameShare::SpawnEntityMode, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_CLASS_1_15FD556B84ED69AE_CLASS_1_997A2A2CC7B0D4CE_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGameShare::SpawnEntityMode Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::RPG::Client::LittleGameShare::SpawnEntityMode(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_CLASS_1_15FD556B84ED69AE_CLASS_1_997A2A2CC7B0D4CE_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
