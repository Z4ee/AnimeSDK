#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_D19F1A95B589BD6B.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_0848C6B16921C6FC_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1376F810)
#define CLASS_1_0848C6B16921C6FC_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1376F790)
#define CLASS_1_0848C6B16921C6FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1376F8A0)

inline static constexpr unsigned int Class_1_0848C6B16921C6FC_TypeDefinitionIndex = 48729;

class Class_1_0848C6B16921C6FC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0848C6B16921C6FC__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_D19F1A95B589BD6B a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_D19F1A95B589BD6B, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_0848C6B16921C6FC_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_D19F1A95B589BD6B Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_D19F1A95B589BD6B(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_0848C6B16921C6FC_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
