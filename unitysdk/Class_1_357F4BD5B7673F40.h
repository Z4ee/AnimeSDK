#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_357F4BD5B7673F40_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15BAF7C0)
#define CLASS_1_357F4BD5B7673F40_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15BAF720)
#define CLASS_1_357F4BD5B7673F40__CTOR_OFFSET UNITYSDK_OFFSET(0x15BAF920)

inline static constexpr unsigned int Class_1_357F4BD5B7673F40_TypeDefinitionIndex = 64318;

class Class_1_357F4BD5B7673F40 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_357F4BD5B7673F40__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_174BD6D3EB04B2EE a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_174BD6D3EB04B2EE, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_357F4BD5B7673F40_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_174BD6D3EB04B2EE Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_174BD6D3EB04B2EE(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_357F4BD5B7673F40_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
