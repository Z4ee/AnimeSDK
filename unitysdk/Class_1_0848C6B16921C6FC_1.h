#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_00CDCC1C68AC93EE.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_0848C6B16921C6FC_1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17B623B0)
#define CLASS_1_0848C6B16921C6FC_1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17B62330)
#define CLASS_1_0848C6B16921C6FC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17B62420)

inline static constexpr unsigned int Class_1_0848C6B16921C6FC_1_TypeDefinitionIndex = 49594;

class Class_1_0848C6B16921C6FC_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0848C6B16921C6FC_1__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_00CDCC1C68AC93EE a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_00CDCC1C68AC93EE, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_0848C6B16921C6FC_1_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_00CDCC1C68AC93EE Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_00CDCC1C68AC93EE(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_0848C6B16921C6FC_1_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
