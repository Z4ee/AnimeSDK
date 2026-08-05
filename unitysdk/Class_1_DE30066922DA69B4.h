#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_7F39F8692AFCECD1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_DE30066922DA69B4_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE986D60)
#define CLASS_1_DE30066922DA69B4_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xE986A90)
#define CLASS_1_DE30066922DA69B4__CTOR_OFFSET UNITYSDK_OFFSET(0xE987050)

inline static constexpr unsigned int Class_1_DE30066922DA69B4_TypeDefinitionIndex = 48647;

class Class_1_DE30066922DA69B4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE30066922DA69B4__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_7F39F8692AFCECD1 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_7F39F8692AFCECD1, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_DE30066922DA69B4_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_7F39F8692AFCECD1 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_7F39F8692AFCECD1(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_DE30066922DA69B4_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
