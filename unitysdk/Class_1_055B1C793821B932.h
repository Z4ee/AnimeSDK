#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_055B1C793821B932_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13248AC0)
#define CLASS_1_055B1C793821B932_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13248A20)
#define CLASS_1_055B1C793821B932__CTOR_OFFSET UNITYSDK_OFFSET(0x13248BB0)

inline static constexpr unsigned int Class_1_055B1C793821B932_TypeDefinitionIndex = 77642;

class Class_1_055B1C793821B932 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_055B1C793821B932__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_E147DFD2A4EE8B0B a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_E147DFD2A4EE8B0B, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_055B1C793821B932_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_E147DFD2A4EE8B0B Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_E147DFD2A4EE8B0B(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_055B1C793821B932_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
