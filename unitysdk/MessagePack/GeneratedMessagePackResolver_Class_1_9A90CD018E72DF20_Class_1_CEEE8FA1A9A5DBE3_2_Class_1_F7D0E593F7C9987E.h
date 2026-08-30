#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerModifierType.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_2_CLASS_1_F7D0E593F7C9987E_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15428B00)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_2_CLASS_1_F7D0E593F7C9987E_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15428A90)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_2_CLASS_1_F7D0E593F7C9987E__CTOR_OFFSET UNITYSDK_OFFSET(0x1541D3E0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_Class_1_9A90CD018E72DF20_Class_1_CEEE8FA1A9A5DBE3_2_Class_1_F7D0E593F7C9987E_TypeDefinitionIndex = 35501;

	class GeneratedMessagePackResolver_Class_1_9A90CD018E72DF20_Class_1_CEEE8FA1A9A5DBE3_2_Class_1_F7D0E593F7C9987E : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_2_CLASS_1_F7D0E593F7C9987E__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::GameCore::TeamTowersPlayerModifierType a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::GameCore::TeamTowersPlayerModifierType, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_2_CLASS_1_F7D0E593F7C9987E_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::TeamTowersPlayerModifierType Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::RPG::GameCore::TeamTowersPlayerModifierType(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_2_CLASS_1_F7D0E593F7C9987E_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
