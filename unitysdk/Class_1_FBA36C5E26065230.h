#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_FBA36C5E26065230_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17B9B220)
#define CLASS_1_FBA36C5E26065230_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17B9AF10)
#define CLASS_1_FBA36C5E26065230__CTOR_OFFSET UNITYSDK_OFFSET(0x17B9B6B0)

inline static constexpr unsigned int Class_1_FBA36C5E26065230_TypeDefinitionIndex = 35654;

class Class_1_FBA36C5E26065230 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA36C5E26065230__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::GameCore::FixVec2 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::GameCore::FixVec2, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_FBA36C5E26065230_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixVec2 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::RPG::GameCore::FixVec2(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_FBA36C5E26065230_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
