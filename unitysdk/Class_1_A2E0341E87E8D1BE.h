#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

class Class_1_1BDCF298D6EFEE00;
namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_A2E0341E87E8D1BE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13CBBEC0)
#define CLASS_1_A2E0341E87E8D1BE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13CBBC30)
#define CLASS_1_A2E0341E87E8D1BE__CTOR_OFFSET UNITYSDK_OFFSET(0x13CBC150)

inline static constexpr unsigned int Class_1_A2E0341E87E8D1BE_TypeDefinitionIndex = 79562;

class Class_1_A2E0341E87E8D1BE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2E0341E87E8D1BE__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Class_1_1BDCF298D6EFEE00* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Class_1_1BDCF298D6EFEE00*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_A2E0341E87E8D1BE_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_1BDCF298D6EFEE00* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Class_1_1BDCF298D6EFEE00*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_A2E0341E87E8D1BE_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
