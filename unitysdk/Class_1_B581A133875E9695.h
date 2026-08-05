#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_5D2BAC4205773FE1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_B581A133875E9695_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x117B8670)
#define CLASS_1_B581A133875E9695_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x117B8400)
#define CLASS_1_B581A133875E9695__CTOR_OFFSET UNITYSDK_OFFSET(0x117B8920)

inline static constexpr unsigned int Class_1_B581A133875E9695_TypeDefinitionIndex = 52221;

class Class_1_B581A133875E9695 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B581A133875E9695__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_5D2BAC4205773FE1 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_5D2BAC4205773FE1, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_B581A133875E9695_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_5D2BAC4205773FE1 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_5D2BAC4205773FE1(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_B581A133875E9695_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
