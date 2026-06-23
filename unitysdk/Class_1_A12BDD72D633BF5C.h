#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_229502A94E9EB7E7.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_A12BDD72D633BF5C_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x150016E0)
#define CLASS_1_A12BDD72D633BF5C_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15001460)
#define CLASS_1_A12BDD72D633BF5C__CTOR_OFFSET UNITYSDK_OFFSET(0x15001990)

inline static constexpr unsigned int Class_1_A12BDD72D633BF5C_TypeDefinitionIndex = 60209;

class Class_1_A12BDD72D633BF5C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A12BDD72D633BF5C__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_229502A94E9EB7E7 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_229502A94E9EB7E7, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_A12BDD72D633BF5C_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_229502A94E9EB7E7 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_229502A94E9EB7E7(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_A12BDD72D633BF5C_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
