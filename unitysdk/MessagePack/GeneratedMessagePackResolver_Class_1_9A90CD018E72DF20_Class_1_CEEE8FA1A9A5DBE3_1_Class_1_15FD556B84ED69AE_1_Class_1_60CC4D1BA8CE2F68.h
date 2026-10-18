#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_60CC4D1BA8CE2F68_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C737C00)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_60CC4D1BA8CE2F68_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C737B90)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_60CC4D1BA8CE2F68__CTOR_OFFSET UNITYSDK_OFFSET(0x1C72B3F0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_Class_1_9A90CD018E72DF20_Class_1_CEEE8FA1A9A5DBE3_1_Class_1_15FD556B84ED69AE_1_Class_1_60CC4D1BA8CE2F68_TypeDefinitionIndex = 36182;

	class GeneratedMessagePackResolver_Class_1_9A90CD018E72DF20_Class_1_CEEE8FA1A9A5DBE3_1_Class_1_15FD556B84ED69AE_1_Class_1_60CC4D1BA8CE2F68 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_60CC4D1BA8CE2F68__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_60CC4D1BA8CE2F68_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_60CC4D1BA8CE2F68_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
