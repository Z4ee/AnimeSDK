#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/CombatPerformanceEventType.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_776478EBEEDA912E_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C7679C0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_776478EBEEDA912E_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C767950)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_776478EBEEDA912E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C759600)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_Class_1_9A90CD018E72DF20_Class_1_CEEE8FA1A9A5DBE3_1_Class_1_15FD556B84ED69AE_1_Class_1_776478EBEEDA912E_TypeDefinitionIndex = 36181;

	class GeneratedMessagePackResolver_Class_1_9A90CD018E72DF20_Class_1_CEEE8FA1A9A5DBE3_1_Class_1_15FD556B84ED69AE_1_Class_1_776478EBEEDA912E : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_776478EBEEDA912E__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::LittleGameShare::DiceCombatCore::CombatPerformanceEventType a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::LittleGameShare::DiceCombatCore::CombatPerformanceEventType, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_776478EBEEDA912E_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::LittleGameShare::DiceCombatCore::CombatPerformanceEventType Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::RPG::LittleGameShare::DiceCombatCore::CombatPerformanceEventType(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_776478EBEEDA912E_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
