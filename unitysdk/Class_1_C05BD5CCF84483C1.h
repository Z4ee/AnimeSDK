#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_BF5180DEC115E66B.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_C05BD5CCF84483C1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13565240)
#define CLASS_1_C05BD5CCF84483C1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13564D90)
#define CLASS_1_C05BD5CCF84483C1__CTOR_OFFSET UNITYSDK_OFFSET(0x13565710)

inline static constexpr unsigned int Class_1_C05BD5CCF84483C1_TypeDefinitionIndex = 85194;

class Class_1_C05BD5CCF84483C1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C05BD5CCF84483C1__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_BF5180DEC115E66B a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_BF5180DEC115E66B, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C05BD5CCF84483C1_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_BF5180DEC115E66B Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_BF5180DEC115E66B(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C05BD5CCF84483C1_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
