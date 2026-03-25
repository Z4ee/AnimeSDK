#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/GameMode/DiceCombatGameMode.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_D459B91D7F794111_CLASS_1_82F649E7519792D1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16703010)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_D459B91D7F794111_CLASS_1_82F649E7519792D1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16702FA0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_D459B91D7F794111_CLASS_1_82F649E7519792D1__CTOR_OFFSET UNITYSDK_OFFSET(0x167030F0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_Class_1_9A90CD018E72DF20_Class_1_CEEE8FA1A9A5DBE3_1_Class_1_15FD556B84ED69AE_1_Class_1_D459B91D7F794111_Class_1_82F649E7519792D1_TypeDefinitionIndex = 28328;

	class GeneratedMessagePackResolver_Class_1_9A90CD018E72DF20_Class_1_CEEE8FA1A9A5DBE3_1_Class_1_15FD556B84ED69AE_1_Class_1_D459B91D7F794111_Class_1_82F649E7519792D1 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_D459B91D7F794111_CLASS_1_82F649E7519792D1__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::LittleGameShare::DiceCombatCore::GameMode::DiceCombatGameMode a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::LittleGameShare::DiceCombatCore::GameMode::DiceCombatGameMode, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_D459B91D7F794111_CLASS_1_82F649E7519792D1_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::LittleGameShare::DiceCombatCore::GameMode::DiceCombatGameMode Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::RPG::LittleGameShare::DiceCombatCore::GameMode::DiceCombatGameMode(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_9A90CD018E72DF20_CLASS_1_CEEE8FA1A9A5DBE3_1_CLASS_1_15FD556B84ED69AE_1_CLASS_1_D459B91D7F794111_CLASS_1_82F649E7519792D1_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
