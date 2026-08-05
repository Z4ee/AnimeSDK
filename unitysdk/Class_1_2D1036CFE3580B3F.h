#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_DD19C571EC5F66F2.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_2D1036CFE3580B3F_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x169B9DB0)
#define CLASS_1_2D1036CFE3580B3F_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x169B9D20)
#define CLASS_1_2D1036CFE3580B3F__CTOR_OFFSET UNITYSDK_OFFSET(0x169B9E70)

inline static constexpr unsigned int Class_1_2D1036CFE3580B3F_TypeDefinitionIndex = 73108;

class Class_1_2D1036CFE3580B3F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D1036CFE3580B3F__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_DD19C571EC5F66F2 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_DD19C571EC5F66F2, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_2D1036CFE3580B3F_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_DD19C571EC5F66F2 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_DD19C571EC5F66F2(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_2D1036CFE3580B3F_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
