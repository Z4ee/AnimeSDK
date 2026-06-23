#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_9D56CD120C0D8F54.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_7752FBE7A7FB8879_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xF5F0560)
#define CLASS_1_7752FBE7A7FB8879_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xF5F0140)
#define CLASS_1_7752FBE7A7FB8879__CTOR_OFFSET UNITYSDK_OFFSET(0xF5F09D0)

inline static constexpr unsigned int Class_1_7752FBE7A7FB8879_TypeDefinitionIndex = 73376;

class Class_1_7752FBE7A7FB8879 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7752FBE7A7FB8879__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_9D56CD120C0D8F54 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_9D56CD120C0D8F54, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_7752FBE7A7FB8879_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_9D56CD120C0D8F54 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_9D56CD120C0D8F54(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_7752FBE7A7FB8879_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
